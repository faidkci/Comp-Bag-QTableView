#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <fstream>

// Реализация моделей
CompTableModel::CompTableModel(QObject *parent) : QAbstractTableModel(parent) {}

int CompTableModel::rowCount(const QModelIndex &parent) const {
    return parent.isValid() ? 0 : static_cast<int>(m_data.M.size());
}

int CompTableModel::columnCount(const QModelIndex &parent) const {
    return parent.isValid() ? 0 : 3;
}

QVariant CompTableModel::data(const QModelIndex &index, int role) const {
    if (!index.isValid() || role != Qt::DisplayRole ||
        index.row() >= static_cast<int>(m_data.M.size()))
        return QVariant();

    const Comp &item = m_data.M[index.row()];
    switch (index.column()) {
    case 0: return QString::fromStdString(item.Name);
    case 1: return QString::fromStdString(item.Section);
    case 2: return item.Price;
    default: return QVariant();
    }
}

QVariant CompTableModel::headerData(int section, Qt::Orientation orientation, int role) const {
    if (role != Qt::DisplayRole || orientation != Qt::Horizontal)
        return QVariant();

    switch (section) {
    case 0: return "Название";
    case 1: return "Категория";
    case 2: return "Цена";
    default: return QVariant();
    }
}

void CompTableModel::setData(const COMP<Comp> &data) {
    beginResetModel();
    m_data = data;
    endResetModel();
}

BagTableModel::BagTableModel(QObject *parent) : QAbstractTableModel(parent) {}

int BagTableModel::rowCount(const QModelIndex &parent) const {
    return parent.isValid() ? 0 : static_cast<int>(m_data.M.size());
}

int BagTableModel::columnCount(const QModelIndex &parent) const {
    return parent.isValid() ? 0 : 3;
}

QVariant BagTableModel::data(const QModelIndex &index, int role) const {
    if (!index.isValid() || role != Qt::DisplayRole ||
        index.row() >= static_cast<int>(m_data.M.size()))
        return QVariant();

    const Bag &item = m_data.M[index.row()];
    switch (index.column()) {
    case 0: return QString::fromStdString(item.Name);
    case 1: return item.Num;
    case 2: return QString::fromStdString(item.Section);
    default: return QVariant();
    }
}

QVariant BagTableModel::headerData(int section, Qt::Orientation orientation, int role) const {
    if (role != Qt::DisplayRole || orientation != Qt::Horizontal)
        return QVariant();

    switch (section) {
    case 0: return "Наименование";
    case 1: return "Количество";
    case 2: return "Категория";
    default: return QVariant();
    }
}

void BagTableModel::setData(const COMP<Bag> &data) {
    beginResetModel();
    m_data = data;
    endResetModel();
}

// Реализация MainWindow
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , compModel(new CompTableModel(this))
    , bagModel(new BagTableModel(this))
{
    ui->setupUi(this);

    // Устанавливаем модели в представления
    ui->compTableView->setModel(compModel);
    ui->bagTableView->setModel(bagModel);

    // Настройка внешнего вида таблиц
    ui->compTableView->horizontalHeader()->setStretchLastSection(true);
    ui->bagTableView->horizontalHeader()->setStretchLastSection(true);

    // Подключение сигналов
    connect(ui->compLoad1, &QPushButton::clicked, this, &MainWindow::loadComp1);
    connect(ui->compLoad2, &QPushButton::clicked, this, &MainWindow::loadComp2);
    connect(ui->compCombine, &QPushButton::clicked, this, &MainWindow::combineComp);
    connect(ui->compSortAsc, &QPushButton::clicked, this, &MainWindow::sortCompAsc);
    connect(ui->compSortDesc, &QPushButton::clicked, this, &MainWindow::sortCompDesc);
    connect(ui->compSearchBtn, &QPushButton::clicked, this, &MainWindow::searchComp);

    connect(ui->bagLoad1, &QPushButton::clicked, this, &MainWindow::loadBag1);
    connect(ui->bagLoad2, &QPushButton::clicked, this, &MainWindow::loadBag2);
    connect(ui->bagCombine, &QPushButton::clicked, this, &MainWindow::combineBag);
    connect(ui->bagSort, &QPushButton::clicked, this, &MainWindow::sortBag);
    connect(ui->bagSearchBtn, &QPushButton::clicked, this, &MainWindow::searchBag);
}

MainWindow::~MainWindow() {
    delete ui;
}

// Методы для работы с Comp
void MainWindow::loadComp1() {
    QString fn = QFileDialog::getOpenFileName(this, "Open Comp1");
    if (fn.isEmpty()) return;
    ui->compFile1->setText(fn);
    compData1.M.clear();

    std::ifstream f(fn.toStdString());
    std::string line;
    while (std::getline(f, line)) {
        if (line.empty()) continue;
        auto parts = QString::fromStdString(line).split(';');
        if (parts.size() == 3) {
            Comp c;
            c.Name    = parts[0].toStdString();
            c.Section = parts[1].toStdString();
            c.Price   = parts[2].toInt();
            compData1.M.push_back(c);
        }
    }
    compModel->setData(compData1);
}

void MainWindow::loadComp2() {
    QString fn = QFileDialog::getOpenFileName(this, "Open Comp2");
    if (fn.isEmpty()) return;
    ui->compFile2->setText(fn);
    compData2.M.clear();

    std::ifstream f(fn.toStdString());
    std::string line;
    while (std::getline(f, line)) {
        if (line.empty()) continue;
        auto parts = QString::fromStdString(line).split(';');
        if (parts.size() == 3) {
            Comp c;
            c.Name    = parts[0].toStdString();
            c.Section = parts[1].toStdString();
            c.Price   = parts[2].toInt();
            compData2.M.push_back(c);
        }
    }
    compModel->setData(compData2);
}

void MainWindow::combineComp() {
    COMP<Comp> combined = compData1 + compData2;
    compModel->setData(combined);
}

void MainWindow::sortCompAsc() {
    COMP<Comp> current = compModel->getData();
    current.sortByNameAsc();
    compModel->setData(current);
}

void MainWindow::sortCompDesc() {
    COMP<Comp> current = compModel->getData();
    current.sortByNameDesc();
    compModel->setData(current);
}

void MainWindow::searchComp() {
    QString key = ui->compSearch->text();
    COMP<Comp> current = compModel->getData();
    if (auto p = current.findByName(key)) {
        QMessageBox::information(this, "Found Comp",
                                 QString::fromStdString(p->Name) + " | " +
                                     QString::fromStdString(p->Section) + " | " +
                                     QString::number(p->Price));
    } else {
        QMessageBox::warning(this, "Not found", "Comp \"" + key + "\" not found");
    }
}

// Методы для работы с Bag
void MainWindow::loadBag1() {
    QString fn = QFileDialog::getOpenFileName(this, "Open Bag1");
    if (fn.isEmpty()) return;
    ui->bagFile1->setText(fn);
    bagData1.M.clear();

    std::ifstream f(fn.toStdString());
    std::string line;
    while (std::getline(f, line)) {
        if (line.empty()) continue;
        auto parts = QString::fromStdString(line).split(';');
        if (parts.size() == 3) {
            Bag b;
            b.Name    = parts[0].toStdString();
            b.Num     = parts[1].toInt();
            b.Section = parts[2].toStdString();
            bagData1.M.push_back(b);
        }
    }
    bagModel->setData(bagData1);
}

void MainWindow::loadBag2() {
    QString fn = QFileDialog::getOpenFileName(this, "Open Bag2");
    if (fn.isEmpty()) return;
    ui->bagFile2->setText(fn);
    bagData2.M.clear();

    std::ifstream f(fn.toStdString());
    std::string line;
    while (std::getline(f, line)) {
        if (line.empty()) continue;
        auto parts = QString::fromStdString(line).split(';');
        if (parts.size() == 3) {
            Bag b;
            b.Name    = parts[0].toStdString();
            b.Num     = parts[1].toInt();
            b.Section = parts[2].toStdString();
            bagData2.M.push_back(b);
        }
    }
    bagModel->setData(bagData2);
}

void MainWindow::combineBag() {
    COMP<Bag> combined = bagData1 + bagData2;
    bagModel->setData(combined);
}

void MainWindow::sortBag() {
    COMP<Bag> current = bagModel->getData();
    current.sortCustom([](Bag const& a, Bag const& b) {
        if (a.Section != b.Section) return a.Section < b.Section;
        return a.Name < b.Name;
    });
    bagModel->setData(current);
}

void MainWindow::searchBag() {
    QString key = ui->bagSearch->text();
    COMP<Bag> current = bagModel->getData();
    if (auto p = current.findByName(key)) {
        QMessageBox::information(this, "Found Bag",
                                 QString::fromStdString(p->Name) + " | " +
                                     QString::number(p->Num) + " | " +
                                     QString::fromStdString(p->Section));
    } else {
        QMessageBox::warning(this, "Not found", "Bag \"" + key + "\" not found");
    }
}
