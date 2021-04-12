/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OADColorScheme, OADStyleMatrix, OADFontScheme;

@interface OADBaseStylesBase : NSObject {

	OADColorScheme* mColorScheme;
	OADStyleMatrix* mStyleMatrix;
	OADFontScheme* mFontScheme;

}

@property (nonatomic,retain) OADColorScheme * colorScheme; 
@property (nonatomic,retain) OADStyleMatrix * styleMatrix; 
@property (nonatomic,retain) OADFontScheme * fontScheme; 
-(id)description;
-(OADColorScheme *)colorScheme;
-(void)setColorScheme:(OADColorScheme *)arg1 ;
-(OADStyleMatrix *)styleMatrix;
-(OADFontScheme *)fontScheme;
-(void)setStyleMatrix:(OADStyleMatrix *)arg1 ;
-(void)setFontScheme:(OADFontScheme *)arg1 ;
@end

