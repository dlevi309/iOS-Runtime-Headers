/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


#import <LoggingSupport/LoggingSupport-Structs.h>
@interface OSLogTermDumper : NSObject {

	os_trace_blob_s* _ob;
	unsigned short _last_attrs;
	unsigned char _ob_slop[1];
	BOOL _fancy;
	int _fd;
	BOOL _vis;
	unsigned char _colorMode;
	unsigned short _cur_attrs;

}

@property (nonatomic,readonly) unsigned char colorMode;                       //@synthesize colorMode=_colorMode - In the implementation block
@property (nonatomic,readonly) BOOL isFancy;                                  //@synthesize fancy=_fancy - In the implementation block
@property (assign,nonatomic) unsigned short style;                            //@synthesize cur_attrs=_cur_attrs - In the implementation block
@property (assign,getter=isBold,nonatomic) BOOL bold; 
@property (assign,getter=isOblique,nonatomic) BOOL oblique; 
@property (assign,getter=isUnderlined,nonatomic) BOOL underline; 
@property (assign,nonatomic) unsigned char bgColor; 
@property (assign,nonatomic) unsigned char fgColor; 
-(id)init;
-(void)dealloc;
-(void)beginEditing;
-(void)endEditing;
-(void)close;
-(unsigned short)style;
-(void)setStyle:(unsigned short)arg1 ;
-(BOOL)isBold;
-(BOOL)isUnderlined;
-(unsigned char)colorMode;
-(unsigned char)bgColor;
-(void)setBgColor:(unsigned char)arg1 ;
-(unsigned char)fgColor;
-(void)setFgColor:(unsigned char)arg1 ;
-(unsigned)format:(const char*)arg1 ;
-(void)puts:(const char*)arg1 ;
-(void)startPager;
-(void)flush:(BOOL)arg1 ;
-(BOOL)isOblique;
-(void)setBold:(BOOL)arg1 ;
-(void)setOblique:(BOOL)arg1 ;
-(void)setUnderline:(BOOL)arg1 ;
-(void)resetStyle;
-(id)initWithFd:(int)arg1 colorMode:(unsigned char)arg2 ;
-(void)_flushAttrs;
-(void)_resetAttrsForNewline;
-(void)write:(const void*)arg1 size:(unsigned long long)arg2 ;
-(void)putc:(int)arg1 ;
-(unsigned)vformat:(const char*)arg1 args:(char*)arg2 ;
-(void)hexdump:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)writeln;
-(void)pad:(int)arg1 count:(unsigned long long)arg2 ;
-(void)putUUID:(unsigned char)arg1 ;
-(BOOL)isFancy;
@end

