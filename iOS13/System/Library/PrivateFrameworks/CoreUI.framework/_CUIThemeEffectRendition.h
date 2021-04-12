/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(id)effectPreset;
-(void)_setStructuredThemeStore:(id)arg1 ;
@end

