/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/FxPinParameter.h>

@interface FxParameterSlider : FxPinParameter {

	FxParameterSliderPriv* _sliderPriv;

}
-(id)init;
-(void)dealloc;
-(void)setStepValue:(double)arg1 ;
-(double)stepValue;
-(double)maxValue;
-(void)setMaxValue:(double)arg1 ;
-(double)minValue;
-(void)setMinValue:(double)arg1 ;
-(BOOL)isLogarithmic;
-(double)minSliderValue;
-(void)setMinSliderValue:(double)arg1 ;
-(double)maxSliderValue;
-(void)setMaxSliderValue:(double)arg1 ;
-(void)setIsLogarithmic:(BOOL)arg1 ;
@end

