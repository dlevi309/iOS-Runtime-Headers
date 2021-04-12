/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIColor;

@interface CUIPSDLayerEffectDropShadow : CUIPSDLayerEffectComponent {

	int _blendMode;
	double _opacity;
	CUIColor* _color;
	short _angle;
	unsigned long long _distance;
	unsigned long long _blurSize;
	unsigned long long _spread;

}

@property (assign) int blendMode;                            //@synthesize blendMode=_blendMode - In the implementation block
@property (assign) double opacity;                           //@synthesize opacity=_opacity - In the implementation block
@property (retain) CUIColor * color;                         //@synthesize color=_color - In the implementation block
@property (assign) short angle;                              //@synthesize angle=_angle - In the implementation block
@property (assign) unsigned long long distance;              //@synthesize distance=_distance - In the implementation block
@property (assign) unsigned long long blurSize;              //@synthesize blurSize=_blurSize - In the implementation block
@property (assign) unsigned long long spread;                //@synthesize spread=_spread - In the implementation block
-(id)init;
-(void)dealloc;
-(CUIColor *)color;
-(void)setColor:(CUIColor *)arg1 ;
-(short)angle;
-(void)setAngle:(short)arg1 ;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(void)setDistance:(unsigned long long)arg1 ;
-(unsigned long long)distance;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(void)setBlurSize:(unsigned long long)arg1 ;
-(void)setSpread:(unsigned long long)arg1 ;
-(BOOL)updateLayerEffectPreset:(id)arg1 error:(id*)arg2 ;
-(id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(unsigned long long)blurSize;
-(unsigned long long)spread;
-(unsigned)effectType;
@end

