/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


#import <TSUtility/TSUtility-Structs.h>
@class UIFont, NSString;

@interface TSUFont : NSObject {

	CTFontRef _ctFont;

}

@property (nonatomic,readonly) UIFont * platformFont; 
@property (nonatomic,readonly) CTFontRef CTFont;                          //@synthesize ctFont=_ctFont - In the implementation block
@property (nonatomic,retain,readonly) NSString * familyName; 
@property (nonatomic,retain,readonly) NSString * fontName; 
@property (nonatomic,readonly) double pointSize; 
@property (nonatomic,readonly) double ascender; 
@property (nonatomic,readonly) double descender; 
@property (nonatomic,readonly) double capHeight; 
@property (nonatomic,readonly) double xHeight; 
@property (nonatomic,readonly) double lineHeight; 
+(id)fontWithName:(id)arg1 size:(double)arg2 ;
+(id)systemFontOfSize:(double)arg1 ;
+(id)systemFontOfSize:(double)arg1 weight:(double)arg2 ;
+(id)boldSystemFontOfSize:(double)arg1 ;
+(id)italicSystemFontOfSize:(double)arg1 ;
+(id)fontWithPlatformFont:(id)arg1 ;
-(void)dealloc;
-(NSString *)familyName;
-(NSString *)fontName;
-(double)pointSize;
-(double)xHeight;
-(double)descender;
-(double)ascender;
-(id)fontWithSize:(double)arg1 ;
-(double)lineHeight;
-(double)capHeight;
-(CTFontRef)CTFont;
-(id)initWithCTFont:(CTFontRef)arg1 ;
-(UIFont *)platformFont;
-(id)convertFontToBold:(BOOL)arg1 italic:(BOOL)arg2 ;
-(id)fontWithScale:(double)arg1 ;
-(id)initWithPlatformFont:(id)arg1 ;
@end

