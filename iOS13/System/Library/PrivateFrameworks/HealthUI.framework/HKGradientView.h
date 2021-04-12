/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UIView.h>

@class HKGradient;

@interface HKGradientView : UIView {

	HKGradient* _gradient;

}

@property (nonatomic,retain) HKGradient * gradient;              //@synthesize gradient=_gradient - In the implementation block
+(Class)layerClass;
+(id)hk_verticalWaveformMaskGradientWithInsetLocation:(double)arg1 ;
-(void)setGradient:(HKGradient *)arg1 ;
-(HKGradient *)gradient;
-(id)initWithGradient:(id)arg1 ;
-(void)maskCorners:(unsigned long long)arg1 radius:(double)arg2 ;
-(void)maskAllCornersWithRadius:(double)arg1 ;
-(void)_updateGradientLayer;
@end

