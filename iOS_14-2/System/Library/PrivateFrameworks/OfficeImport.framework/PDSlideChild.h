/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/PDSlideBase.h>

@class OADThemeOverrides, OADColorMap;

@interface PDSlideChild : PDSlideBase {

	BOOL mShowMasterPlaceholderAnimations;
	BOOL mShowMasterShapes;
	OADThemeOverrides* mThemeOverrides;
	OADColorMap* mColorMapOverride;

}
-(id)colorMap;
-(id)init;
-(id)description;
-(id)colorScheme;
-(id)styleMatrix;
-(id)fontScheme;
-(BOOL)showMasterShapes;
-(id)drawingTheme;
-(id)themeOverrides;
-(void)doneWithContent;
-(void)setColorMapOverride:(id)arg1 ;
-(void)setShowMasterShapes:(BOOL)arg1 ;
-(id)defaultTextListStyle;
-(id)colorMapOverride;
-(BOOL)showMasterPlaceholderAnimations;
-(void)setShowMasterPlaceholderAnimations:(BOOL)arg1 ;
@end

