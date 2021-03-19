#include <iostream>

int main()
{
	int n, m;
	int counter = 0;
	while (true)
	{
		std::cin >> m >> n;// ââîäèì ãðàíèöû
		switch (m || n)
			case 0: break;
		counter++;//êàêîé ïî ñ÷åòó ñëó÷àé

		int field[100][100] = { 0 };
		for (int i = 1; i < m + 1; i++)
			for (int j = 1; j < n + 1; j++)
			{
				char temp;
				std::cin >> temp;
				if (temp == '*')
				{
					//111
					//1*1
					//111
					for (int ii = i - 1; ii <= i + 1; ++ii)
						for (int jj = j - 1; jj <= j + 1; ++jj)
							if (field[ii][jj] != -1)
								++field[ii][jj];

					field[i][j] = -1;
				}

			}

		std::cout << "Field #" << counter << ":\n";
		for (int i = 1; i < m + 1; i++)
		{

			for (int j = 1; j < n + 1; j++)
			{
				switch (field[i][j])
				{
				case -1: std::cout << '*'; break;// åñëè ìèíà (*) ðèñóåì ìèíó
				default:
					std::cout << field[i][j];// èíà÷å ðèñóåì öèôðó ðàâíó êîë-âó ìèí ðÿäîì
					break;
				}
			}
			std::cout << "\n";

		}
		std::cout << "\n";
	}

	return 0;
}
