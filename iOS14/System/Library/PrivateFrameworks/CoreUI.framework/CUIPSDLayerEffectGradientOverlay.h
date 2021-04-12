/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIPSDGradient;

@interface CUIPSDLayerEffectGradientOverlay : CUIPSDLayerEffectComponent {

	CUIPSDGradient* _gradient;

}

@property (retain) CUIPSDGradient * gradient;              //@synthesize gradient=_gradient - In the implementation block
-(id)init;
-(unsigned)effectType;
-(BOOL)updateLayerEffectPreset:(id)arg1 error:(id*)arg2 ;
-(id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)setGradient:(CUIPSDGradient *)arg1 ;
-(CUIPSDGradient *)gradient;
-(void)dealloc;
@end

