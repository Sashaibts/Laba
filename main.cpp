void print (const vector <string> Myvector)
{
    for (const auto& line : Myvector)
    {
        string fline;
        for (size_t i=0; i<line.size();++i)
        {
            fline += line[i];
            if (i<line.size()-1 && line[i]!=' ')
            {
                fline += ' ';
            }
        }
        cout<<fline<<endl;
    }
}
