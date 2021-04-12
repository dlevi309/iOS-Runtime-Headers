/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithGradient:(id)arg1 ;
-(void)maskCorners:(unsigned long long)arg1 radius:(double)arg2 ;
-(void)setGradient:(HKGradient *)arg1 ;
-(HKGradient *)gradient;
-(void)maskAllCornersWithRadius:(double)arg1 ;
-(void)_updateGradientLayer;
@end

