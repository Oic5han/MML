; Title: Song Name
; Composer: Artist
; Maker: Maker

	.bank	0
	.if TOTAL_SONGS > 1
song_addr_table:
	dw	song_000_track_table
	.if (ALLOW_BANK_SWITCH)
song_bank_table:
	dw	song_000_bank_table
	.endif ; ALLOW_BANK_SWITCH
	.endif ; TOTAL_SONGS > 1
song_000_track_table:
	dw	song_000_00
	dw	song_000_01
	dw	song_000_02
	dw	song_000_03
	dw	song_000_04
	.if (ALLOW_BANK_SWITCH)
song_000_bank_table:
	db	bank(song_000_00)*2
	db	bank(song_000_01)*2
	db	bank(song_000_02)*2
	db	bank(song_000_03)*2
	db	bank(song_000_04)*2
	.endif

song_000_00:	;Trk A
	db	$ee
	db	bank(song_000_00_bnk001)*2
	dw	song_000_00_bnk001

	.bank	1
	.org	$a000
song_000_00_bnk001:
	db	$fd,$00,$fe,$81
song_000_00_lp:
	db	$42,$0e,$fc,$01,$40,$0e,$fc,$01	;Trk A; palett_town.mml: 12
	db	$3b,$0e,$fc,$01,$39,$0e,$fc,$01	;Trk A; palett_town.mml: 12
	db	$47,$0e,$fc,$01,$44,$0e,$fc,$01	;Trk A; palett_town.mml: 12
	db	$46,$0e,$fc,$01,$44,$0e,$fc,$01	;Trk A; palett_town.mml: 12
	db	$42,$2c,$fc,$01,$3b,$0e,$fc,$01	;Trk A; palett_town.mml: 15
	db	$37,$0e,$fc,$01,$37,$0e,$fc,$01	;Trk A; palett_town.mml: 15
	db	$39,$0e,$fc,$01,$3b,$0e,$fc,$01	;Trk A; palett_town.mml: 15
	db	$40,$4a,$fc,$01,$36,$0e,$fc,$01	;Trk A; palett_town.mml: 18
	db	$37,$0e,$fc,$01,$39,$0e,$fc,$01	;Trk A; palett_town.mml: 18
	db	$3b,$2c,$fc,$01,$40,$07,$fc,$01	;Trk A; palett_town.mml: 21
	db	$3b,$06,$fc,$01,$39,$3b,$fc,$01	;Trk A; palett_town.mml: 21
	db	$42,$0e,$fc,$01,$40,$0e,$fc,$01	;Trk A; palett_town.mml: 25
	db	$3b,$0e,$fc,$01,$42,$0e,$fc,$01	;Trk A; palett_town.mml: 25
	db	$47,$0e,$fc,$01,$46,$0e,$fc,$01	;Trk A; palett_town.mml: 25
	db	$46,$0e,$fc,$01,$47,$0e,$fc,$01	;Trk A; palett_town.mml: 25
	db	$44,$2c,$fc,$01,$42,$0e,$fc,$01	;Trk A; palett_town.mml: 28
	db	$42,$1d,$fc,$01,$37,$0e,$fc,$01	;Trk A; palett_town.mml: 28
	db	$36,$0e,$fc,$01,$40,$0e,$fc,$01	;Trk A; palett_town.mml: 28
	db	$3b,$0e,$fc,$01,$39,$0e,$fc,$01	;Trk A; palett_town.mml: 31
	db	$37,$0e,$fc,$01,$42,$0e,$fc,$01	;Trk A; palett_town.mml: 31
	db	$40,$0e,$fc,$01,$3b,$0e,$fc,$01	;Trk A; palett_town.mml: 31
	db	$39,$0e,$fc,$01,$37,$3b,$fc,$01	;Trk A; palett_town.mml: 31
	db	$fc,$0f,$37,$0e,$fc,$01,$39,$0e	;Trk A; palett_town.mml: 34
	db	$fc,$01,$3b,$0e,$fc,$01,$40,$3b	;Trk A; palett_town.mml: 34
	db	$fc,$01,$42,$2c,$fc,$01,$40,$0e	;Trk A; palett_town.mml: 38
	db	$fc,$01,$3b,$4a,$fc,$01,$37,$0e	;Trk A; palett_town.mml: 38
	db	$fc,$01,$39,$0e,$fc,$01,$3b,$0e	;Trk A; palett_town.mml: 41
	db	$fc,$01,$40,$1d,$fc,$01,$40,$1d	;Trk A; palett_town.mml: 41
	db	$fc,$01,$42,$2c,$fc,$01,$40,$07	;Trk A; palett_town.mml: 44
	db	$fc,$01,$42,$06,$fc,$01,$3b,$4a	;Trk A; palett_town.mml: 44
	db	$fc,$01,$3b,$0e,$fc,$01,$39,$0e	;Trk A; palett_town.mml: 47
	db	$fc,$01,$37,$0e,$fc,$01,$39,$3b	;Trk A; palett_town.mml: 47
	db	$fc,$01,$34,$1d,$fc,$01,$3b,$1d	;Trk A; palett_town.mml: 51
	db	$fc,$01,$39,$3b,$fc,$01,$37,$1d	;Trk A; palett_town.mml: 51
	db	$fc,$01,$34,$1d,$fc,$01,$36,$3b	;Trk A; palett_town.mml: 54
	db	$fc,$01,$37,$1d,$fc,$01,$3b,$1d	;Trk A; palett_town.mml: 57
	db	$fc,$01,$3b,$3b,$fc,$01,$39,$3b	;Trk A; palett_town.mml: 57
	db	$fc,$01,$ee
	db	bank(song_000_00_lp)*2
	dw	song_000_00_lp


song_000_01:	;Trk B
	db	$fd,$01,$fe,$82
song_000_01_lp:
	db	$2b,$1d,$fc,$01,$30,$0e,$fc,$01	;Trk B; palett_town.mml: 13
	db	$32,$0e,$fc,$01,$fc,$1e,$32,$0e	;Trk B; palett_town.mml: 13
	db	$fc,$01,$30,$0e,$fc,$01,$2b,$1d	;Trk B; palett_town.mml: 13
	db	$fc,$01,$fc,$0f,$32,$0e,$fc,$01	;Trk B; palett_town.mml: 16
	db	$fc,$0f,$32,$0e,$fc,$01,$30,$0e	;Trk B; palett_town.mml: 16
	db	$fc,$01,$2b,$0e,$fc,$01,$fc,$0f	;Trk B; palett_town.mml: 16
	db	$2b,$0e,$fc,$01,$30,$0e,$fc,$01	;Trk B; palett_town.mml: 19
	db	$2b,$0e,$fc,$01,$30,$1b,$fc,$03	;Trk B; palett_town.mml: 19
	db	$fc,$1e,$fc,$0f,$2b,$0e,$fc,$01	;Trk B; palett_town.mml: 19
	db	$30,$0e,$fc,$01,$29,$0e,$fc,$01	;Trk B; palett_town.mml: 22
	db	$2b,$0e,$fc,$01,$27,$0e,$fc,$01	;Trk B; palett_town.mml: 22
	db	$29,$0e,$fc,$01,$26,$0e,$fc,$01	;Trk B; palett_town.mml: 22
	db	$2b,$1d,$fc,$01,$30,$0e,$fc,$01	;Trk B; palett_town.mml: 26
	db	$32,$0e,$fc,$01,$fc,$1e,$32,$0e	;Trk B; palett_town.mml: 26
	db	$fc,$01,$30,$0e,$fc,$01,$2b,$1b	;Trk B; palett_town.mml: 26
	db	$fc,$03,$fc,$0f,$32,$1d,$fc,$01	;Trk B; palett_town.mml: 29
	db	$32,$0e,$fc,$01,$fc,$1e,$34,$1b	;Trk B; palett_town.mml: 29
	db	$fc,$03,$32,$0e,$fc,$01,$30,$0e	;Trk B; palett_town.mml: 32
	db	$fc,$01,$fc,$0f,$26,$0e,$fc,$01	;Trk B; palett_town.mml: 32
	db	$27,$0e,$fc,$01,$30,$0e,$fc,$01	;Trk B; palett_town.mml: 32
	db	$32,$0e,$fc,$01,$30,$0e,$fc,$01	;Trk B; palett_town.mml: 35
	db	$2b,$0e,$fc,$01,$29,$0e,$fc,$01	;Trk B; palett_town.mml: 35
	db	$27,$1b,$fc,$03,$26,$1b,$fc,$03	;Trk B; palett_town.mml: 35
	db	$20,$0e,$fc,$01,$27,$0e,$fc,$01	;Trk B; palett_town.mml: 39
	db	$24,$0e,$fc,$01,$27,$0e,$fc,$01	;Trk B; palett_town.mml: 39
	db	$22,$0e,$fc,$01,$29,$0e,$fc,$01	;Trk B; palett_town.mml: 39
	db	$26,$0e,$fc,$01,$29,$0e,$fc,$01	;Trk B; palett_town.mml: 39
	db	$2b,$0e,$fc,$01,$27,$0e,$fc,$01	;Trk B; palett_town.mml: 42
	db	$22,$0e,$fc,$01,$27,$0e,$fc,$01	;Trk B; palett_town.mml: 42
	db	$2b,$0e,$fc,$01,$27,$0e,$fc,$01	;Trk B; palett_town.mml: 42
	db	$22,$0e,$fc,$01,$27,$0e,$fc,$01	;Trk B; palett_town.mml: 42
	db	$20,$0e,$fc,$01,$27,$0e,$fc,$01	;Trk B; palett_town.mml: 45
	db	$24,$0e,$fc,$01,$27,$0e,$fc,$01	;Trk B; palett_town.mml: 45
	db	$22,$0e,$fc,$01,$29,$0e,$fc,$01	;Trk B; palett_town.mml: 45
	db	$26,$0e,$fc,$01,$29,$0e,$fc,$01	;Trk B; palett_town.mml: 45
	db	$2b,$0e,$fc,$01,$27,$0e,$fc,$01	;Trk B; palett_town.mml: 48
	db	$22,$0e,$fc,$01,$27,$0e,$fc,$01	;Trk B; palett_town.mml: 48
	db	$2b,$0e,$fc,$01,$27,$0e,$fc,$01	;Trk B; palett_town.mml: 48
	db	$2b,$0e,$fc,$01,$27,$0e,$fc,$01	;Trk B; palett_town.mml: 48
	db	$29,$0e,$fc,$01,$24,$0e,$fc,$01	;Trk B; palett_town.mml: 52
	db	$20,$0e,$fc,$01,$24,$0e,$fc,$01	;Trk B; palett_town.mml: 52
	db	$29,$0e,$fc,$01,$24,$0e,$fc,$01	;Trk B; palett_town.mml: 52
	db	$20,$0e,$fc,$01,$24,$0e,$fc,$01	;Trk B; palett_town.mml: 52
	db	$29,$0e,$fc,$01,$24,$0e,$fc,$01	;Trk B; palett_town.mml: 55
	db	$20,$0e,$fc,$01,$24,$0e,$fc,$01	;Trk B; palett_town.mml: 55
	db	$29,$0e,$fc,$01,$24,$0e,$fc,$01	;Trk B; palett_town.mml: 55
	db	$20,$0e,$fc,$01,$24,$0e,$fc,$01	;Trk B; palett_town.mml: 55
	db	$26,$0e,$fc,$01,$22,$0e,$fc,$01	;Trk B; palett_town.mml: 58
	db	$20,$0e,$fc,$01,$22,$0e,$fc,$01	;Trk B; palett_town.mml: 58
	db	$27,$0e,$fc,$01,$24,$0e,$fc,$01	;Trk B; palett_town.mml: 58
	db	$20,$0e,$fc,$01,$24,$0e,$fc,$01	;Trk B; palett_town.mml: 58
	db	$27,$0e,$fc,$01,$24,$0e,$fc,$01	;Trk B; palett_town.mml: 61
	db	$20,$0e,$fc,$01,$24,$0e,$fc,$01	;Trk B; palett_town.mml: 61
	db	$26,$0e,$fc,$01,$22,$0e,$fc,$01	;Trk B; palett_town.mml: 61
	db	$20,$0e,$fc,$01,$22,$0e,$fc,$01	;Trk B; palett_town.mml: 61
	db	$ee
	db	bank(song_000_01_lp)*2
	dw	song_000_01_lp


song_000_02:	;Trk C
	db	$fe,$8f
song_000_02_lp:
	db	$fc,$ff,$ee
	db	bank(song_000_02_lp)*2
	dw	song_000_02_lp


song_000_03:	;Trk D
	db	$fe,$8f,$fd,$02
song_000_03_lp:
	db	$47,$2c,$fc,$01,$44,$0e,$fc,$01	;Trk D; palett_town.mml: 14
	db	$44,$1d,$fc,$01,$46,$1d,$fc,$01	;Trk D; palett_town.mml: 14
	db	$47,$1d,$fc,$01,$47,$0e,$fc,$01	;Trk D; palett_town.mml: 17
	db	$49,$0e,$fc,$01,$44,$1d,$fc,$01	;Trk D; palett_town.mml: 17
	db	$47,$1d,$fc,$01,$44,$2c,$fc,$01	;Trk D; palett_town.mml: 17
	db	$46,$0e,$fc,$01,$44,$1d,$fc,$01	;Trk D; palett_town.mml: 20
	db	$44,$1d,$fc,$01,$47,$2c,$fc,$01	;Trk D; palett_town.mml: 20
	db	$44,$0e,$fc,$01,$44,$1d,$fc,$01	;Trk D; palett_town.mml: 23
	db	$42,$1d,$fc,$01,$47,$2c,$fc,$01	;Trk D; palett_town.mml: 23
	db	$44,$0e,$fc,$01,$44,$1d,$fc,$01	;Trk D; palett_town.mml: 27
	db	$46,$1d,$fc,$01,$47,$2c,$fc,$01	;Trk D; palett_town.mml: 27
	db	$49,$0e,$fc,$01,$44,$1d,$fc,$01	;Trk D; palett_town.mml: 30
	db	$47,$1d,$fc,$01,$44,$2c,$fc,$01	;Trk D; palett_town.mml: 30
	db	$46,$0e,$fc,$01,$44,$1d,$fc,$01	;Trk D; palett_town.mml: 33
	db	$49,$1d,$fc,$01,$47,$2c,$fc,$01	;Trk D; palett_town.mml: 33
	db	$44,$0e,$fc,$01,$44,$1d,$fc,$01	;Trk D; palett_town.mml: 36
	db	$42,$1d,$fc,$01,$40,$3b,$fc,$01	;Trk D; palett_town.mml: 36
	db	$42,$3b,$fc,$01,$47,$3b,$fc,$01	;Trk D; palett_town.mml: 40
	db	$44,$1d,$fc,$01,$42,$1d,$fc,$01	;Trk D; palett_town.mml: 43
	db	$40,$3b,$fc,$01,$42,$3b,$fc,$01	;Trk D; palett_town.mml: 46
	db	$47,$3b,$fc,$01,$49,$1d,$fc,$01	;Trk D; palett_town.mml: 49
	db	$47,$1d,$fc,$01,$44,$1d,$fc,$01	;Trk D; palett_town.mml: 49
	db	$44,$1d,$fc,$01,$49,$1d,$fc,$01	;Trk D; palett_town.mml: 53
	db	$44,$1d,$fc,$01,$44,$1d,$fc,$01	;Trk D; palett_town.mml: 53
	db	$44,$1d,$fc,$01,$47,$1d,$fc,$01	;Trk D; palett_town.mml: 56
	db	$47,$1d,$fc,$01,$46,$1d,$fc,$01	;Trk D; palett_town.mml: 56
	db	$46,$1d,$fc,$01,$44,$1d,$fc,$01	;Trk D; palett_town.mml: 59
	db	$44,$1d,$fc,$01,$44,$1d,$fc,$01	;Trk D; palett_town.mml: 59
	db	$44,$1d,$fc,$01,$46,$2c,$fc,$01	;Trk D; palett_town.mml: 62
	db	$46,$07,$fc,$01,$46,$06,$fc,$01	;Trk D; palett_town.mml: 62
	db	$ee
	db	bank(song_000_03_lp)*2
	dw	song_000_03_lp


song_000_04:	;Trk E

song_000_04_lp:
	db	$fc,$ff,$ee
	db	bank(song_000_04_lp)*2
	dw	song_000_04_lp

