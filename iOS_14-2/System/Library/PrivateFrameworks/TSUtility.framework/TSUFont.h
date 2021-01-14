/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)italicSystemFontOfSize:(double)arg1 ;
+(id)fontWithName:(id)arg1 size:(double)arg2 ;
+(id)boldSystemFontOfSize:(double)arg1 ;
+(id)systemFontOfSize:(double)arg1 ;
+(id)systemFontOfSize:(double)arg1 weight:(double)arg2 ;
+(id)fontWithPlatformFont:(id)arg1 ;
-(NSString *)familyName;
-(NSString *)fontName;
-(CTFontRef)CTFont;
-(double)ascender;
-(double)xHeight;
-(double)pointSize;
-(double)capHeight;
-(double)lineHeight;
-(double)descender;
-(id)fontWithSize:(double)arg1 ;
-(void)dealloc;
-(id)initWithCTFont:(CTFontRef)arg1 ;
-(UIFont *)platformFont;
-(id)convertFontToBold:(BOOL)arg1 italic:(BOOL)arg2 ;
-(id)fontWithScale:(double)arg1 ;
-(id)initWithPlatformFont:(id)arg1 ;
@end

