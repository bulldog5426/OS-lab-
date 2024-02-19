#first shell program
echo "hello"
echo "enter 2 variables"
read a b
c=`expr $a + $b`
echo "value of a is =" $a
echo "value of b is =" $b
echo "sum is " $c
