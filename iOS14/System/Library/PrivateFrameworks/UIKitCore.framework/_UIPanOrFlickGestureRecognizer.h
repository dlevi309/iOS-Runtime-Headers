/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPanGestureRecognizer.h>

@class UIDelayedAction;

@interface _UIPanOrFlickGestureRecognizer : UIPanGestureRecognizer {

	unsigned long long _touchCount;
	BOOL _didLongPress;
	BOOL _longPressOnly;
	unsigned long long _allowedFlickDirections;
	double _maximumFlickDuration;
	double _minimumFlickDistance;
	double _minimumPressDuration;
	double _allowableMovement;
	double _responsivenessDelay;
	double _timestampBeforeGestureBegan;
	double _timestampOfLastEvent;
	UIDelayedAction* _elapsedAction;
	UIDelayedAction* _responsivenessAction;
	CGPoint _initialCentroidLocation;

}

@property (assign,nonatomic) double timestampBeforeGestureBegan;                                           //@synthesize timestampBeforeGestureBegan=_timestampBeforeGestureBegan - In the implementation block
@property (assign,nonatomic) double timestampOfLastEvent;                                                  //@synthesize timestampOfLastEvent=_timestampOfLastEvent - In the implementation block
@property (nonatomic,retain) UIDelayedAction * elapsedAction;                                              //@synthesize elapsedAction=_elapsedAction - In the implementation block
@property (nonatomic,retain) UIDelayedAction * responsivenessAction;                                       //@synthesize responsivenessAction=_responsivenessAction - In the implementation block
@property (assign,nonatomic) CGPoint initialCentroidLocation;                                              //@synthesize initialCentroidLocation=_initialCentroidLocation - In the implementation block
@property (nonatomic,readonly) id<_UIPanOrFlickGestureRecognizerDelegate> panOrFlickDelegate; 
@property (assign,nonatomic) unsigned long long allowedFlickDirections;                                    //@synthesize allowedFlickDirections=_allowedFlickDirections - In the implementation block
@property (assign,nonatomic) double maximumFlickDuration;                                                  //@synthesize maximumFlickDuration=_maximumFlickDuration - In the implementation block
@property (assign,nonatomic) double minimumFlickDistance;                                                  //@synthesize minimumFlickDistance=_minimumFlickDistance - In the implementation block
@property (nonatomic,readonly) unsigned long long recognizedFlickDirection; 
@property (assign,nonatomic) double minimumPressDuration;                                                  //@synthesize minimumPressDuration=_minimumPressDuration - In the implementation block
@property (assign,nonatomic) double allowableMovement;                                                     //@synthesize allowableMovement=_allowableMovement - In the implementation block
@property (nonatomic,readonly) BOOL didLongPress;                                                          //@synthesize didLongPress=_didLongPress - In the implementation block
@property (assign,nonatomic) BOOL longPressOnly;                                                           //@synthesize longPressOnly=_longPressOnly - In the implementation block
@property (assign,nonatomic) double responsivenessDelay;                                                   //@synthesize responsivenessDelay=_responsivenessDelay - In the implementation block
-(void)enoughTimeElapsed:(id)arg1 ;
-(void)setAllowableMovement:(double)arg1 ;
-(void)setMinimumPressDuration:(double)arg1 ;
-(double)minimumPressDuration;
-(void)clearTimer;
-(void)setMaximumFlickDuration:(double)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setTimestampOfLastEvent:(double)arg1 ;
-(BOOL)_analyticsIsGestureHandled;
-(void)setResponsivenessAction:(UIDelayedAction *)arg1 ;
-(UIDelayedAction *)responsivenessAction;
-(unsigned long long)allowedFlickDirections;
-(BOOL)isValidLongPress;
-(double)responsivenessDelay;
-(double)minimumFlickDistance;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)startTimer;
-(BOOL)_shouldTryToBeginWithEvent:(id)arg1 ;
-(double)allowableMovement;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setLongPressOnly:(BOOL)arg1 ;
-(BOOL)longPressOnly;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setResponsivenessDelay:(double)arg1 ;
-(double)timestampOfLastEvent;
-(void)responsivenessTimeElapsed:(id)arg1 ;
-(BOOL)didLongPress;
-(void)setAllowedFlickDirections:(unsigned long long)arg1 ;
-(UIDelayedAction *)elapsedAction;
-(void)reset;
-(void)setElapsedAction:(UIDelayedAction *)arg1 ;
-(void)setInitialCentroidLocation:(CGPoint)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setMinimumFlickDistance:(double)arg1 ;
-(void)setTimestampBeforeGestureBegan:(double)arg1 ;
-(double)timestampBeforeGestureBegan;
-(id<_UIPanOrFlickGestureRecognizerDelegate>)panOrFlickDelegate;
-(double)maximumFlickDuration;
-(CGPoint)initialCentroidLocation;
-(unsigned long long)recognizedFlickDirection;
-(void)dealloc;
@end

