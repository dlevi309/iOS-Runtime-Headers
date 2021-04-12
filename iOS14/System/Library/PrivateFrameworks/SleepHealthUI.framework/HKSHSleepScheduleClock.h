/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthUI.framework/SleepHealthUI
*/

#import <SleepHealthUI/SleepHealthUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@interface HKSHSleepScheduleClock : UIControl <UIGestureRecognizerDelegate> {

	 model;
	 configuration;
	 gestureRecognizer;
	 track;
	 ring;
	 grabber;
	 dial;
	 bedtimeHand;
	 wakeUpHand;
	 majorFeedbackGenerator;
	 minorFeedbackGenerator;
	 dragState;

}
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)accessibilitySetModel:(id)arg1 wakeUpComponents:(id)arg2 timeInBedGoal:(double)arg3 alarmEnabled:(BOOL)arg4 ;
-(id)accessibilityRoundedBedtimeComponents;
-(id)accessibilityRoundedWakeUpComponents;
-(void)gestureReconizerDidChange:(id)arg1 ;
-(void)gestureRecognizerDidStart:(id)arg1 ;
-(void)gestureRecognizerDidMove:(id)arg1 ;
-(void)gestureRecognizerDidEnd:(id)arg1 ;
-(double)accessibilityMinimumTimeInBed;
-(double)accessibilityMaximumTimeInBed;
-(void)accessibilitySetBedtimeAngle:(double)arg1 minimumTimeInBed:(double)arg2 maximumTimeInBed:(double)arg3 ;
-(void)accessibilitySetWakeupAngle:(double)arg1 minimumTimeInBed:(double)arg2 maximumTimeInBed:(double)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(id)accessibilityBedtimeHand;
-(id)accessibilityWakeUpHand;
-(BOOL)accessibilityAlarmEnabled;
-(double)accessibilityTimeInBed;
-(double)accessibilityTimeInBedGoal;
@end

