/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(id)colorMap;
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

