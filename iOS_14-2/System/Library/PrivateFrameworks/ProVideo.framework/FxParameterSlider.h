/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/FxPinParameter.h>

@interface FxParameterSlider : FxPinParameter {

	FxParameterSliderPriv* _sliderPriv;

}
-(double)stepValue;
-(void)setStepValue:(double)arg1 ;
-(void)setMaxValue:(double)arg1 ;
-(id)init;
-(void)setMinValue:(double)arg1 ;
-(double)maxValue;
-(double)minValue;
-(void)dealloc;
-(BOOL)isLogarithmic;
-(double)minSliderValue;
-(void)setMinSliderValue:(double)arg1 ;
-(double)maxSliderValue;
-(void)setMaxSliderValue:(double)arg1 ;
-(void)setIsLogarithmic:(BOOL)arg1 ;
@end

