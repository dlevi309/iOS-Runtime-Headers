/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIColor;

@interface CUIPSDLayerEffectColorOverlay : CUIPSDLayerEffectComponent {

	int _blendMode;
	double _opacity;
	CUIColor* _color;

}

@property (assign) int blendMode;                 //@synthesize blendMode=_blendMode - In the implementation block
@property (retain) CUIColor * color;              //@synthesize color=_color - In the implementation block
@property (assign) double opacity;                //@synthesize opacity=_opacity - In the implementation block
-(int)blendMode;
-(id)init;
-(CUIColor *)color;
-(double)opacity;
-(unsigned)effectType;
-(void)setOpacity:(double)arg1 ;
-(id)description;
-(void)setColor:(CUIColor *)arg1 ;
-(BOOL)updateLayerEffectPreset:(id)arg1 error:(id*)arg2 ;
-(id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)setBlendMode:(int)arg1 ;
-(void)dealloc;
@end

