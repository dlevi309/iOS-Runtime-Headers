/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIPSDGradient;

@interface CUIPSDLayerEffectGradientOverlay : CUIPSDLayerEffectComponent {

	CUIPSDGradient* _gradient;

}

@property (retain) CUIPSDGradient * gradient;              //@synthesize gradient=_gradient - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setGradient:(CUIPSDGradient *)arg1 ;
-(CUIPSDGradient *)gradient;
-(BOOL)updateLayerEffectPreset:(id)arg1 error:(id*)arg2 ;
-(id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(unsigned)effectType;
@end

