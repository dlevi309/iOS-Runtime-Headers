/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class UIDelayedAction;

@interface _UITouchDownGestureRecognizer : UIGestureRecognizer {

	CGPoint _locationInView;
	CGPoint _initialLocationInScreenSpace;
	UIDelayedAction* _activationDelay;
	double _allowableMovement;

}

@property (assign,nonatomic) double allowableMovement;              //@synthesize allowableMovement=_allowableMovement - In the implementation block
-(void)setAllowableMovement:(double)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(double)allowableMovement;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)locationInView:(id)arg1 ;
-(BOOL)gestureIsStillValid;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)recognizeOrFailForCurrentLocation;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)locationIsMostlyInsideView:(CGPoint)arg1 ;
-(void)activationDelayHandler;
-(void)cancelActivationDelay;
@end

