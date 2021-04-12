/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/WDRunWithCharacterProperties.h>

@class OADDrawable;

@interface WDOfficeArt : WDRunWithCharacterProperties {

	OADDrawable* mDrawable;
	BOOL mFloating;

}
+(int)textBoxTextTypeForRegularTextType:(int)arg1 ;
-(BOOL)isFloating;
-(void)setFloating:(BOOL)arg1 ;
-(id)imageName;
-(id)description;
-(id)imageData;
-(id)drawable;
-(int)runType;
-(id)initWithParagraph:(id)arg1 ;
-(BOOL)isDrawableOverridden;
-(void)checkForFloating:(id)arg1 ;
-(void)setDrawable:(id)arg1 ;
-(void)setTextType:(int)arg1 recursivelyToDrawable:(id)arg2 ;
-(id)overrideDrawable;
-(void)clearDrawable;
-(id)imageBlipRef;
-(void)setImageBlipRef:(id)arg1 ;
-(void)propagateTextTypeToDrawables;
@end

