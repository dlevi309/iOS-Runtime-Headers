/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString;

@interface OADBaseFontCollection : NSObject {

	NSString* _latinFont;
	NSString* _eastAsianFont;
	NSString* _complexScriptFont;

}

@property (nonatomic,copy) NSString * latinFont;                      //@synthesize latinFont=_latinFont - In the implementation block
@property (nonatomic,copy) NSString * eastAsianFont;                  //@synthesize eastAsianFont=_eastAsianFont - In the implementation block
@property (nonatomic,copy) NSString * complexScriptFont;              //@synthesize complexScriptFont=_complexScriptFont - In the implementation block
-(BOOL)isEmpty;
-(NSString *)latinFont;
-(id)baseFontForId:(int)arg1 ;
-(NSString *)eastAsianFont;
-(void)setLatinFont:(NSString *)arg1 ;
-(void)setEastAsianFont:(NSString *)arg1 ;
-(NSString *)complexScriptFont;
-(void)setComplexScriptFont:(NSString *)arg1 ;
-(void)setBaseFont:(id)arg1 forId:(int)arg2 ;
-(BOOL)isEqualToBaseFontCollection:(id)arg1 ;
@end

