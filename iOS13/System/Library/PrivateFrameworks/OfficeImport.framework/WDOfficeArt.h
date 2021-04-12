/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/WDRunWithCharacterProperties.h>

@class OADDrawable;

@interface WDOfficeArt : WDRunWithCharacterProperties {

	OADDrawable* mDrawable;
	BOOL mFloating;

}
+(int)textBoxTextTypeForRegularTextType:(int)arg1 ;
-(id)description;
-(BOOL)isFloating;
-(void)setFloating:(BOOL)arg1 ;
-(id)imageName;
-(id)imageData;
-(id)initWithParagraph:(id)arg1 ;
-(id)drawable;
-(BOOL)isDrawableOverridden;
-(int)runType;
-(void)checkForFloating:(id)arg1 ;
-(void)setDrawable:(id)arg1 ;
-(void)setTextType:(int)arg1 recursivelyToDrawable:(id)arg2 ;
-(id)overrideDrawable;
-(void)clearDrawable;
-(id)imageBlipRef;
-(void)setImageBlipRef:(id)arg1 ;
-(void)propagateTextTypeToDrawables;
@end

