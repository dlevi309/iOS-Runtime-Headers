/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)achievedMaximumAbsoluteAccumulatedMovement;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)description;
-(CGPoint)maximumAbsoluteAccumulatedMovement;
-(BOOL)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)accumulatedMovement;
-(void)setMaximumAbsoluteAccumulatedMovement:(CGPoint)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

