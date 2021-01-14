/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)tooSlow:(id)arg1 ;
-(void)setAllowableMovement:(double)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_resetGestureRecognizer;
-(UITouch *)touch;
-(void)setTouch:(UITouch *)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)startRecognitionTimer:(double)arg1 ;
-(double)allowableMovement;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(double)minimumFinalPressDuration;
-(void)recognized:(id)arg1 ;
-(void)startTapTimer:(double)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)translationInWindowCoordinates;
-(void)setNumberOfFullTaps:(int)arg1 ;
-(void)setMinimumFinalPressDuration:(double)arg1 ;
-(void)clearTapTimer;
-(CGPoint)locationOfFirstTap;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_verifyMovementInAllowableRange;
-(int)numberOfFullTaps;
-(void)dealloc;
@end

