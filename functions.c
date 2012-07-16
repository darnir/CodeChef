/* function stripZeroes(int)
*  Returns a number whose last digit is the number of trailing zeroes in the input number.
*  Currently fuctions only for numbers with less than 10 trailing zeroes.
*/
int stripZeroes(int num)
{
    int zer=0;
    while (num>0 && num%10==0)
    {
        num/=10;
        zer++;
    }
    num*=10;
    num+=zer;
    return num;
}
