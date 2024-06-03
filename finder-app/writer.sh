if [ $# -ne 2 ]; then
    echo "Error: the number of arguments is not correct"
    exit 1
fi

writefile=$1
writestr=$2

mkdir -p $(dirname $writefile)

echo "$writestr" > $writefile

if [ $? -ne 0 ]; then
    echo "Error: could not write to the file"
    exit 1
fi
