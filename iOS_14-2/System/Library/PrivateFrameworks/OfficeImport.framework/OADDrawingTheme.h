/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OADStyleMatrix, OADFontScheme, OADColorContext, OADColorScheme, OADColorMap;

@interface OADDrawingTheme : NSObject {

	OADStyleMatrix* mStyleMatrix;
	OADFontScheme* mFontScheme;
	OADColorContext* mColorContext;

}

@property (nonatomic,readonly) OADStyleMatrix * styleMatrix; 
@property (nonatomic,readonly) OADFontScheme * fontScheme; 
@property (nonatomic,readonly) OADColorContext * colorContext; 
@property (nonatomic,readonly) OADColorScheme * colorScheme; 
@property (nonatomic,readonly) OADColorMap * colorMap; 
@property (nonatomic,readonly) id<OADColorPalette> colorPalette; 
-(OADColorMap *)colorMap;
-(id<OADColorPalette>)colorPalette;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(OADColorScheme *)colorScheme;
-(OADStyleMatrix *)styleMatrix;
-(OADFontScheme *)fontScheme;
-(void)applyThemeOverrides:(id)arg1 colorMapOverride:(id)arg2 ;
-(id)initWithStyleMatrix:(id)arg1 fontScheme:(id)arg2 colorScheme:(id)arg3 colorMap:(id)arg4 colorPalette:(id)arg5 ;
-(id)initWithTheme:(id)arg1 colorMap:(id)arg2 colorPalette:(id)arg3 ;
-(OADColorContext *)colorContext;
@end

