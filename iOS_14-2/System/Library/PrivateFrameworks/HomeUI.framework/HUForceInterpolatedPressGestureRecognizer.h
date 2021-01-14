/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UILongPressGestureRecognizer.h>

@class NSMutableSet;

@interface HUForceInterpolatedPressGestureRecognizer : UILongPressGestureRecognizer {

	NSMutableSet* _hu_activeTouches;
	double _currentSampleForceMultiplier;
	double _currentSampleTimestamp;
	double _overallForceMultiplierExcludingCurrentSample;
	double _touchStartTime;

}

@property (nonatomic,readonly) NSMutableSet * hu_activeTouches;                                //@synthesize hu_activeTouches=_hu_activeTouches - In the implementation block
@property (assign,nonatomic) double currentSampleForceMultiplier;                              //@synthesize currentSampleForceMultiplier=_currentSampleForceMultiplier - In the implementation block
@property (assign,nonatomic) double currentSampleTimestamp;                                    //@synthesize currentSampleTimestamp=_currentSampleTimestamp - In the implementation block
@property (assign,nonatomic) double overallForceMultiplierExcludingCurrentSample;              //@synthesize overallForceMultiplierExcludingCurrentSample=_overallForceMultiplierExcludingCurrentSample - In the implementation block
@property (assign,nonatomic) double touchStartTime;                                            //@synthesize touchStartTime=_touchStartTime - In the implementation block
@property (nonatomic,readonly) double currentForceMultiplier; 
@property (nonatomic,readonly) double overallForceMultiplier; 
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_resetForceSamples;
-(NSMutableSet *)hu_activeTouches;
-(void)setTouchStartTime:(double)arg1 ;
-(void)_logForceMultiplierSample;
-(double)touchStartTime;
-(double)currentSampleTimestamp;
-(double)currentSampleForceMultiplier;
-(double)overallForceMultiplierExcludingCurrentSample;
-(void)setOverallForceMultiplierExcludingCurrentSample:(double)arg1 ;
-(void)setCurrentSampleForceMultiplier:(double)arg1 ;
-(void)setCurrentSampleTimestamp:(double)arg1 ;
-(double)_forceMultiplierIncludingCurrentSample;
-(double)currentForceMultiplier;
-(double)overallForceMultiplier;
@end

