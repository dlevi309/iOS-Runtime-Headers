/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface FPCTLTermDumper : NSObject <NSSecureCoding> {

	int _fd;
	unsigned long long _termWidth;
	unsigned long long _usedTermWidth;
	int _curAttrs;
	int _curFg;
	int _curBg;
	BOOL _eightBitColor;
	BOOL _isatty;
	BOOL _useColor;
	BOOL _supportsEscapeSequences;

}

@property (nonatomic,readonly) BOOL isatty;                               //@synthesize isatty=_isatty - In the implementation block
@property (nonatomic,readonly) BOOL supportsEscapeSequences;              //@synthesize supportsEscapeSequences=_supportsEscapeSequences - In the implementation block
@property (nonatomic,readonly) BOOL useColor;                             //@synthesize useColor=_useColor - In the implementation block
@property (nonatomic,readonly) int fd;                                    //@synthesize fd=_fd - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)setupPagerForFd:(int)arg1 ;
+(void)execPagerOnFileFd:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)reset;
-(void)put:(id)arg1 ;
-(int)fd;
-(void)write:(id)arg1 ;
-(void)changeAttributes:(int)arg1 ;
-(void)endLine;
-(id)initWithFd:(int)arg1 forceColor:(BOOL)arg2 ;
-(unsigned long long)_startInCString:(char)arg1 fgColor:(int)arg2 bgColor:(int)arg3 attr:(int)arg4 ;
-(id)startStringForFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3 ;
-(void)startFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3 ;
-(void)cursorGotoLineStart;
-(void)forgetRemainingSpace;
-(void)puts:(const char*)arg1 len:(unsigned long long)arg2 ;
-(BOOL)supportsEscapeSequences;
-(void)_putsAndCrop:(const char*)arg1 len:(unsigned long long)arg2 ;
-(void)puts:(const char*)arg1 ;
-(void)startPager;
-(id)stringForReset;
-(void)eraseEndOfLine;
-(void)eraseStartOfLine;
-(void)eraseLine;
-(void)eraseScreenDown;
-(void)eraseScreenUp;
-(void)cursorSave;
-(void)cursorRestore;
-(void)cursorUp:(unsigned)arg1 ;
-(void)cursorDown:(unsigned)arg1 ;
-(void)cursorRight:(unsigned)arg1 ;
-(void)cursorLeft:(unsigned)arg1 ;
-(void)startNewLine;
-(unsigned long long)remainingSpace;
-(void)startFgColor:(int)arg1 attr:(int)arg2 ;
-(void)startBgColor:(int)arg1 attr:(int)arg2 ;
-(void)startFgColor:(int)arg1 ;
-(void)startBgColor:(int)arg1 ;
-(void)startAttributes:(int)arg1 ;
-(void)changeFgColor:(int)arg1 ;
-(void)changeBgColor:(int)arg1 ;
-(void)dumpImage:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 ;
-(void)dumpImage:(id)arg1 characterWidth:(unsigned long long)arg2 characterHeight:(unsigned long long)arg3 ;
-(void)dumpProgress:(id)arg1 ;
-(id)annotateString:(id)arg1 markedIdentifiers:(id)arg2 ;
-(BOOL)isatty;
-(BOOL)useColor;
@end

