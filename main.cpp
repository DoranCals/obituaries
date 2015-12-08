#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(0));
	
	
	std::vector<std::string> DieVerbs(140);
	
	DieVerbs[0] = " died.";
	DieVerbs[1] = " was made dead by";
	DieVerbs[2] = " was destroyed at the hands of";
	DieVerbs[3] = " was annihilated by";
	DieVerbs[4] = " was displaced from existence by";
	DieVerbs[5] = " is now";
	DieVerbs[6] = " died and was reincarnated as";
	DieVerbs[7] = " died and became";
	DieVerbs[8] = " got #360No5k0p3d by";
	DieVerbs[9] = " got blown up by";
	
	DieVerbs[10] = " is kill.";
	DieVerbs[11] = " was stabbed thirty-seven times in the chest by";
	DieVerbs[12] = " was destroyed_banana'd by";
	DieVerbs[13] = " was exposed to lethal radiation emanating from";
	DieVerbs[14] = " was cannibalized by";
	DieVerbs[15] = " has been rendered obsolete due to";
	DieVerbs[16] = " suffered a hit-and-run from";
	DieVerbs[17] = " got #rekt by";
	DieVerbs[18] = " got smashed by";
	DieVerbs[19] = " became bored to death by listening to";
	
	DieVerbs[20] = " lost the game.";
	DieVerbs[21] = " was cleaned by";
	DieVerbs[22] = " was split in half by";
	DieVerbs[23] = " was lynched by";
	DieVerbs[24] = "'s existence was disproven by";
	DieVerbs[25] = " died, came back to life, and died again, thanks to";
	DieVerbs[26] = " received hugs from";
	DieVerbs[27] = " was defenestrated by";
	DieVerbs[28] = " was ceremoniously sacrificed by";
	DieVerbs[29] = " was just trying to get to class on time, but crashed into";
	
	DieVerbs[30] = " gave up.";
	DieVerbs[31] = " had a little lamb, but it was eaten by";
	DieVerbs[32] = " tried to get inside";
	DieVerbs[33] = " REALLY loves";
	DieVerbs[34] = " tried to borrow money from";
	DieVerbs[35] = " just couldn't get enough of";
	DieVerbs[36] = " got a Game Over (not really) because of";
	DieVerbs[37] = " was ravished by";
	DieVerbs[38] = " found a bomb, previously owned by";
	DieVerbs[39] = " fell into a trap set by";
	
	DieVerbs[40] = " had to pee REALLY bad.";
	DieVerbs[41] = " fell off of";
	DieVerbs[42] = " was strangled by";
	DieVerbs[43] = " is under arrest for possession of";
	DieVerbs[44] = "'s hard drive was wiped by";
	DieVerbs[45] = "'s controller turned into";
	DieVerbs[46] = "'s keyboard was smashed up by";
	DieVerbs[47] = "'s mouse turned into";
	DieVerbs[48] = "'s monitor is showing graphic porn starring";
	DieVerbs[49] = "'s speakers were blown out by";
	
	DieVerbs[50] = ".health == 0.";
	DieVerbs[51] = " will die after traveling into the future with";
	DieVerbs[52] = " was demolished by";
	DieVerbs[53] = " got teabagged by";
	DieVerbs[54] = " lost a card game to";
	DieVerbs[55] = " lost a danmaku battle to";
	DieVerbs[56] = " lost a D-D-D-DDDDDDUEL to";
	DieVerbs[57] = " was run over by";
	DieVerbs[58] = " still doesn't like";
	DieVerbs[59] = " got shot by";
	
	DieVerbs[60] = ".exe has stopped working.";
	DieVerbs[61] = " is now worshipping";
	DieVerbs[62] = " was triggered and offended by";
	DieVerbs[63] = " was allergic to";
	DieVerbs[64] = " was allergic to the adorableness of";
	DieVerbs[65] = " met a terrible fate at the hands of";
	DieVerbs[66] = " was licked by";
	DieVerbs[67] = " was telefragged by";
	DieVerbs[68] = " was poisoned by";
	DieVerbs[69] = " was sent to jail, without passing GO or collecting 200 rings, by";
	
	DieVerbs[70] = ".sh was forcibly terminated.";
	DieVerbs[71] = " tried to smoke";
	DieVerbs[72] = " was accidentally by";
	DieVerbs[73] = " accidentally";
	DieVerbs[74] = " illegally downloaded";
	DieVerbs[75] = " tried to kiss";
	DieVerbs[76] = " tried to make out with";
	DieVerbs[77] = "'s RP character was killed by";
	DieVerbs[78] = " fell into";
	DieVerbs[79] = " fell on";
	
	DieVerbs[80] = " pressed Alt-F4 in real life.";
	DieVerbs[81] = " got the po-po called on them by";
	DieVerbs[82] = " fell through";
	DieVerbs[83] = " fell out of";
	DieVerbs[84] = " was burned by";
	DieVerbs[85] = " was reduced to ashes by";
	DieVerbs[86] = " tried to capture";
	DieVerbs[87] = " lost a Pokemon battle with";
	DieVerbs[88] = " lost a Smash tourney to";
	DieVerbs[89] = " lost a Smash tourney because of";
	
	DieVerbs[90] = " discovered internet pornography.";
	DieVerbs[91] = " got shot in the face by";
	DieVerbs[92] = " was given a stern lecture by";
	DieVerbs[93] = " didn't die. Oh wait, yeah they did. They died because of";
	DieVerbs[94] = "-senpai didn't notice";
	DieVerbs[95] = " JUST DOES not BELIEVE what they saw, what  KIND OF skills even are those   stunts just pulled by";
	DieVerbs[96] = " fell prey to";
	DieVerbs[97] = " was poisoned by";
	DieVerbs[98] = " threw up after seeing";
	DieVerbs[99] = " was killed by";
	
	DieVerbs[100] = " has no face.";
	DieVerbs[101] = ".exe conflicts with";
	DieVerbs[102] = "'s face was stuffed with";
	DieVerbs[103] = " ate too much of";
	DieVerbs[104] = " drank too much of";
	DieVerbs[105] = " tried to sleep with";
	DieVerbs[106] = " tripped over";
	DieVerbs[107] = " was institutionalized by";
	DieVerbs[108] = " was just standing around, minding their own business, when SUDDENLY there was";
	DieVerbs[109] = " went to Pen Island with";
	
	DieVerbs[110] = " just can't.";
	DieVerbs[111] = " lost a bet to";
	DieVerbs[112] = " traveled to the planet of";
	DieVerbs[113] = " overdosed on";
	DieVerbs[114] = " was devoured by";
	DieVerbs[115] = " was slapped in the face by";
	DieVerbs[116] = " was demoted to the position of";
	DieVerbs[117] = " was consumed by";
	DieVerbs[118] = " was murdered by";
	DieVerbs[119] = "'s head was bitten off by";
	
	DieVerbs[120] = " shot themself in the foot.";
	DieVerbs[121] = " was cornered by";
	DieVerbs[122] = " was flim-flammed by";
	DieVerbs[123] = "'s home was raided by";
	DieVerbs[124] = " couldn't even";
	DieVerbs[125] = " got Shrekked by";
	DieVerbs[126] = " bows down to";
	DieVerbs[127] = " was squashed flat by";
	DieVerbs[128] = "'s entire species was eradicated by";
	DieVerbs[129] = " played a game with";
	
	DieVerbs[130] = " is innawoods.";
	DieVerbs[131] = " got knocked the FUCK out by";
	DieVerbs[132] = " was electrocuted by";
	DieVerbs[133] = " was hammered by";
	DieVerbs[134] = " couldn't even";
	DieVerbs[135] = " is too sexy for";
	DieVerbs[136] = " was banned for RPing";
	DieVerbs[137] = " did something kinky involving";
	DieVerbs[138] = " is dead. Long live";
	DieVerbs[139] = " was kicked by";
	
	
	std::vector<std::string> DieNouns(510);
	
	DieNouns[0] = ".";
	DieNouns[1] = " something.";
	DieNouns[2] = " himself.";
	DieNouns[3] = " herself.";
	DieNouns[4] = " themself.";
	DieNouns[5] = " itself.";
	DieNouns[6] = " Eggman.";
	DieNouns[7] = " Dr. Ivo Rrrobotnik!";
	DieNouns[8] = " Robotnik's mighty PINGAS.";
	DieNouns[9] = " the patriarchy.";
	
	DieNouns[10] = "'s ring.";
	DieNouns[11] = " the Illuminati.";
	DieNouns[12] = " the Ilerminarty.";
	DieNouns[13] = " Crystal Dragon Jesus.";
	DieNouns[14] = " someone in this server. Was it YOU? It WAS you, wasn't it?";
	DieNouns[15] = " Coldsteel the Hedgeheg. \"psssh...nothin personnel...kid...\"";
	DieNouns[16] = " Xx420xSWAGxMASTERxX";
	DieNouns[17] = " death_killer666";
	DieNouns[18] = " Sonic '06.";
	DieNouns[19] = " Sonic Boom: Rise of Lyric.";
	
	DieNouns[20] = " and their magic box.";
	DieNouns[21] = " the entire population of China.";
	DieNouns[22] = " a car.";
	DieNouns[23] = " Windows Vista.";
	DieNouns[24] = " iOS 7.";
	DieNouns[25] = " Google.";
	DieNouns[26] = " THE SUPERVIRUS.";
	DieNouns[27] = " installing Gentoo.";
	DieNouns[28] = " a homeless rat in a wheelchair.";
	DieNouns[29] = " Death itself.";
	
	DieNouns[30] = "'s computer.";
	DieNouns[31] = " a bowl of petunias.";
	DieNouns[32] = " a sperm whale.";
	DieNouns[33] = " Marvin the paranoid android.";
	DieNouns[34] = " UboaaaaaaAAAAAAAAAAAAAAAAA";
	DieNouns[35] = " a wild Magikarp.";
	DieNouns[36] = " a wild Magikarp. But nothing happened!";
	DieNouns[37] = " the CIA.";
	DieNouns[38] = " steel beams.";
	DieNouns[39] = " jet fuel.";
	
	DieNouns[40] = "'s body hair.";
	DieNouns[41] = " Batman's parents.";
	DieNouns[42] = " the goddamned Batman.";
	DieNouns[43] = " a horde of locusts.";
	DieNouns[44] = " an upset stomach.";
	DieNouns[45] = " diarrhoea, gas, and bloating.";
	DieNouns[46] = " an erection lasting more than four hours.";
	DieNouns[47] = " their own free will.";
	DieNouns[48] = " Megatron.";
	DieNouns[49] = " Optimus Prime.";
	
	DieNouns[50] = "'s face.";
	DieNouns[51] = " SPIIIDEEEEEEERS";
	DieNouns[52] = " time travel shenanigans.";
	DieNouns[53] = " timey wimey stuff.";
	DieNouns[54] = " your mom.";
	DieNouns[55] = " your dad.";
	DieNouns[56] = " someone else's parents.";
	DieNouns[57] = "OOOH GOD WHAT THE HELL IS THAT";
	DieNouns[58] = " Rick Astley.";
	DieNouns[59] = " one of those new Pokeymans.";
	
	DieNouns[60] = "'s foot.";
	DieNouns[61] = " SCP-173.";
	DieNouns[62] = " SCP-682.";
	DieNouns[63] = " SCP-055.";
	DieNouns[64] = " the lemons.";
	DieNouns[65] = " a Pootisbird.";
	DieNouns[66] = " BEES";
	DieNouns[67] = "NOT THE BEES NOT THE BEES AAAAAAAAAAA";
	DieNouns[68] = " sonic.exe";
	DieNouns[69] = " Pokemon: Ghost Black version.";
	
	DieNouns[70] = "'s butt.";
	DieNouns[71] = " goin 2fest.";
	DieNouns[72] = " going too fast.";
	DieNouns[73] = " Tails Skypatrol.";
	DieNouns[74] = " forty cakes.";
	DieNouns[75] = " forty keks.";
	DieNouns[76] = " hundreds and hundreds of rings.";
	DieNouns[77] = " all these stairs.";
	DieNouns[78] = " JELLY on this hot god";
	DieNouns[79] = " whatever  KIND OF skills those   stunts you just pulled even are";
	
	DieNouns[80] = "'s hand (still attached).";
	DieNouns[81] = " that one last ring.";
	DieNouns[82] = " that one last coin.";
	DieNouns[83] = " Sanic.";
	DieNouns[84] = " Tals.";
	DieNouns[85] = " that fucking cat.";
	DieNouns[86] = " Weegee.";
	DieNouns[87] = " the entire planet.";
	DieNouns[88] = " Uranus.";
	DieNouns[89] = " Pluto.";
	
	DieNouns[90] = "'s thrown Vomit ring.";
	DieNouns[91] = " Ganon.";
	DieNouns[92] = " Captain Falcon.";
	DieNouns[93] = " fuckin' Diddy Kong.";
	DieNouns[94] = " fuckin' Meta Knight.";
	DieNouns[95] = " fuckin' Fox.";
	DieNouns[96] = " fuckin' Marth.";
	DieNouns[97] = " fuckin' Pikachu.";
	DieNouns[98] = " fuckin' Jigglypuff.";
	DieNouns[99] = " fuckin' Ness.";
	
	DieNouns[100] = "'s good looks and grace.";
	DieNouns[101] = " someone who has really been far even as decided to use even go want to do look more like.";
	DieNouns[102] = " Milhouse.";
	DieNouns[103] = " a naked banana.";
	DieNouns[104] = " 4chan's personal army.";
	DieNouns[105] = " an hero.";
	DieNouns[106] = " OP.";
	DieNouns[107] = " their parents' basement.";
	DieNouns[108] = " Anonymous.";
	DieNouns[109] = " four hundred thousand dollars.";
	
	DieNouns[110] = "'s Pokeymans.";
	DieNouns[111] = " their own two hands.";
	DieNouns[112] = " someone else's hands.";
	DieNouns[113] = " Slenderman.";
	DieNouns[114] = " a Creeper.";
	DieNouns[115] = " adorableness.";
	DieNouns[116] = " a terrible calamity.";
	DieNouns[117] = " a horrible catastrophe.";
	DieNouns[118] = " getting an F.";
	DieNouns[119] = " getting rank E.";
	
	DieNouns[120] = "'s bare damn hands.";
	DieNouns[121] = " Sam the Mechawolf.";
	DieNouns[122] = " a technicolored donkey.";
	DieNouns[123] = " a technicolored donkey named Sam.";
	DieNouns[124] = " a technicolored donkey named Michael.";
	DieNouns[125] = " an emo teenager.";
	DieNouns[126] = " dividing by zero.";
	DieNouns[127] = " Zuper Zonic.";
	DieNouns[128] = " Zuper Zhadow.";
	DieNouns[129] = " Sonic Robo Blast 1.";
	
	DieNouns[130] = "'s gloved hands.";
	DieNouns[131] = " a sentry gun.";
	DieNouns[132] = " a dispenser.";
	DieNouns[133] = " a teleporter.";
	DieNouns[134] = " a bomb, cleverly disguised as a bomb.";
	DieNouns[135] = " an alcohol problem.";
	DieNouns[136] = " magic.";
	DieNouns[137] = " Eirin's shady new drug.";
	DieNouns[138] = " Yukari fooling around again.";
	DieNouns[139] = " a Moriya shrine conspiracy.";
	
	DieNouns[140] = "'s mother.";
	DieNouns[141] = " the Scout.";
	DieNouns[142] = " Scout's mom.";
	DieNouns[143] = " the Soldier.";
	DieNouns[144] = " Soldier's painis.";
	DieNouns[145] = " the Pyro.";
	DieNouns[146] = " the Demoman.";
	DieNouns[147] = " the Heavy.";
	DieNouns[148] = " Sascha.";
	DieNouns[149] = " the Sandvich.";
	
	DieNouns[150] = "'s pocket sand.";
	DieNouns[151] = " the Engineer.";
	DieNouns[152] = " the Medic.";
	DieNouns[153] = " the Sniper.";
	DieNouns[154] = " Jarate.";
	DieNouns[155] = " the Spy.";
	DieNouns[156] = " Windows XP.";
	DieNouns[157] = " Windows Movie Maker.";
	DieNouns[158] = " Bowser.";
	DieNouns[159] = " King Koopa.";
	
	DieNouns[160] = "'s pet rock.";
	DieNouns[161] = " God.";
	DieNouns[162] = " Sonic Riders.";
	DieNouns[163] = " nothing.";
	DieNouns[164] = " some really freaky shit.";
	DieNouns[165] = " Batman.";
	DieNouns[166] = " spiders.";
	DieNouns[167] = " a thousand bats mating randomly.";
	DieNouns[168] = " Knuckles CHAOTIX.";
	DieNouns[169] = " dying.";
	
	DieNouns[170] = " in a frilly dress.";
	DieNouns[171] = " the Ganon Cannon.";
	DieNouns[172] = " Samuel L. Motherfucking Jackson.";
	DieNouns[173] = " RAINBOWS.";
	DieNouns[174] = " OpenGL.";
	DieNouns[175] = " the Super Mario Bros. movie.";
	DieNouns[176] = " everyone.";
	DieNouns[177] = " drugs.";
	DieNouns[178] = " seven whole marejuanas.";
	DieNouns[179] = " having no face.";
	
	DieNouns[180] = "'s favorite underwear.";
	DieNouns[181] = " dank memes.";
	DieNouns[182] = " Froot Loops.";
	DieNouns[183] = " Falling Rock. *thud* That's right, Falling Rock. *thud*";
	DieNouns[184] = " the Boy Scouts.";
	DieNouns[185] = " the Girl Scouts.";
	DieNouns[186] = " Merasmus the Magician.";
	DieNouns[187] = " Ronald Reagan.";
	DieNouns[188] = " Ronald Raygun.";
	DieNouns[189] = " all the chickens.";
	
	DieNouns[190] = "'s shitty Sonic recolor.";
	DieNouns[191] = " a broken Lua script.";
	DieNouns[192] = " a broken SOC.";
	DieNouns[193] = " ALS.";
	DieNouns[194] = " PMS.";
	DieNouns[195] = " AIDS.";
	DieNouns[196] = " Ebola.";
	DieNouns[197] = " EbolAIDS.";
	DieNouns[198] = " peaceful protest.";
	DieNouns[199] = " violent protest.";
	
	DieNouns[200] = " from State Farm.";
	DieNouns[201] = " POLE POSITION!";
	DieNouns[202] = " Twilight Sparkle.";
	DieNouns[203] = " Applejack's parents.";
	DieNouns[204] = " Sweetie Belle's cooking.";
	DieNouns[205] = " pink fluffy unicorns dancing on rainbows.";
	DieNouns[206] = " HIM.";
	DieNouns[207] = " HER.";
	DieNouns[208] = " THEM.";
	DieNouns[209] = " IT.";
	
	DieNouns[210] = "'s harsh words.";
	DieNouns[211] = " Rule 34.";
	DieNouns[212] = " Rule 63.";
	DieNouns[213] = " Rules 1 and 2.";
	DieNouns[214] = " talking about Fight Club";
	DieNouns[215] = " talking about /b/.";
	DieNouns[216] = " /b/.";
	DieNouns[217] = " Boxxy, the queen of /b/.";
	DieNouns[218] = " Kat, the new queen of /b/.";
	DieNouns[219] = " these motherfucking snakes on this motherfucking plane.";
	
	DieNouns[220] = "'s secret RedTube account.";
	DieNouns[221] = " Facebook.";
	DieNouns[222] = " Mark Zuckerberg.";
	DieNouns[223] = " MySpace.";
	DieNouns[224] = " OKCupid.";
	DieNouns[225] = " crying a lot.";
	DieNouns[226] = " an entire pint of ice cream.";
	DieNouns[227] = " an adult bookstore.";
	DieNouns[228] = " a 55-gallon drum of water-based lubricant.";
	DieNouns[229] = " a 20-pound gummy bear.";
	
	DieNouns[230] = ", slowly and deliberately.";
	DieNouns[231] = " a 40-pound box of rape.";
	DieNouns[232] = " fruit salad (yummy yummy).";
	DieNouns[233] = " tentacles, with more tentacles with which to tentacle their tentacles.";
	DieNouns[234] = " tentacles.";
	DieNouns[235] = " consentacles.";
	DieNouns[236] = " something that is not round.";
	DieNouns[237] = " the Invisible Pink Unicorn.";
	DieNouns[238] = " Buck Fitches.";
	DieNouns[239] = " Mitt Gunny.";
	
	DieNouns[240] = " and Knuckles.";
	DieNouns[241] = " Mitt Romney.";
	DieNouns[242] = " R-Money: Bindas Fulla Women.";
	DieNouns[243] = " Mitt \"Da Binda Keepah\" Romney.";
	DieNouns[244] = " Arnold Schwarzenegger";
	DieNouns[245] = " one of Taylor Swift's exes.";
	DieNouns[246] = " the Outsiders.";
	DieNouns[247] = " an inside job.";
	DieNouns[248] = " a bear.";
	DieNouns[249] = " punching a bear in the face.";
	
	DieNouns[250] = "'s fat stacks.";
	DieNouns[251] = " reasons.";
	DieNouns[252] = " Kim Jong-il.";
	DieNouns[253] = " the Kim Jong-illest.";
	DieNouns[254] = " Kim Jong-un.";
	DieNouns[255] = " Korean Jesus.";
	DieNouns[256] = " the Flying Spaghetti Monster.";
	DieNouns[257] = " Train Simulator 2015.";
	DieNouns[258] = " Goat Simulator.";
	DieNouns[259] = " Surgeon Simulator 2013.";
	
	DieNouns[260] = "'s fashion sense.";
	DieNouns[261] = " Snoop Dogg.";
	DieNouns[262] = " Snoop Lion.";
	DieNouns[263] = " Snoop, fo' shizzle.";
	DieNouns[264] = " Snoopy the dog.";
	DieNouns[265] = " GIRUGAMESH.";
	DieNouns[266] = " 80's hairstyles.";
	DieNouns[267] = " 70's fashion sense.";
	DieNouns[268] = " insurmountable amounts of FABULOOOUUUUSSSSS!!!!!!";
	DieNouns[269] = " an insurmountable waist-height fence.";
	
	DieNouns[270] = " the Hedgehog.";
	DieNouns[271] = " Bill Nye the science guy.";
	DieNouns[272] = " Patrick Bateman.";
	DieNouns[273] = " the doubles guy.";
	DieNouns[274] = " the Taxmaster.";
	DieNouns[275] = " Billy Mays.";
	DieNouns[276] = " the Big City Toilet.";
	DieNouns[277] = " four easy payments of only $19.95.";
	DieNouns[278] = " Mitch Hedberg.";
	DieNouns[279] = " Bob Marley.";
	
	DieNouns[280] = "'s armpit hair.";
	DieNouns[281] = " a fairy princess.";
	DieNouns[282] = " seven Koopa hotels.";
	DieNouns[283] = " armpit hair.";
	DieNouns[284] = " a magical girl.";
	DieNouns[285] = " a Klondike bar.";
	DieNouns[286] = " hats.";
	DieNouns[287] = " a planet of hats.";
	DieNouns[288] = " Trixie Tang.";
	DieNouns[289] = " Timmy Turner's mom.";
	
	DieNouns[290] = " 64 Advance.";
	DieNouns[291] = " Elmer Fudd.";
	DieNouns[292] = " Burger King.";
	DieNouns[293] = " diabeetus.";
	DieNouns[294] = " a YLYL thread.";
	DieNouns[295] = " paper bags.";
	DieNouns[296] = " Mr. Monopoly.";
	DieNouns[297] = " a total retard.";
	DieNouns[298] = " a potato.";
	DieNouns[299] = " an extra chromosome.";
	
	DieNouns[300] = "'s cheating AI.";
	DieNouns[301] = " Dinkleberg.";
	DieNouns[302] = " HAAAAAAAAAX!";
	DieNouns[303] = " Dr. HAAAAAAAAAX!";
	DieNouns[304] = " Dr. Bees.";
	DieNouns[305] = " a swarm of bees.";
	DieNouns[306] = " a spooky scary skeleton.";
	DieNouns[307] = " mr skeltal";
	DieNouns[308] = " Mr. Bones' Wild Ride.";
	DieNouns[309] = " BOOONESAW.";
	
	DieNouns[310] = "'s drug stash.";
	DieNouns[311] = " an alien.";
	DieNouns[312] = " an ayylien.";
	DieNouns[313] = " a girl who's obviously trans.";
	DieNouns[314] = " Inglip.";
	DieNouns[315] = " bad rage comics.";
	DieNouns[316] = " racist rage comics.";
	DieNouns[317] = " a narwhal baconing.";
	DieNouns[318] = " Snoo.";
	DieNouns[319] = " 9gag.";
	
	DieNouns[320] = "'s panties.";
	DieNouns[321] = " IA32 assembly.";
	DieNouns[322] = " zeros and ones.";
	DieNouns[323] = " C++.";
	DieNouns[324] = " Python.";
	DieNouns[325] = " Monty Python.";
	DieNouns[326] = " the Black Knight.";
	DieNouns[327] = " the Holy Hand Grenade.";
	DieNouns[328] = " a blue and black dress.";
	DieNouns[329] = " a white and gold dress.";
	
	DieNouns[330] = " in the parlor with the knife.";
	DieNouns[331] = " Java.";
	DieNouns[332] = " Microsoft Sam.";
	DieNouns[333] = " Internet Explorer 6.";
	DieNouns[334] = " humans -- or were they dancer?";
	DieNouns[335] = " whoever phone was.";
	DieNouns[336] = " Pokemon: Lost Silver.";
	DieNouns[337] = " Modern Warfare 2.";
	DieNouns[338] = " Chex Quest.";
	DieNouns[339] = " E.T. for the Atari 2600.";
	
	DieNouns[340] = ", Attorney at Law.";
	DieNouns[341] = " Final DOOM.";
	DieNouns[342] = " Touhou Koumakyou ~ the Embodiment of Scarlet Devil.";
	DieNouns[343] = " Ice Sign \"Icicle Fall\".";
	DieNouns[344] = " Chris Hansen.";
	DieNouns[345] = " the TOR network.";
	DieNouns[346] = " George Zimmerman.";
	DieNouns[347] = " Chris Dorner.";
	DieNouns[348] = " Eric Harris.";
	DieNouns[349] = " Dylan Klebold.";
	
	DieNouns[350] = ", M.D.";
	DieNouns[351] = " Jigsaw.";
	DieNouns[352] = " Shrek.";
	DieNouns[353] = " Vladimir Makarov.";
	DieNouns[354] = " President Putin.";
	DieNouns[355] = " Prime Minister Putin.";
	DieNouns[356] = " Cho Seung-Hui.";
	DieNouns[357] = " Adam Lanza.";
	DieNouns[358] = " DEEZ NUTS.";
	DieNouns[359] = " balls.";
	
	DieNouns[360] = " the Mechawolf.";
	DieNouns[361] = " a garden gnome.";
	DieNouns[362] = " Nicholas Cage.";
	DieNouns[363] = " Tapper the arcade bartender.";
	DieNouns[364] = " cancer.";
	DieNouns[365] = " medical malpractice.";
	DieNouns[366] = " a dominatrix.";
	DieNouns[367] = " medical marijuana.";
	DieNouns[368] = " something really kinky.";
	DieNouns[369] = " a Christmas present that was opened on December 23.";
	
	DieNouns[370] = " the Vampire Slayer.";
	DieNouns[371] = " Heath Ledger.";
	DieNouns[372] = " Kurt Cobain.";
	DieNouns[373] = " Budd Dwyer.";
	DieNouns[374] = " Madotsuki.";
	DieNouns[375] = " Urotsuki.";
	DieNouns[376] = " Sabitsuki.";
	DieNouns[377] = " Chie.";
	DieNouns[378] = "... er, what was it again?";
	DieNouns[379] = " secure tripcodes.";
	
	DieNouns[380] = "'s post.";
	DieNouns[381] = " /b/.";
	DieNouns[382] = " /a/.";
	DieNouns[383] = " /k/.";
	DieNouns[384] = " /d/.";
	DieNouns[385] = " /vg/.";
	DieNouns[386] = " /x/.";
	DieNouns[387] = " /lgbt/.";
	DieNouns[388] = " /ubuu/.";
	DieNouns[389] = " /mlp/.";
	
	DieNouns[390] = " of Nazareth.";
	DieNouns[391] = " Chen.";
	DieNouns[392] = " Cirno.";
	DieNouns[393] = " (9).";
	DieNouns[394] = " Yuuka Kazami.";
	DieNouns[395] = " PUPPY PUPPY PUPPY PUPPY PUPPY PUPPY PUPPY PUPPY PUPPY PUPPY PUPPY PUPPY PUPPY PUPPY PUPPY PUPPY!";
	DieNouns[396] = " a kitten.";
	DieNouns[397] = " a dead cat.";
	DieNouns[398] = " cats with captions stapled onto their faces.";
	DieNouns[399] = " cat videos.";
	
	DieNouns[400] = ", the last airbender.";
	DieNouns[401] = " Darude: Sandstorm.";
	DieNouns[402] = " Sarude: Dandstorm.";
	DieNouns[403] = " Stadude: Randsorm.";
	DieNouns[404] = " smallpox.";
	DieNouns[405] = " bigpox.";
	DieNouns[406] = " shingles.";
	DieNouns[407] = " roofies.";
	DieNouns[408] = " Mine Turtle.";
	DieNouns[409] = " Desmond the Moon Bear.";
	
	DieNouns[410] = ", who aculy is dolan.";
	DieNouns[411] = " Mickey Mouse.";
	DieNouns[412] = " Mikey Moose.";
	DieNouns[413] = " Dolan Duk.";
	DieNouns[414] = " Baman.";
	DieNouns[415] = " Piderman.";
	DieNouns[416] = " a Spiderman thread.";
	DieNouns[417] = " Wingardium Leviosa.";
	DieNouns[418] = " Wingardium Levioh-suh.";
	DieNouns[419] = " Wingardium Levio-SAAAH.";
	
	DieNouns[420] = "'s cooking.";
	DieNouns[421] = " a toilet.";
	DieNouns[422] = " sittin' on the toilet.";
	DieNouns[423] = " the Debbies.";
	DieNouns[424] = " Freddy Fazbear.";
	DieNouns[425] = " 93MB of .rar files.";
	DieNouns[426] = " Princess Elsa.";
	DieNouns[427] = " Princess Anna.";
	DieNouns[428] = " Baymax.";
	DieNouns[429] = " Godzilla.";
	
	DieNouns[430] = "'s art skills.";
	DieNouns[431] = " the kitchen sink.";
	DieNouns[432] = " everything but the kitchen sink.";
	DieNouns[433] = " Akarin~";
	DieNouns[434] = " Scatman John.";
	DieNouns[435] = " John Lajoie.";
	DieNouns[436] = " the best song ever made in the world.";
	DieNouns[437] = " a soup can.";
	DieNouns[438] = " a dispentry.";
	DieNouns[439] = " Christian Brutal Sniper.";
	
	DieNouns[440] = ": FATALITY.";
	DieNouns[441] = " Buck Fitches, Futtbucker Extraordinaire.";
	DieNouns[442] = " the New Triple Cheeseburger.";
	DieNouns[443] = " GARBAGE DAY!";
	DieNouns[444] = " the smell of napalm in the morning.";
	DieNouns[445] = " accidentally a word.";
	DieNouns[446] = " accidentally a word and alsosome of the punctuationand spaces";
	DieNouns[447] = " SPAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACE";
	DieNouns[448] = " Skynet.";
	DieNouns[449] = " DA CHOPPA.";
	
	DieNouns[450] = " the Terrible.";
	DieNouns[451] = " Linux.";
	DieNouns[452] = " Ubuntu.";
	DieNouns[453] = " a messed-up BIOS.";
	DieNouns[454] = " free open-source software.";
	DieNouns[455] = " shareware.";
	DieNouns[456] = " a 14-day free trial.";
	DieNouns[457] = " the Jesus Christ Sponge.";
	DieNouns[458] = " the WTF Blanket.";
	DieNouns[459] = " the WTF Blanket: Dead Animal Edition.";

	DieNouns[460] = "'s FANTASTIC new product.";
	DieNouns[461] = " Miley Cyrus.";
	DieNouns[462] = " Lady GaGa.";
	DieNouns[463] = " unique New York.";
	DieNouns[464] = " a quick movement of the enemy that would jeapordize six gunboats.";
	DieNouns[465] = " a quick brown fox that just jumped over a lazy dog.";
	DieNouns[466] = " a jackdaw that loves my big sphinx of quartz.";
	DieNouns[467] = " CRACK BABY CRACK BABY";
	DieNouns[468] = " yaoi.";
	DieNouns[469] = " yuri.";

	DieNouns[470] = ". And that's terrible.";
	DieNouns[471] = " Danbooru.";
	DieNouns[472] = " Veebooru.";
	DieNouns[473] = " the old WildCritters.";
	DieNouns[474] = " ClubStripes.";
	DieNouns[475] = " Derpibooru.";
	DieNouns[476] = " the old Ponibooru.";
	DieNouns[477] = " xkcd.";
	DieNouns[478] = " Randall Munroe.";
	DieNouns[479] = " a Pootispenser.";

	DieNouns[480] = "-chan.";
	DieNouns[481] = " Curly Brace's panties.";
	DieNouns[482] = " a soldier from the surface.";
	DieNouns[483] = " the Bloons.";
	DieNouns[484] = " goddamn camo-lead Bloons.";
	DieNouns[485] = " Super Monkey.";
	DieNouns[486] = " a Werewolf. Their role was Investigator.";
	DieNouns[487] = " a member of the Mafia. We could not find a last will.";
	DieNouns[488] = " a Serial Killer. Their role was Doctor.";
	DieNouns[489] = " an Arsonist. We could not find a last will.";
	
	DieNouns[490] = "-kun.";
	DieNouns[491] = " onii-chan~ (WHO SAID THAT)";
	DieNouns[492] = " Encyclopedia Dramatica.";
	DieNouns[493] = " Silk Road.";
	DieNouns[494] = " John Wilkes Booth.";
	DieNouns[495] = " Lee Harvey Oswald.";
	DieNouns[496] = " Mark David Chapman.";
	DieNouns[497] = " James Earl Ray.";
	DieNouns[498] = " James Earl Jones.";
	DieNouns[499] = " Don LaFontaine.";
	
	DieNouns[500] = ", because why the hell not?";
	DieNouns[501] = " Xander Mobus.";
	DieNouns[502] = " Masahiro Sakurai.";
	DieNouns[503] = " Master-Hero Samurai.";
	DieNouns[504] = " Reggie Fils-Aime.";
	DieNouns[505] = " Shigeru Miyamoto.";
	DieNouns[506] = " Mew2King.";
	DieNouns[507] = " C9.MaNg0.";
	DieNouns[508] = " Hungrybox.";
	DieNouns[509] = " aMSa.";
	
	
	std::vector<std::string> DieNames(0);

	int v = 0;
	int n = 0;
	int a = 0;
	int b = 1;
	int c = 1;
	std::string name;
	
	while (name != "Q" and name != "q")
	{
		std::cout << "Enter people's names. Enter 'Q' or 'q' to finish: ";
		std::getline(std::cin, name);
		DieNames.push_back(name);
		if ((name == "Q" or name == "q") and DieNames.size() < 2)
		{
			DieNames.pop_back();
			std::cout << "You need at least two names.\n";
			name = "Fuck you.";
		}
	}
	DieNames.pop_back();
	
	while (c > 0)
	{
		std::cout << std::endl;
		while (c > 0)
		{
			v = rand() % DieVerbs.size();
			n = rand() % DieNouns.size();
			a = rand() % DieNames.size();
			while (b == a) b = rand() % DieNames.size();

			std::cout << DieNames[a] << DieVerbs[v];
			if (v % 10)
			{
				if (n % 10 == 0) std::cout << ' ' << DieNames[b];
				std::cout << DieNouns[n];
			}
			std::cout << std::endl;
			c--;
		}
		std::cout << "How many more obituaries would you like? (max 20) ";
		std::cin >> c;
		if (c > 20) c = 20;
	}
	return 0;
}

