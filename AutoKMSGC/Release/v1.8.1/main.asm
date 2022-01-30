	.file	"main.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "\0"
LC1:
	.ascii "title AutoKMS by lmsdscav\0"
LC2:
	.ascii "color 2e\0"
LC3:
	.ascii "cls\0"
LC4:
	.ascii "AutoKMS by lmsdscav\0"
	.align 4
LC5:
	.ascii "\304\343\312\307\322\324\271\334\300\355\324\261\265\304\310\250\317\336\264\362\277\252\301\313\261\276\310\355\274\376\302\360\243\277\310\347\271\373\262\273\312\307\307\353\315\313\263\366\243\254\310\273\272\363\323\322\274\374\261\276\310\355\274\376\243\254\321\241\324\361\322\324\271\334\300\355\324\261\324\313\320\320\241\243\0"
LC6:
	.ascii "\274\314\320\370\307\353\260\264\273\330\263\265\243\254\267\361\324\362\271\330\261\325\264\313\264\260\277\332\0"
	.align 4
LC7:
	.ascii "1.\327\324\266\257\274\244\273\356Windows\12"
	.ascii "2.\312\326\266\257\274\244\273\356Windows\12"
	.ascii "3.\262\351\277\264\263\314\320\362\320\305\317\242\274\260\260\346\261\276\272\305\12"
	.ascii "4.\262\351\277\264Windows\317\265\315\263\260\346\261\276\12"
	.ascii "5.\262\351\277\264Windows\274\244\273\356\320\305\317\242\12"
	.ascii "6.\315\313\263\366\0"
LC8:
	.ascii "%d\0"
LC9:
	.ascii "AutoKMS Mode::\0"
LC10:
	.ascii "\307\353\321\241\324\361\304\343\265\304\317\265\315\263\243\272\0"
	.align 4
LC11:
	.ascii "1.WindowsXP \310\316\322\342\320\315\272\305\12"
	.ascii "2.Windows7 \310\316\322\342\320\315\272\305\12"
	.ascii "3.Windows10 \327\250\322\265\260\346\12"
	.ascii "4.Windows10 \306\363\322\265\260\346\12"
	.ascii "5.Windows8 \327\250\322\265\260\346\12"
	.ascii "6.Windows8 \301\343\312\333\260\346Pro\12"
	.ascii "7.Windows10 \274\322\315\245\260\346\12"
	.ascii "0.\267\265\273\330\265\275\326\367\262\313\265\245\0"
LC12:
	.ascii "KMS\0"
	.align 4
LC13:
	.ascii "\312\344\310\353\304\343\265\304\303\330\324\277\276\315\277\311\322\324\274\244\273\356\301\313\243\254\310\347\271\373\304\343\317\353\310\241\317\373\243\254\307\353\274\374\310\353B\273\362b(\262\273\307\370\267\326\264\363\320\241\320\264).\307\353\310\317\325\346\312\344\310\353\0"
LC14:
	.ascii "b\0"
LC15:
	.ascii "\260\346\261\276\272\305: %s\12\0"
LC16:
	.ascii "\263\314\320\362\323\311lmsdscav\326\306\327\367\0"
LC17:
	.ascii "\275\342\312\315\310\250\271\351lmsdscav\313\371\323\320\0"
	.align 4
LC18:
	.ascii "Copyright [C] 2019-2022.lxStd Org. All Rights Reserved.\0"
LC19:
	.ascii "\265\343\273\330\263\265\273\330\265\275\326\367\275\347\303\346\0"
LC20:
	.ascii "start winver\0"
LC21:
	.ascii "start slmgr /dlv\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB13:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%edi
	pushl	%ebx
	andl	$-16, %esp
	subl	$432, %esp
	.cfi_offset 7, -12
	.cfi_offset 3, -16
	call	___main
	movl	$775433777, 383(%esp)
	movl	$49, 387(%esp)
	leal	391(%esp), %eax
	movl	$32, %ecx
	movl	$0, %ebx
	movl	%ebx, (%eax)
	movl	%ebx, -4(%eax,%ecx)
	leal	4(%eax), %edx
	andl	$-4, %edx
	subl	%edx, %eax
	addl	%eax, %ecx
	andl	$-4, %ecx
	andl	$-4, %ecx
	movl	$0, %eax
L2:
	movl	%ebx, (%edx,%eax)
	addl	$4, %eax
	cmpl	%ecx, %eax
	jb	L2
	addl	%eax, %edx
	movl	$LC0, %eax
	movb	%al, 423(%esp)
	movl	$0, 428(%esp)
	movl	$959853143, 350(%esp)
	movl	$1180118350, 354(%esp)
	movl	$760764231, 358(%esp)
	movl	$960714329, 362(%esp)
	movl	$1244933442, 366(%esp)
	movl	$758727478, 370(%esp)
	movl	$1194539092, 374(%esp)
	movw	$88, 378(%esp)
	movl	$1380995150, 320(%esp)
	movl	$1464216889, 324(%esp)
	movl	$760759108, 328(%esp)
	movl	$943927876, 332(%esp)
	movl	$944254282, 336(%esp)
	movl	$759902775, 340(%esp)
	movl	$877943090, 344(%esp)
	movw	$51, 348(%esp)
	movl	$1246252595, 290(%esp)
	movl	$1462971703, 294(%esp)
	movl	$759910743, 298(%esp)
	movl	$1413894708, 302(%esp)
	movl	$1178086728, 306(%esp)
	movl	$760826440, 310(%esp)
	movl	$1364808272, 314(%esp)
	movw	$72, 318(%esp)
	movl	$859977560, 260(%esp)
	movl	$1313287498, 264(%esp)
	movl	$759321686, 268(%esp)
	movl	$1144537681, 272(%esp)
	movl	$1263152434, 276(%esp)
	movl	$758658115, 280(%esp)
	movl	$1364023106, 284(%esp)
	movw	$72, 288(%esp)
	movl	$961562196, 230(%esp)
	movl	$1129721177, 234(%esp)
	movl	$760230745, 238(%esp)
	movl	$860378710, 242(%esp)
	movl	$1480076628, 246(%esp)
	movl	$759382872, 250(%esp)
	movl	$1496598093, 254(%esp)
	movw	$75, 258(%esp)
	movl	$861426253, 200(%esp)
	movl	$926166342, 204(%esp)
	movl	$760494402, 208(%esp)
	movl	$926430258, 212(%esp)
	movl	$1464544586, 216(%esp)
	movl	$759582027, 220(%esp)
	movl	$1113018450, 224(%esp)
	movw	$89, 228(%esp)
	movl	$1264013635, 170(%esp)
	movl	$1128475955, 174(%esp)
	movl	$760826457, 178(%esp)
	movl	$1178882388, 182(%esp)
	movl	$1211247958, 186(%esp)
	movl	$760366154, 190(%esp)
	movl	$843199319, 194(%esp)
	movw	$77, 198(%esp)
	movl	$1196701521, 140(%esp)
	movl	$1364012344, 144(%esp)
	movl	$759906867, 148(%esp)
	movl	$1364740178, 152(%esp)
	movl	$1146694979, 156(%esp)
	movl	$759450200, 160(%esp)
	movl	$1295405366, 164(%esp)
	movw	$51, 168(%esp)
	movl	$1145526339, 110(%esp)
	movl	$1346841924, 114(%esp)
	movl	$758268466, 118(%esp)
	movl	$1465338706, 122(%esp)
	movl	$1195912516, 126(%esp)
	movl	$760825907, 130(%esp)
	movl	$927614038, 134(%esp)
	movw	$74, 138(%esp)
	movl	$1480153172, 80(%esp)
	movl	$943271236, 84(%esp)
	movl	$760624974, 88(%esp)
	movl	$1364023094, 92(%esp)
	movl	$1480731958, 96(%esp)
	movl	$759645751, 100(%esp)
	movl	$961624136, 104(%esp)
	movw	$57, 108(%esp)
	movl	$LC1, (%esp)
	call	_system
	movl	$LC2, (%esp)
	call	_system
	movl	$LC3, (%esp)
	call	_system
	movl	$LC4, (%esp)
	call	_puts
	movl	$LC5, (%esp)
	call	_puts
	movl	$LC6, (%esp)
	call	_puts
	leal	380(%esp), %eax
	movl	%eax, (%esp)
	call	_gets
	jmp	L4
L27:
	movl	$0, 76(%esp)
	movl	$LC3, (%esp)
	call	_system
	movl	$LC7, (%esp)
	call	_puts
	leal	76(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC8, (%esp)
	call	_scanf
	call	_getchar
	movl	$LC3, (%esp)
	call	_system
	movl	76(%esp), %eax
	cmpl	$6, %eax
	ja	L29
	movl	L7(,%eax,4), %eax
	jmp	*%eax
	.section .rdata,"dr"
	.align 4
L7:
	.long	L29
	.long	L6
	.long	L8
	.long	L9
	.long	L10
	.long	L11
	.long	L12
	.text
L6:
	movl	$LC9, (%esp)
	call	_puts
	movl	$0, 424(%esp)
	movl	$0, 72(%esp)
	jmp	L13
L24:
	movl	$LC10, (%esp)
	call	_puts
	movl	$LC11, (%esp)
	call	_puts
	leal	72(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC8, (%esp)
	call	_scanf
	movl	72(%esp), %eax
	cmpl	$7, %eax
	ja	L14
	movl	L16(,%eax,4), %eax
	jmp	*%eax
	.section .rdata,"dr"
	.align 4
L16:
	.long	L15
	.long	L17
	.long	L18
	.long	L19
	.long	L20
	.long	L21
	.long	L22
	.long	L23
	.text
L17:
	movl	$1, 424(%esp)
	leal	110(%esp), %eax
	movl	%eax, (%esp)
	call	_active
	jmp	L13
L18:
	movl	$1, 424(%esp)
	leal	230(%esp), %eax
	movl	%eax, (%esp)
	call	_active
	jmp	L13
L19:
	movl	$1, 424(%esp)
	leal	350(%esp), %eax
	movl	%eax, (%esp)
	call	_active
	jmp	L13
L20:
	movl	$1, 424(%esp)
	leal	320(%esp), %eax
	movl	%eax, (%esp)
	call	_active
	jmp	L13
L21:
	movl	$1, 424(%esp)
	leal	290(%esp), %eax
	movl	%eax, (%esp)
	call	_active
	jmp	L13
L22:
	movl	$1, 424(%esp)
	leal	260(%esp), %eax
	movl	%eax, (%esp)
	call	_active
	jmp	L13
L23:
	movl	$1, 424(%esp)
	leal	80(%esp), %eax
	movl	%eax, (%esp)
	call	_active
	jmp	L13
L15:
	movl	$1, 424(%esp)
	jmp	L13
L14:
	movl	$0, 424(%esp)
	nop
L13:
	cmpl	$1, 424(%esp)
	jne	L24
	jmp	L4
L8:
	movl	$LC12, (%esp)
	call	_puts
	movl	$0, 22(%esp)
	leal	26(%esp), %eax
	movl	$46, %ecx
	movl	$0, %ebx
	movl	%ebx, (%eax)
	movl	%ebx, -4(%eax,%ecx)
	leal	4(%eax), %edx
	andl	$-4, %edx
	subl	%edx, %eax
	addl	%eax, %ecx
	andl	$-4, %ecx
	shrl	$2, %ecx
	movl	%edx, %edi
	movl	%ebx, %eax
	rep stosl
	movl	$LC13, (%esp)
	call	_puts
	leal	22(%esp), %eax
	movl	%eax, (%esp)
	call	_gets
	leal	22(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC14, (%esp)
	call	_strcmpi
	testl	%eax, %eax
	je	L30
	leal	22(%esp), %eax
	movl	%eax, (%esp)
	call	_active
	jmp	L4
L9:
	leal	383(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC15, (%esp)
	call	_printf
	movl	$LC16, (%esp)
	call	_puts
	movl	$LC17, (%esp)
	call	_puts
	movl	$LC18, (%esp)
	call	_puts
	movl	$LC19, (%esp)
	call	_puts
	leal	380(%esp), %eax
	movl	%eax, (%esp)
	call	_gets
	jmp	L4
L10:
	movl	$LC20, (%esp)
	call	_system
	jmp	L4
L11:
	movl	$LC21, (%esp)
	call	_system
	jmp	L4
L12:
	movl	$1, 428(%esp)
	jmp	L4
L29:
	nop
	jmp	L4
L30:
	nop
L4:
	cmpl	$1, 428(%esp)
	jne	L27
	movl	$0, %eax
	leal	-8(%ebp), %esp
	popl	%ebx
	.cfi_restore 3
	popl	%edi
	.cfi_restore 7
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE13:
	.section .rdata,"dr"
LC22:
	.ascii "slmgr /ckms\0"
LC23:
	.ascii "slmgr /upk\0"
LC24:
	.ascii "slmgr /skms lxstd.top\0"
LC25:
	.ascii "slmgr /ato\0"
LC26:
	.ascii "OK\0"
	.text
	.globl	_active
	.def	_active;	.scl	2;	.type	32;	.endef
_active:
LFB14:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%edi
	subl	$532, %esp
	.cfi_offset 7, -12
	movl	$1735224435, -508(%ebp)
	movl	$1764696178, -504(%ebp)
	movl	$2124656, -500(%ebp)
	leal	-496(%ebp), %edx
	movl	$0, %eax
	movl	$122, %ecx
	movl	%edx, %edi
	rep stosl
	movl	8(%ebp), %eax
	movl	%eax, 4(%esp)
	leal	-508(%ebp), %eax
	movl	%eax, (%esp)
	call	_strcat
	movl	$LC22, (%esp)
	call	_system
	movl	$LC23, (%esp)
	call	_system
	leal	-508(%ebp), %eax
	movl	%eax, (%esp)
	call	_system
	movl	$LC24, (%esp)
	call	_system
	movl	$LC25, (%esp)
	call	_system
	movl	$LC26, (%esp)
	call	_puts
	nop
	addl	$532, %esp
	popl	%edi
	.cfi_restore 7
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE14:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_system;	.scl	2;	.type	32;	.endef
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_gets;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_getchar;	.scl	2;	.type	32;	.endef
	.def	_strcmpi;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_strcat;	.scl	2;	.type	32;	.endef
