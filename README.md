- docker build . -t chukiat
- docker run -it -h Pawinnarut --name chukiat_project chukiat bash
- hello
- python3 np2pd.py
- afork

- wget https://files.grouplens.org/datasets/movielens/ml-latest-small.zip
- unzip ml-latest-small.zip
- cd ml-latest-small
- grep -E -o '5\.0|4\.0|1\.0|0\.5' ratings.csv | sort | uniq -c | sort -k2 -r | awk '{print $2, $1}'
- grep '0\.5' ratings.csv | sort -t, -k2n > filtered_ratings.csv

---

docker build . -t chukiat
docker run -it -h Pawinnarut --name chukiat_project chukiat bash
hello
python3 np2pd.py
afork

wget https://files.grouplens.org/datasets/movielens/ml-latest-small.zip
unzip ml-latest-small.zip
cd ml-latest-small
grep -E -o '5\.0|4\.0|1\.0|0\.5' ratings.csv | sort | uniq -c | sort -k2 -r | awk '{print $2, $1}'
grep '0\.5' ratings.csv | sort -t, -k2n > filtered_ratings.csv
