/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol UITapRecognizerDelegate;
@class NSMutableSet, NSMutableArray, NSArray, NSSet;

@interface UITapRecognizer : NSObject <NSSecureCoding> {

	unsigned long long _numberOfTouchesRequired;
	unsigned long long _numberOfTapsRequired;
	long long _buttonMaskRequired;
	BOOL _continuousTapRecognition;
	NSMutableSet* _activeTouches;
	int _currentNumberOfTouches;
	int _currentNumberOfTaps;
	int _numberOfTouchesForCurrentTap;
	CGPoint _location;
	CGPoint _startPoint;
	CGPoint _digitizerLocation;
	double _allowableMovement;
	double _allowableSeparation;
	double _allowableTouchTimeSeparation;
	double _maximumSingleTapDuration;
	double _maximumTapDuration;
	double _minimumTapDuration;
	double _startTime;
	double _maximumIntervalBetweenSuccessiveTaps;
	NSMutableArray* _touches;
	long long _strongestDirectionalAxis;
	double _strongestDirectionalForce;
	unsigned _timerOn : 1;
	unsigned _multitouchTimerOn : 1;
	unsigned _noNewTouches : 1;
	unsigned _hasPointerTouch : 1;
	BOOL _countsOnlyActiveTouches;
	id<UITapRecognizerDelegate> _delegate;
	long long _exclusiveDirectionalAxis;

}

@property (assign,nonatomic,__weak) id<UITapRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTapsRequired;                  //@synthesize numberOfTapsRequired=_numberOfTapsRequired - In the implementation block
@property (assign,nonatomic) BOOL continuousTapRecognition; 
@property (assign,nonatomic) unsigned long long numberOfTouchesRequired;               //@synthesize numberOfTouchesRequired=_numberOfTouchesRequired - In the implementation block
@property (assign,nonatomic) long long buttonMaskRequired;                             //@synthesize buttonMaskRequired=_buttonMaskRequired - In the implementation block
@property (assign,nonatomic) double allowableMovement; 
@property (assign,nonatomic) double allowableSeparation; 
@property (assign,nonatomic) double allowableTouchTimeSeparation;                      //@synthesize allowableTouchTimeSeparation=_allowableTouchTimeSeparation - In the implementation block
@property (assign,nonatomic) double maximumSingleTapDuration; 
@property (assign,nonatomic) double maximumTapDuration;                                //@synthesize maximumTapDuration=_maximumTapDuration - In the implementation block
@property (assign,nonatomic) double minimumTapDuration;                                //@synthesize minimumTapDuration=_minimumTapDuration - In the implementation block
@property (assign,nonatomic) double maximumIntervalBetweenSuccessiveTaps; 
@property (assign,nonatomic) BOOL countsOnlyActiveTouches;                             //@synthesize countsOnlyActiveTouches=_countsOnlyActiveTouches - In the implementation block
@property (assign,nonatomic) long long exclusiveDirectionalAxis;                       //@synthesize exclusiveDirectionalAxis=_exclusiveDirectionalAxis - In the implementation block
@property (nonatomic,readonly) NSArray * touches;                                      //@synthesize touches=_touches - In the implementation block
@property (nonatomic,readonly) NSSet * activeTouches; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<UITapRecognizerDelegate>)delegate;
-(void)setDelegate:(id<UITapRecognizerDelegate>)arg1 ;
-(void)_reset;
-(CGPoint)locationInView:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setAllowableMovement:(double)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)numberOfTouchesRequired;
-(unsigned long long)numberOfTapsRequired;
-(void)setNumberOfTapsRequired:(unsigned long long)arg1 ;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(double)allowableSeparation;
-(void)setMaximumTapDuration:(double)arg1 ;
-(double)allowableMovement;
-(CGPoint)_digitizerLocation;
-(CGPoint)_locationInSceneReferenceSpace;
-(void)setContinuousTapRecognition:(BOOL)arg1 ;
-(void)setMaximumIntervalBetweenSuccessiveTaps:(double)arg1 ;
-(double)maximumTapDuration;
-(double)maximumIntervalBetweenSuccessiveTaps;
-(NSArray *)touches;
-(NSSet *)activeTouches;
-(void)setButtonMaskRequired:(long long)arg1 ;
-(long long)buttonMaskRequired;
-(void)setAllowableSeparation:(double)arg1 ;
-(void)setAllowableTouchTimeSeparation:(double)arg1 ;
-(double)allowableTouchTimeSeparation;
-(BOOL)activeTouchesExceedAllowableSeparation;
-(void)clearMultitouchTimer;
-(void)multitouchExpired:(id)arg1 ;
-(void)startMultitouchTimer:(double)arg1 ;
-(void)clearTapTimer;
-(void)tooSlow:(id)arg1 ;
-(void)_updateDigitizerLocationForEvent:(id)arg1 ;
-(void)_beginInteraction;
-(double)_effectiveAllowableMovement;
-(void)_interactionEndedTouch:(BOOL)arg1 ;
-(void)startTapTimer:(double)arg1 ;
-(BOOL)continuousTapRecognition;
-(double)maximumSingleTapDuration;
-(void)setMaximumSingleTapDuration:(double)arg1 ;
-(CGPoint)locationInView:(id)arg1 focusSystem:(id)arg2 ;
-(double)minimumTapDuration;
-(void)setMinimumTapDuration:(double)arg1 ;
-(BOOL)countsOnlyActiveTouches;
-(void)setCountsOnlyActiveTouches:(BOOL)arg1 ;
-(long long)exclusiveDirectionalAxis;
-(void)setExclusiveDirectionalAxis:(long long)arg1 ;
@end

