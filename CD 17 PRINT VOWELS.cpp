%{
/Definition section/
int vowel_cnt=0,consonant_cnt=0;
%}
vowel [aeiou]+
consonant [^aeiou]
eol \n
%%
{eol} return 0;
[\t]+ ;
{vowel} {vowel_cnt++;}
%%
int main()
{
printf(\n Enter some input string\n);
yylex();
printf(vowels=%d and consonant=%d\n,vowel_cnt,consonant_cnt);
return 0;
}
Int yywrap()
{
return 1;
}

