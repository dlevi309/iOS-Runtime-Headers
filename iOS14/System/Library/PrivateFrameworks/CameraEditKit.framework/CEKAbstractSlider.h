/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
*/


@protocol CEKAbstractSlider <NSObject>
@property (assign,nonatomic) long long sliderVerticalAlignment; 
@property (assign,nonatomic) double sliderVerticalOffset; 
@property (assign,nonatomic) double labelVerticalPadding; 
@property (assign,nonatomic) BOOL useLegibilityShadows; 
@property (assign,nonatomic) BOOL useTickMarkLegibilityShadows; 
@property (assign,nonatomic) long long textOrientation; 
@property (assign,nonatomic) long long titleAlignment; 
@property (assign,nonatomic) CGPoint gradientInsets; 
@property (assign,nonatomic) unsigned long long fontStyle; 
@required
-(void)setFontStyle:(unsigned long long)arg1;
-(void)setUseLegibilityShadows:(BOOL)arg1;
-(void)setUseTickMarkLegibilityShadows:(BOOL)arg1;
-(void)setTextOrientation:(long long)arg1 animated:(BOOL)arg2;
-(void)setLabelVerticalPadding:(double)arg1;
-(void)setSliderVerticalAlignment:(long long)arg1;
-(void)setSliderVerticalOffset:(double)arg1;
-(unsigned long long)fontStyle;
-(void)setTransparentGradients;
-(long long)titleAlignment;
-(void)setTitleAlignment:(long long)arg1;
-(void)setGradientInsets:(CGPoint)arg1;
-(void)setOpaqueGradientsWithColor:(id)arg1;
-(void)removeGradients;
-(void)setTextOrientation:(long long)arg1;
-(BOOL)useTickMarkLegibilityShadows;
-(long long)textOrientation;
-(double)labelVerticalPadding;
-(long long)sliderVerticalAlignment;
-(double)sliderVerticalOffset;
-(CGPoint)gradientInsets;
-(BOOL)useLegibilityShadows;

@end

