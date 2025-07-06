#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAbstractTableModel>
#include <vector>
#include <string>
#include <algorithm>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

// Структуры данных
struct Comp {
    std::string Name, Section;
    int         Price;
    bool operator==(Comp const& o) const { return Name == o.Name; }
};

struct Bag {
    std::string Name, Section;
    int         Num;
    bool operator==(Bag const& o) const { return Name == o.Name; }
};

template <class T>
struct COMP {
    std::vector<T> M;
    COMP& operator=(COMP const& o) { M = o.M; return *this; }
    COMP operator+(COMP const& rhs) const {
        COMP r = *this;
        for (auto const& x : rhs.M) {
            bool found = false;
            for (auto const& y : r.M)
                if (y == x) { found = true; break; }
            if (!found) r.M.push_back(x);
        }
        return r;
    }
    void sortByNameAsc() {
        std::sort(M.begin(), M.end(),
                  [](T const& a, T const& b){ return a.Name < b.Name; });
    }
    void sortByNameDesc() {
        std::sort(M.begin(), M.end(),
                  [](T const& a, T const& b){ return a.Name > b.Name; });
    }
    template<class Cmp>
    void sortCustom(Cmp cmp) {
        std::sort(M.begin(), M.end(), cmp);
    }
    T* findByName(const QString& key) {
        for (auto& x : M)
            if (QString::fromStdString(x.Name) == key)
                return &x;
        return nullptr;
    }
};

// Модель для таблицы Comp
class CompTableModel : public QAbstractTableModel {
    Q_OBJECT
public:
    explicit CompTableModel(QObject *parent = nullptr);
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const override;
    void setData(const COMP<Comp>& data);
    const COMP<Comp>& getData() const { return m_data; }

private:
    COMP<Comp> m_data;
};

// Модель для таблицы Bag
class BagTableModel : public QAbstractTableModel {
    Q_OBJECT
public:
    explicit BagTableModel(QObject *parent = nullptr);
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const override;
    void setData(const COMP<Bag>& data);
    const COMP<Bag>& getData() const { return m_data; }

private:
    COMP<Bag> m_data;
};

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void loadComp1();
    void loadComp2();
    void combineComp();
    void sortCompAsc();
    void sortCompDesc();
    void searchComp();

    void loadBag1();
    void loadBag2();
    void combineBag();
    void sortBag();
    void searchBag();

private:
    Ui::MainWindow *ui;
    CompTableModel *compModel;
    BagTableModel *bagModel;
    COMP<Comp> compData1, compData2;
    COMP<Bag> bagData1, bagData2;
};

#endif // MAINWINDOW_H
