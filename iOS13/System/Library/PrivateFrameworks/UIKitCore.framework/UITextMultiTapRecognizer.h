/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKit/UITapRecognizerDelegate.h>

@class UITapRecognizer, NSArray, NSString;

@interface UITextMultiTapRecognizer : UIGestureRecognizer <UITapRecognizerDelegate> {

	id _target;
	SEL _tapAction;
	UITapRecognizer* _tapRecognizer;
	unsigned long long _tapCount;
	unsigned long long _touchDownCount;
	BOOL _sendTapAction;
	BOOL _recognizesOnSubsequentTouchDowns;

}

@property (readonly) unsigned long long tapCount; 
@property (assign) unsigned long long numberOfTouchesRequired; 
@property (assign) unsigned long long minimumNumberOfTapsRequired; 
@property (assign) double maximumTouchDownDuration; 
@property (assign) double maximumIntervalBetweenTaps; 
@property (assign) double allowableMovement; 
@property (assign) BOOL recognizesOnSubsequentTouchDowns;                       //@synthesize recognizesOnSubsequentTouchDowns=_recognizesOnSubsequentTouchDowns - In the implementation block
@property (readonly) NSArray * touchesForTap; 
@property (readonly) CGPoint location; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(CGPoint)location;
-(CGPoint)locationInView:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setAllowableMovement:(double)arg1 ;
-(unsigned long long)numberOfTouchesRequired;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(BOOL)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2 ;
-(double)allowableMovement;
-(unsigned long long)tapCount;
-(void)onStateUpdate:(id)arg1 ;
-(BOOL)recognizesOnSubsequentTouchDowns;
-(unsigned long long)minimumNumberOfTapsRequired;
-(double)_touchSloppinessFactor;
-(void)resetTapCountForTapRecognizer:(id)arg1 ;
-(BOOL)tapIsPossibleForTapRecognizer:(id)arg1 ;
-(void)tapRecognizerRecognizedTap:(id)arg1 ;
-(void)tapRecognizerFailedToRecognizeTap:(id)arg1 ;
-(id)initWithTarget:(id)arg1 tapAction:(SEL)arg2 ;
-(void)setMinimumNumberOfTapsRequired:(unsigned long long)arg1 ;
-(double)maximumTouchDownDuration;
-(void)setMaximumTouchDownDuration:(double)arg1 ;
-(double)maximumIntervalBetweenTaps;
-(void)setMaximumIntervalBetweenTaps:(double)arg1 ;
-(NSArray *)touchesForTap;
-(void)setRecognizesOnSubsequentTouchDowns:(BOOL)arg1 ;
@end

