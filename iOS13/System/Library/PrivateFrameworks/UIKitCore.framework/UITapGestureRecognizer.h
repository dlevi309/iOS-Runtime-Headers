/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKit/UITapRecognizerDelegate.h>

@class UITapRecognizer, NSArray, NSString;

@interface UITapGestureRecognizer : UIGestureRecognizer <UITapRecognizerDelegate> {

	CGPoint _locationInView;
	UITapRecognizer* _imp;
	unsigned _delaysRecognitionForGreaterTapCounts;
	long long _buttonType;

}

@property (assign,setter=_setButtonType:,nonatomic) long long _buttonType;              //@synthesize buttonType=_buttonType - In the implementation block
@property (nonatomic,readonly) CGPoint centroid; 
@property (nonatomic,readonly) CGPoint location; 
@property (nonatomic,readonly) NSArray * touches; 
@property (assign,nonatomic) double maximumTapDuration; 
@property (assign,nonatomic) unsigned long long numberOfTapsRequired; 
@property (assign,nonatomic) unsigned long long numberOfTouchesRequired; 
@property (assign,nonatomic) long long buttonMaskRequired; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)_supportsTouchContinuation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGPoint)location;
-(CGPoint)locationInView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setAllowableMovement:(double)arg1 ;
-(void)setAllowedPressTypes:(id)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_setButtonType:(long long)arg1 ;
-(unsigned long long)numberOfTouchesRequired;
-(unsigned long long)numberOfTapsRequired;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(void)setNumberOfTapsRequired:(unsigned long long)arg1 ;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(void)_resetGestureRecognizer;
-(BOOL)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_setAllowableTouchTimeSeparation:(double)arg1 ;
-(void)_setAllowableSeparation:(double)arg1 ;
-(void)setMaximumTapDuration:(double)arg1 ;
-(double)allowableMovement;
-(long long)_buttonType;
-(CGPoint)centroid;
-(BOOL)_shouldReceivePress:(id)arg1 ;
-(CGPoint)_digitizerLocation;
-(void)setMaximumIntervalBetweenSuccessiveTaps:(double)arg1 ;
-(double)maximumTapDuration;
-(double)maximumIntervalBetweenSuccessiveTaps;
-(NSArray *)touches;
-(double)_touchSloppinessFactor;
-(BOOL)tapIsPossibleForTapRecognizer:(id)arg1 ;
-(void)tapRecognizerRecognizedTap:(id)arg1 ;
-(void)tapRecognizerFailedToRecognizeTap:(id)arg1 ;
-(void)setButtonMaskRequired:(long long)arg1 ;
-(BOOL)shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(void)_appendSubclassDescription:(id)arg1 ;
-(unsigned long long)numberOfTouches;
-(CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2 ;
-(long long)buttonMaskRequired;
-(double)_allowableSeparation;
-(long long)_finalStateForRecognition;
-(BOOL)_shouldFailInResponseToPresses:(id)arg1 withEvent:(id)arg2 ;
-(double)_allowableTouchTimeSeparation;
-(double)maximumSingleTapDuration;
-(void)setMaximumSingleTapDuration:(double)arg1 ;
-(long long)_buttonMaskRequired;
-(void)_setButtonMaskRequired:(long long)arg1 ;
-(BOOL)_delaysRecognitionForGreaterTapCounts;
-(void)_setDelaysRecognitionForGreaterTapCounts:(BOOL)arg1 ;
@end

