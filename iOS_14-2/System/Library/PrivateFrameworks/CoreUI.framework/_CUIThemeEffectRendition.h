/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class CUIShapeEffectPreset;

@interface _CUIThemeEffectRendition : CUIThemeRendition {

	const cuieffectdata* effectData;
	CUIShapeEffectPreset* _effectPreset;
	float _minimumShadowSpread;

}
-(void)_setStructuredThemeStore:(id)arg1 ;
-(id)effectPreset;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(void)dealloc;
@end

