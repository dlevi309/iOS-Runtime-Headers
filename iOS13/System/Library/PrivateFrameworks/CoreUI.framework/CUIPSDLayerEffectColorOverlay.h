/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)description;
-(CUIColor *)color;
-(void)setColor:(CUIColor *)arg1 ;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(BOOL)updateLayerEffectPreset:(id)arg1 error:(id*)arg2 ;
-(id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(unsigned)effectType;
@end

