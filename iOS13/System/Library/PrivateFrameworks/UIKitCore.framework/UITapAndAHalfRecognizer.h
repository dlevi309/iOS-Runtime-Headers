/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableSet, UITouch, UIDelayedAction;

@interface UITapAndAHalfRecognizer : UIGestureRecognizer {

	CGPoint _startPoint;
	double _allowableMovement;
	int _numberOfFullTaps;
	double _minimumFinalPressDuration;
	NSMutableSet* _activeTouches;
	int _currentNumberOfTaps;
	UITouch* _touch;
	UIDelayedAction* _tapTimer;

}

@property (nonatomic,retain) UITouch * touch;                               //@synthesize touch=_touch - In the implementation block
@property (assign,nonatomic) int numberOfFullTaps;                          //@synthesize numberOfFullTaps=_numberOfFullTaps - In the implementation block
@property (assign,nonatomic) double allowableMovement;                      //@synthesize allowableMovement=_allowableMovement - In the implementation block
@property (assign,nonatomic) double minimumFinalPressDuration;              //@synthesize minimumFinalPressDuration=_minimumFinalPressDuration - In the implementation block
@property (nonatomic,readonly) CGPoint locationOfFirstTap; 
-(void)dealloc;
-(UITouch *)touch;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setAllowableMovement:(double)arg1 ;
-(void)_resetGestureRecognizer;
-(double)allowableMovement;
-(int)numberOfFullTaps;
-(void)setTouch:(UITouch *)arg1 ;
-(void)clearTapTimer;
-(void)tooSlow:(id)arg1 ;
-(void)startTapTimer:(double)arg1 ;
-(void)recognized:(id)arg1 ;
-(double)minimumFinalPressDuration;
-(void)startRecognitionTimer:(double)arg1 ;
-(void)_verifyMovementInAllowableRange;
-(CGPoint)translationInWindowCoordinates;
-(CGPoint)locationOfFirstTap;
-(void)setNumberOfFullTaps:(int)arg1 ;
-(void)setMinimumFinalPressDuration:(double)arg1 ;
@end

