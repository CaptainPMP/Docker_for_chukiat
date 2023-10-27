# https://www.geeksforgeeks.org/create-a-dataframe-from-a-numpy-array-and-specify-theindex-column-and-column-headers/
# importing the modules
import pandas as pd
import numpy as np

# creating the Numpy array
array = np.array([[1, 1, 1], [2, 4, 8], [3, 9, 27], [4, 16, 64],
 [5, 25, 125], [6, 36, 216], [7, 49, 343]])

# creating a list of index names and a list of column names
index_values = ['first', 'second', 'third', 'fourth', 'fifth', 'sixth', 'seventh']
column_values = ['number', 'squares', 'cubes']

# creating and then displaying the dataframe
df = pd.DataFrame(data=array, index=index_values, columns=column_values)
print(df)
