/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraEditKit/CEKDiscreteSlider.h>

@class NSTimer;

@interface CAMLowLightSlider : CEKDiscreteSlider {

	BOOL _lowLightActive;
	BOOL __performingCaptureAnimation;
	unsigned long long __selectedIndexBeforeCaptureAnimation;
	double __remainingCaptureAnimationTime;
	NSTimer* __valueLabelUpdateTimer;
	double __inactiveTickMarkHeight;
	CGSize _durationMapping;

}

@property (assign,setter=_setPerformingCaptureAnimation:,getter=_isPerformingCaptureAnimation,nonatomic) BOOL _performingCaptureAnimation;              //@synthesize _performingCaptureAnimation=__performingCaptureAnimation - In the implementation block
@property (assign,setter=_setSelectedIndexBeforeCaptureAnimation:,nonatomic) unsigned long long _selectedIndexBeforeCaptureAnimation;                   //@synthesize _selectedIndexBeforeCaptureAnimation=__selectedIndexBeforeCaptureAnimation - In the implementation block
@property (assign,setter=_setRemainingCaptureAnimationTime:,nonatomic) double _remainingCaptureAnimationTime;                                           //@synthesize _remainingCaptureAnimationTime=__remainingCaptureAnimationTime - In the implementation block
@property (setter=_setValueLabelUpdateTimer:,nonatomic,retain) NSTimer * _valueLabelUpdateTimer;                                                        //@synthesize _valueLabelUpdateTimer=__valueLabelUpdateTimer - In the implementation block
@property (nonatomic,readonly) double _inactiveTickMarkHeight;                                                                                          //@synthesize _inactiveTickMarkHeight=__inactiveTickMarkHeight - In the implementation block
@property (assign,nonatomic) unsigned long long lowLightMode; 
@property (assign,getter=isLowLightActive,nonatomic) BOOL lowLightActive;                                                                               //@synthesize lowLightActive=_lowLightActive - In the implementation block
@property (assign,nonatomic) CGSize durationMapping;                                                                                                    //@synthesize durationMapping=_durationMapping - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLowLightMode:(unsigned long long)arg1 ;
-(unsigned long long)lowLightMode;
-(void)dealloc;
-(id)valueText;
-(void)performCaptureAnimationWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)endCaptureAnimationAnimated:(BOOL)arg1 ;
-(void)setDurationMapping:(CGSize)arg1 ;
-(void)setLowLightActive:(BOOL)arg1 ;
-(BOOL)_isPerformingCaptureAnimation;
-(unsigned long long)_selectedIndexBeforeCaptureAnimation;
-(double)_remainingCaptureAnimationTime;
-(id)_valueTextForDuration:(double)arg1 ;
-(CGSize)durationMapping;
-(BOOL)isLowLightActive;
-(id)_valueTextForDuration:(double)arg1 format:(id)arg2 ;
-(void)_setSelectedIndexBeforeCaptureAnimation:(unsigned long long)arg1 ;
-(void)_setRemainingCaptureAnimationTime:(double)arg1 ;
-(void)_setPerformingCaptureAnimation:(BOOL)arg1 ;
-(void)_startValueLabelUpdateTimerWithDuration:(double)arg1 ;
-(void)_stopValueLabelUpdateTimer;
-(double)_inactiveTickMarkHeight;
-(void)_handleValueLabelUpdateTimerWithStartTime:(double)arg1 duration:(double)arg2 ;
-(void)_setValueLabelUpdateTimer:(id)arg1 ;
-(NSTimer *)_valueLabelUpdateTimer;
@end

