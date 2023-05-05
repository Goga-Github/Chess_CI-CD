#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    // +
    int arr[8][8] =
    {
        {81, 82, 83, 84, 85, 86, 87, 88}, // 81 - a/4, 82 - b/4, 83 - c/4 ...
        {71, 72, 73, 74, 75, 76, 77, 78}, // 71 - a/4, 72 - b/4, 73 - c/4 ...
        {61, 62, 63, 64, 65, 66, 67, 68}, // 61 - a/4, 62 - b/4, 63 - c/4 ...
        {51, 52, 53, 54, 55, 56, 57, 58}, // 51 - a/4, 52 - b/4, 53 - c/4 ...
        {41, 42, 43, 44, 45, 46, 47, 48}, // 41 - a/4, 42 - b/4, 43 - c/4 ...
        {31, 32, 33, 34, 35, 36, 37, 38}, // 31 - a/3, 32 - b/3, 33 - c/3 ...
        {21, 22, 23, 24, 25, 26, 27, 28}, // 21 - a/2, 22 - b/2, 23 - c/2 ...
        {11, 12, 13, 14, 15, 16, 17, 18}  // 11 - a/1, 12 - b/1, 13 - c/1 ...
    };

    // Переменные (фигуры)
    int bk; // Черный король
    int wk; // Белый король

    int we; // Белый слон (вверх направо)
    int wec; // Белый слон (вверх налево)
    int wer; // Белый слон (вниз направо)
    int wel; // Белый слон (вниз налево)

    int wl; // Белая ладья (направо)
    int wll; // Белая ладья (налево)
    int wlu; // Белая ладья (вверх)
    int wld; // Белая ладья (вниз)


    // Ввод, вывод
    cout << "Координата черного короля: ";
    cin >> bk;
    cout << "Координата белого короля: ";
    cin >> wk;
    cout << "Координата белой ладьи (wl): ";
    cin >> wl;
    cout << "Координата белого слона (we): ";
    cin >> we;

    wec = we;
    wel = we;
    wer = we;

    wll = wl;
    wlu = wl;
    wld = wl;



    //*******************************************************************************************************************************************************************
    // Слон
    // Белый слон (вверх направо)
    if (we != bk && we != 18 && we != 28 && we != 38 && we != 48 && we != 58 && we != 68 && we != 78 && we != 88 && we != 87 && we != 86 && we != 85 && we != 84 && we != 83 && we != 82 && we != 81)
    {
        while (we != bk)
        {
            we = we + 11;
            if (we == wk || we == wl)
            {
                cout << "Шаха нет!";
                break;
            }
            else if (we == bk)
            {
                cout << "Шах слоном!";
                break;
            }
            else if (we != bk && we == 28 || we == 38 || we == 48 || we == 58 || we == 68 || we == 78 || we == 88 || we == 87 || we == 86 || we == 85 || we == 84 || we == 83 || we == 82)
            {
                break;
            }
        }
    }

    // Белый слон (вверх налево)
    if (wec != bk && we != bk && we != wk && we != wl && wec != 11 && wec != 21 && wec != 31 && wec != 41 && wec != 51 && wec != 61 && wec != 71 && wec != 81 && wec != 82 && wec != 83 && wec != 84 && wec != 85 && wec != 86 && wec != 87 && wec != 88)
    {
        while (wec != bk)
        {
            wec = wec + 9;
            if (wec == wk || wec == wl)
            {
                cout << "Шаха нет!";
                break;
            }
            else if (wec == bk)
            {
                cout << "Шах слоном!";
                break;
            }
            else if (wec != bk && we != bk && wec == 21 || wec == 31 || wec == 41 || wec == 51 || wec == 61 || wec == 71 || wec == 81 || wec == 82 || wec == 83 || wec == 84 || wec == 85 || wec == 86 || wec == 87)
            {
                break;
            }
        }
    }

    // Белый слон (вниз налево)
    if (wel != bk && wec != bk && wec != wk && wec != wl && we != bk && we != wk && we != wl && wel != 81 && wel != 71 && wel != 61 && wel != 51 && wel != 41 && wel != 31 && wel != 21 && wel != 11 && wel != 12 && wel != 13 && wel != 14 && wel != 15 && wel != 16 && wel != 17 && wel != 18)
    {
        while (wel != bk)
        {
            wel = wel - 11;
            if (wel == wk || wel == wl)
            {
                cout << "Шаха нет!";
                break;
            }
            else if (wel == bk)
            {
                cout << "Шах слоном!";
                break;
            }
            else if (wel != bk && wec != bk && we != bk && wel == 71 || wel == 61 || wel == 51 || wel == 41 || wel == 31 || wel == 21 || wel == 11 || wel == 12 || wel == 13 || wel == 14 || wel == 15 || wel == 16 || wel == 17)
            {
                break;
            }
        }
    }

    // Белый слон (вниз направо)
    if (wer != bk && wel != bk && wel != wk && wel != wl && wec != bk && wec != wk && wec != wl && we != bk && we != wk && we != wl && wer != 11 && wer != 12 && wer != 13 && wer != 14 && wer != 15 && wer != 16 && wer != 17 && wer != 18 && wer != 28 && wer != 38 && wer != 48 && wer != 58 && wer != 68 && wer != 78 && wer != 88)
    {
        while (wer != bk)
        {
            wer = wer - 9;
            if (wer == wk || wer == wl)
            {
                cout << "Шаха нет!";
                break;
            }
            else if (wer == bk)
            {
                cout << "Шах слоном!";
                break;
            }
            else if (wer != bk && wel != bk && wec != bk && we != bk && wer == 12 || wer == 13 || wer == 14 || wer == 15 || wer == 16 || wer == 17 || wer == 18 || wer == 28 || wer == 38 || wer == 48 || wer == 58 || wer == 68 || wer == 78)
            {
                break;
            }
        }
    }

    //*******************************************************************************************************************************************************************
    // Ладья
    // Белая ладья (направо)
    if (wl != bk && wer != bk && wer != wk && wel != bk && wel != wk && wec != bk && wec != wk && we != bk && we != wk && wl != 18 && wl != 28 && wl != 38 && wl != 48 && wl != 58 && wl != 68 && wl != 78 && wl != 88)
    {
        while (wl != bk)
        {
            wl = wl + 1;
            if (wl == wk || wl == we)
            {
                cout << "Шаха нет!";
                break;
            }
            else if (wl == bk)
            {
                cout << "Шах ладьей!";
                break;
            }
            else if (wl != bk && wer != bk && wel != bk && wec != bk && we != bk && wl == 18 || wl == 28 || wl == 38 || wl == 48 || wl == 58 || wl == 68 || wl == 78 || wl == 88)
            {
                break;
            }
        }
    }

    // Белая ладья (налево)
    if (wll != bk && wl != bk && wl != wk && wl != we && wer != bk && wer != wk && wer != wl && wel != bk && wel != wk && wel != wl && wec != bk && wec != wk && wec != wl && we != bk && we != wk && we != wl && wll != 11 && wll != 21 && wll != 31 && wll != 41 && wll != 51 && wll != 61 && wll != 71 && wll != 81)
    {
        while (wll != bk)
        {
            wll = wll - 1;
            if (wll == wk || wll == we)
            {
                cout << "Шаха нет!";
                break;
            }
            else if (wll == bk)
            {
                cout << "Шах ладьей!";
                break;
            }
            else if (wll != bk && wl != bk && wer != bk && wel != bk && wec != bk && we != bk && wll == 11 || wll ==  21 || wll == 31 || wll == 41 || wll == 51 || wll == 61 || wll == 71 || wll == 81)
            {
                break;
            }
        }
    }

    // Белая ладья (вверх)
    if (wlu != bk && wll != bk && wll != wk && wll != we && wl != bk && wl != wk && wl != we && wer != bk && wer != wk && wer != wl && wel != bk && wel != wk && wel != wl && wec != bk && wec != wk && wec != wl && we != bk && we != wk && we != wl && wlu != 81 && wlu != 82 && wlu != 83 && wlu != 84 && wlu != 85 && wlu != 86 && wlu != 87 && wlu != 88)
    {
        while (wlu != bk)
        {
            wlu = wlu + 10;
            if (wlu == wk || wlu == we)
            {
                cout << "Шаха нет!";
                break;
            }
            else if (wlu == bk)
            {
                cout << "Шах ладьей!";
                break;
            }
            else if (wlu != bk && wll != bk && wl != bk && wer != bk && wel != bk && wec != bk && we != bk && wlu == 81 || wlu == 82 || wlu == 83 || wlu == 84 || wlu == 85 || wlu == 86 || wlu == 87 || wlu == 88)
            {
                break;
            }
        }
    }

    // Белая ладья (вниз)
    if (wld != bk && wlu != bk && wlu != wk && wlu != we && wll != bk && wll != wk && wll != we && wl != bk && wl != wk && wl != we && wer != bk && wer != wk && wer != wl && wel != bk && wel != wk && wel != wl && wec != bk && wec != wk && wec != wl && we != bk && we != wk && we != wl && wld != 11 && wld != 12 && wld != 13 && wld != 14 && wld != 15 && wld != 16 && wld != 17 && wld != 18)
    {
        while (wld != bk)
        {
            wld = wld - 10;
            if (wld == wk || wld == we)
            {
                cout << "Шаха нет!";
                break;
            }
            else if (wlu == bk)
            {
                cout << "Шах ладьей!";
                break;
            }
            else if (wld != bk && wlu != bk && wll != bk && wl != bk && wer != bk && wel != bk && wec != bk && we != bk && wld == 11 || wld == 12 || wld == 13 || wld == 14 || wld == 15 || wld == 16 || wld == 17 || wld == 18)
            {
                break;
            }
        }
    }
}
