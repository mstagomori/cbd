
class Record{
public:
    char Gender;
    char StreetAddress;
    char City;
    char ZipCode;
    char EmailAddress;
    char GivenName;
    char Birthday
    int Age;
    char CCNumber;
    double Latitude;
    double Longitude;
    char TelephoneNumber;

    Record() {};
    Record(std::vector<std::variant<char, int, double>> csvRow){
        Gender = csvRow[0];
        StreetAddress = csvRow[1];
        City = csvRow[2];
        ZipCode = csvRow[3];
        EmailAddress = csvRow[4];
        GivenName = csvRow[5];
        Birthday = csvRow[6];
        Age = csvRow[7];
        CCNumber = csvRow[8];
        Latitude = csvRow[9];
        Longitude = csvRow[10];
        TelephoneNumber = csvRow[11];
    }
    ~Record() {};
} ;
