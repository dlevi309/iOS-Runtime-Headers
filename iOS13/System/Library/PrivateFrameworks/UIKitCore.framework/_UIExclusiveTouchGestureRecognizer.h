/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@interface _UIExclusiveTouchGestureRecognizer : UIGestureRecognizer {

	BOOL _achievedMaximumAbsoluteAccumulatedMovement;
	CGPoint _maximumAbsoluteAccumulatedMovement;
	CGPoint _accumulatedMovement;

}

@property (assign,nonatomic,__weak) id<_UIExclusiveTouchGestureRecognizerDelegate> delegate; 
@property (assign,nonatomic) CGPoint maximumAbsoluteAccumulatedMovement;                                  //@synthesize maximumAbsoluteAccumulatedMovement=_maximumAbsoluteAccumulatedMovement - In the implementation block
@property (nonatomic,readonly) BOOL achievedMaximumAbsoluteAccumulatedMovement;                           //@synthesize achievedMaximumAbsoluteAccumulatedMovement=_achievedMaximumAbsoluteAccumulatedMovement - In the implementation block
@property (nonatomic,readonly) CGPoint accumulatedMovement;                                               //@synthesize accumulatedMovement=_accumulatedMovement - In the implementation block
-(id)description;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)maximumAbsoluteAccumulatedMovement;
-(void)setMaximumAbsoluteAccumulatedMovement:(CGPoint)arg1 ;
-(BOOL)achievedMaximumAbsoluteAccumulatedMovement;
-(CGPoint)accumulatedMovement;
@end

