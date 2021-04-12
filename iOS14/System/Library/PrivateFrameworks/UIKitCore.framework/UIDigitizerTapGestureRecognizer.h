/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKitCore/_UIDigitizerGestureRecognizerImpDelegate.h>

@class _UIDigitizerGestureRecognizerImp, NSString;

@interface UIDigitizerTapGestureRecognizer : UIGestureRecognizer <_UIDigitizerGestureRecognizerImpDelegate> {

	_UIDigitizerGestureRecognizerImp* _imp;

}

@property (assign,nonatomic) double maximumPressDuration; 
@property (nonatomic,readonly) CGPoint digitizerLocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAllowedTouchTypes:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setAllowedPressTypes:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)digitizerLocation;
-(void)reset;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBeganSuccessfully:(id)arg1 ;
-(void)pressesEndedSuccessfully:(id)arg1 ;
-(void)pressesNotHeldLongEnough:(id)arg1 ;
-(void)pressesHeldForMinimum:(id)arg1 ;
-(double)maximumPressDuration;
-(void)setMaximumPressDuration:(double)arg1 ;
@end

