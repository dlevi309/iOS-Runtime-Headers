/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCDumper.h>

@interface BRCTermDumper : BRCDumper {

	_sFILE* _file;
	unsigned long long _termWidth;
	unsigned long long _usedTermWidth;
	int _curAttrs;
	int _curFg;
	int _curBg;
	BOOL _isatty;
	BOOL _useColor;
	BOOL _supportsEscapeSequences;

}

@property (nonatomic,readonly) BOOL isatty;                               //@synthesize isatty=_isatty - In the implementation block
@property (nonatomic,readonly) BOOL supportsEscapeSequences;              //@synthesize supportsEscapeSequences=_supportsEscapeSequences - In the implementation block
@property (nonatomic,readonly) BOOL useColor;                             //@synthesize useColor=_useColor - In the implementation block
+(void)setupPagerForFd:(int)arg1 ;
+(void)execPagerOnFileFd:(int)arg1 ;
-(void)put:(id)arg1 ;
-(id)initWithFd:(int)arg1 forceColor:(BOOL)arg2 ;
-(BOOL)isatty;
-(void)write:(const char*)arg1 ;
-(void)puts:(const char*)arg1 ;
-(void)startPager;
-(void)endLine;
-(BOOL)useColor;
-(void)reset;
-(void)cursorSave;
-(void)cursorDown:(unsigned)arg1 ;
-(void)puts:(const char*)arg1 len:(unsigned long long)arg2 ;
-(unsigned long long)_startInCString:(char)arg1 fgColor:(int)arg2 bgColor:(int)arg3 attr:(int)arg4 ;
-(id)startStringForFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3 ;
-(void)startFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3 ;
-(void)cursorGotoLineStart;
-(void)forgetRemainingSpace;
-(BOOL)supportsEscapeSequences;
-(void)_putsAndCrop:(const char*)arg1 len:(unsigned long long)arg2 ;
-(id)stringForReset;
-(void)eraseEndOfLine;
-(void)eraseStartOfLine;
-(void)eraseScreenDown;
-(void)eraseScreenUp;
-(void)cursorRestore;
-(void)cursorRight:(unsigned)arg1 ;
-(void)cursorLeft:(unsigned)arg1 ;
-(void)startNewLine;
-(unsigned long long)remainingSpace;
-(void)eraseLine;
-(void)cursorUp:(unsigned)arg1 ;
@end

