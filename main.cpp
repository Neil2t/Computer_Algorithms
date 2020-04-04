#include <iostream>

class Sort
{
	private:
		int INPUT[30][20], A[30][20], sizeOfInputs, numOfComparisons;
	public:
		int numOfInputs, rowIndex;
		void get_input(); //Takes in input from the user.
		void copy_array(); //Copies the user inputs into the array A[][].
		void get_output(); //Prints the number of comparisons made in a sorting algortihm to the console.
		void insertion_sort(); //Implements the Insertion Sort algorithm.
		void merge_sort(); //Implements the Merge Sort Algorithm
		void merge();
		
		Sort() //Initializes some values such as size and the number of inputs.
		{
			sizeOfInputs = 20;
			numOfInputs = 30;
			rowIndex = 0;
		}
};

void Sort :: get_input()
{
	int i = 0, j = 0;
	for (i = 0; i < numOfInputs; i++)
	{
		for (j = 0;j < sizeOfInputs; j++)
		{
			std::cin>> INPUT[i][j]; //Taking user input
		}
	}
}

void Sort :: copy_array()
{
	int i = 0, j = 0;
	for (i = 0; i < numOfInputs; i++)
	{
		for (j = 0;j < sizeOfInputs; j++)
		{
			A[i][j] = INPUT[i][j];
		}
	}
}

void Sort :: insertion_sort()
{
	int j = 0, i = 0, key = 0;
	numOfComparisons = 0;
	for(j = 1; j < sizeOfInputs; j++)
	{
		key = A[rowIndex][j];
		i = j - 1;
		while (i >= 0 && A[rowIndex][i] > key)
		{
			A[rowIndex][i+1] = A[rowIndex][i];
			A[rowIndex][i] = key;
			numOfComparisons++;
			i--;
		}
	}
	
	get_output();
}

void Sort :: merge_sort()
{
	/*numOfComparisons = 0;*/
}

void Sort :: get_output()
{
	std::cout<<numOfComparisons<<" ";
}

int main()
{
	Sort obj;
	int i = 0;
	
	obj.get_input();
	
	std::cout<<"\n\nInsertion Sort\n";
	obj.rowIndex = 0;
	obj.copy_array();
	for (i = 0; i < obj.numOfInputs; i++)
	{
		obj.insertion_sort();
		obj.rowIndex++; //Incrementing the rowIndex so that the algorithm takes inputs from the next sequence of numbers.
	}
	
	std::cout<<"\n\nMerge Sort\n";
	obj.rowIndex = 0;
	obj.copy_array();
	/*for (i = 0; i < obj.numOfInputs; i++)
	{
		obj.merge_sort();
		obj.rowIndex++;
	}*/
	
	return 0;
}