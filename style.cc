body {
  font-family: 'Open Sans', sans-serif;
  background-image: url("bckgrnd.png");
  background-repeat: repeat;
  line-height: 1.5;
}

.aboutMe {
  grid-area: 2 / 1 / span 1 / span 4;
  display: grid;
  grid-template-rows: 1fr;
  grid-template-columns: repeat(2, 1fr);
}

section {
  background: rgba(150, 150, 150, 0.6);
  color: white;
  height: fit-content;
}

h1 {
font-family: 'Montserrat', sans-serif;
font-weight:medium;
font-size:24px;
color: black;
}

h2 {
font-family: 'Montserrat', sans-serif;
font-size:20px;
font-weight:bold;
color: black;
}

h3 {
font-family: 'Montserrat', sans-serif;
font-weight: light;
font-size:20px;
color: white
}

p {
font-family: 'Open Sans', sans-serif;
font-size:14px;
}

img {
width: auto;
max-width: 30%;
height: auto;
}

@viewport {
width: device-width ;
zoom: 1.0 ;
}

.column {
float: left;
width: 33.33%;
padding: 5px;
}

.round {
border-radius: 100px;
width: 130px;
height: 130px;
border: 3px solid #2c5fa8;
position: relative;
left: 1100px;
top: 60px
}

footer {
position: auto;
bottom: 0;
left: 0;
width: 100%;
font-family: 'Open Sans', sans-serif;
text-align: center;
color: white;
font-size: 12px;
}

@media screen and (min-width: 600px){

.section{
  display: flex;
  justify-content: space-start;
}

}
@media only screen and (max-width: 600px){

}

