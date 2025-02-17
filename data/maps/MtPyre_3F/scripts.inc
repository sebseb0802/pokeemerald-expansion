MtPyre_3F_MapScripts::
	.byte 0

MtPyre_3F_EventScript_William::
	trainerbattle_single TRAINER_WILLIAM, MtPyre_3F_Text_WilliamIntro, MtPyre_3F_Text_WilliamDefeat
	msgbox MtPyre_3F_Text_WilliamPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_3F_EventScript_Kayla::
	trainerbattle_single TRAINER_KAYLA, MtPyre_3F_Text_KaylaIntro, MtPyre_3F_Text_KaylaDefeat
	msgbox MtPyre_3F_Text_KaylaPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_3F_Text_WilliamIntro:
	.string "The rich atmosphere of the mountain\n"
	.string "has elevated my psychic power!\p"
	.string "A mere child like you…\n"
	.string "You dream of winning?$"

MtPyre_3F_Text_WilliamDefeat:
	.string "I drown in self-pity…$"

MtPyre_3F_Text_WilliamPostBattle:
	.string "My psychic powers have surely\n"
	.string "grown several times, but…$"

MtPyre_3F_Text_KaylaIntro:
	.string "Ahahahaha!\p"
	.string "This is no place for children, least\n"
	.string "of all you!$"

MtPyre_3F_Text_KaylaDefeat:
	.string "I lost that cleanly…$"

MtPyre_3F_Text_KaylaPostBattle:
	.string "This means my training is still not\n"
	.string "enough…\p"
	.string "I've got to keep working toward the\n"
	.string "summit…\p"
	.string "Go, me!$"