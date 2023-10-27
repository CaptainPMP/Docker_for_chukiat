# Use the official Ubuntu as the base image
FROM ubuntu:latest
COPY *.c /root
COPY *.py /root
COPY *.html /root
# Update the package lists, install essential packages, and clean up
RUN apt update \
 && apt install -y sudo gcc python3 wget nano vim p7zip p7zip-full zip unzip python3-pip \
 && rm -rf /var/lib/apt/lists/*
RUN pip install pandas
RUN gcc /root/afork.c -o /root/afork
RUN gcc /root/csine.c -o /root/hello -lm
RUN wget https://files.grouplens.org/datasets/movielens/ml-latest-small.zip -P /root
RUN unzip /root/ml-latest-small.zip -d /root
# Add the current directory (.) to the PATH environment variable
ENV PATH="${PATH}:."
# Set the working directory
WORKDIR /root
# Start a Bash shell when the container is run
CMD ["/bin/bash"]