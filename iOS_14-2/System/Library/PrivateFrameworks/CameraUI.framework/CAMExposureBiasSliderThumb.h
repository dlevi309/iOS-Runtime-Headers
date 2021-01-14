/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface CAMExposureBiasSliderThumb : UIView {

	float _normalizedExposureValue;

}

@property (assign,nonatomic) float normalizedExposureValue;              //@synthesize normalizedExposureValue=_normalizedExposureValue - In the implementation block
@property (nonatomic,readonly) double maxRadius; 
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)maxRadius;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setNormalizedExposureValue:(float)arg1 ;
-(double)_sunRadius;
-(double)_sunRaySpacing;
-(double)_sunRayLength;
-(double)_interpolatedValueWithMin:(double)arg1 mid:(double)arg2 max:(double)arg3 ;
-(float)normalizedExposureValue;
@end

