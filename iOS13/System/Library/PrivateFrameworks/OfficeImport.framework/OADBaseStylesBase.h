/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

