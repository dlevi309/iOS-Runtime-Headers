/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _isSingleKeyPressGesture;
	long long _buttonType;

}

@property (assign,setter=_setButtonType:,nonatomic) long long _buttonType;              //@synthesize buttonType=_buttonType - In the implementation block
@property (nonatomic,readonly) CGPoint centroid; 
@property (nonatomic,readonly) CGPoint location; 
@property (nonatomic,readonly) NSArray * touches; 
@property (assign,nonatomic) double maximumTapDuration; 
@property (assign,nonatomic) BOOL isSingleKeyPressGesture;                              //@synthesize isSingleKeyPressGesture=_isSingleKeyPressGesture - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTapsRequired; 
@property (assign,nonatomic) unsigned long long numberOfTouchesRequired; 
@property (assign,nonatomic) long long buttonMaskRequired; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)_supportsTouchContinuation;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(void)setAllowableMovement:(double)arg1 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_resetGestureRecognizer;
-(CGPoint)centroid;
-(void)tapRecognizerRecognizedTap:(id)arg1 ;
-(void)setAllowedPressTypes:(id)arg1 ;
-(NSArray *)touches;
-(void)setMaximumIntervalBetweenSuccessiveTaps:(double)arg1 ;
-(void)tapRecognizerFailedToRecognizeTap:(id)arg1 ;
-(BOOL)_shouldReceivePress:(id)arg1 ;
-(BOOL)tapIsPossibleForTapRecognizer:(id)arg1 ;
-(void)setNumberOfTapsRequired:(unsigned long long)arg1 ;
-(CGPoint)location;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)numberOfTouches;
-(void)encodeWithCoder:(id)arg1 ;
-(double)maximumTapDuration;
-(long long)_buttonType;
-(long long)_buttonMaskRequired;
-(BOOL)shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(void)_appendSubclassDescription:(id)arg1 ;
-(void)setMaximumSingleTapDuration:(double)arg1 ;
-(void)_setButtonMaskRequired:(long long)arg1 ;
-(BOOL)isSingleKeyPressGesture;
-(BOOL)_delaysRecognitionForGreaterTapCounts;
-(double)allowableMovement;
-(void)_setDelaysRecognitionForGreaterTapCounts:(BOOL)arg1 ;
-(void)setIsSingleKeyPressGesture:(BOOL)arg1 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)_digitizerLocation;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(double)maximumIntervalBetweenSuccessiveTaps;
-(double)maximumSingleTapDuration;
-(void)setButtonMaskRequired:(long long)arg1 ;
-(BOOL)_isGestureType:(long long)arg1 ;
-(void)setMaximumTapDuration:(double)arg1 ;
-(void)_setButtonType:(long long)arg1 ;
-(double)_touchSloppinessFactor;
-(id)initWithCoder:(id)arg1 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)numberOfTapsRequired;
-(unsigned long long)numberOfTouchesRequired;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2 ;
-(void)_setAllowableTouchTimeSeparation:(double)arg1 ;
-(void)_setAllowableSeparation:(double)arg1 ;
-(double)_allowableSeparation;
-(long long)_finalStateForRecognition;
-(BOOL)_shouldFailInResponseToPresses:(id)arg1 withEvent:(id)arg2 ;
-(double)_allowableTouchTimeSeparation;
-(long long)buttonMaskRequired;
-(void)dealloc;
@end

