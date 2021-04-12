/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class NSString;

@interface TSWPLoadableFontInfo : NSObject {

	NSString* _groupUID;
	NSString* _fontPath;
	NSString* _fontName;
	NSString* _fontFamily;
	CGFontRef _cgFont;
	unsigned char _attemptedLoad;
	BOOL _obfuscated;

}

@property (nonatomic,copy) NSString * groupUID;                //@synthesize groupUID=_groupUID - In the implementation block
@property (nonatomic,copy) NSString * fontPath;                //@synthesize fontPath=_fontPath - In the implementation block
@property (nonatomic,copy) NSString * fontName;                //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,copy) NSString * fontFamily;              //@synthesize fontFamily=_fontFamily - In the implementation block
@property (assign,nonatomic) CGFontRef cgFont;                 //@synthesize cgFont=_cgFont - In the implementation block
@property (assign,nonatomic) BOOL obfuscated;                  //@synthesize obfuscated=_obfuscated - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)fontName;
-(void)setFontName:(NSString *)arg1 ;
-(NSString *)fontFamily;
-(void)setFontFamily:(NSString *)arg1 ;
-(CGFontRef)cgFont;
-(NSString *)groupUID;
-(void)setGroupUID:(NSString *)arg1 ;
-(BOOL)obfuscated;
-(void)setObfuscated:(BOOL)arg1 ;
-(void)setCgFont:(CGFontRef)arg1 ;
-(NSString *)fontPath;
-(void)setFontPath:(NSString *)arg1 ;
@end

