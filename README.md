# Command for using chukiat images in docker

- docker build . -t chukiat
- docker run -it -h Pawinnarut --name chukiat_project chukiat bash
- hello
- python3 np2pd.py

- cd ml-latest-small
- grep -E -o '5\.0|4\.0|1\.0|0\.5' ratings.csv | sort | uniq -c | sort -k2 -r | awk '{print $2, $1}'
- grep '0\.5' ratings.csv | sort -t, -k2n > filtered_ratings.csv
- head filtered_ratings.csv
- tail filtered_ratings.csv

- afork

- docker exec -it chukiat_project bash
- top
- bfork
---

docker build . -t chukiat
docker run -it -h Pawinnarut --name chukiat_project chukiat bash
hello
python3 np2pd.py

cd ml-latest-small
grep -E -o '5\.0|4\.0|1\.0|0\.5' ratings.csv | sort | uniq -c | sort -k2 -r | awk '{print $2, $1}'
grep '0\.5' ratings.csv | sort -t, -k2n > filtered_ratings.csv

head filtered_ratings.csv
tail filtered_ratings.csv

afork

docker exec -it chukiat_project bash
top
bfork
