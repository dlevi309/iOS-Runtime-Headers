/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKitCore/_UIDigitizerGestureRecognizerImpDelegate.h>

@class _UIDigitizerGestureRecognizerImp, NSString;

@interface UIDigitizerLongPressGestureRecognizer : UIGestureRecognizer <_UIDigitizerGestureRecognizerImpDelegate> {

	_UIDigitizerGestureRecognizerImp* _imp;

}

@property (assign,nonatomic) double minimumPressDuration; 
@property (nonatomic,readonly) CGPoint digitizerLocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setMinimumPressDuration:(double)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setAllowedTouchTypes:(id)arg1 ;
-(void)setAllowedPressTypes:(id)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)digitizerLocation;
-(void)touchesBeganSuccessfully:(id)arg1 ;
-(void)pressesEndedSuccessfully:(id)arg1 ;
-(void)pressesNotHeldLongEnough:(id)arg1 ;
-(void)pressesHeldForMinimum:(id)arg1 ;
-(double)minimumPressDuration;
@end

