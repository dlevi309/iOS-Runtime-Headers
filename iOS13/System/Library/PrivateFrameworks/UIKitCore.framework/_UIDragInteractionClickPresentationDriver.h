/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIDragInteractionDriver.h>

@class NSSet, UIDelayedAction;

@interface _UIDragInteractionClickPresentationDriver : _UIDragInteractionDriver {

	NSSet* _touches;
	/*^block*/id _itemIterator;
	/*^block*/id _sessionHandler;
	/*^block*/id _liftCompletion;
	UIDelayedAction* _delayedLift;

}
-(void)cancel;
-(void)_performDelayedLift;
-(void)didTransitionToBeginState;
-(void)didTransitionToInactiveState;
-(BOOL)canBeginLiftAtLocation:(CGPoint)arg1 ;
-(BOOL)isPreparingToDrag;
-(BOOL)isLifted;
-(void)beginLiftAtLocation:(CGPoint)arg1 useDefaultLiftAnimation:(BOOL)arg2 delay:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)beginDragWithTouches:(id)arg1 itemIterator:(/*^block*/id)arg2 beginningSessionHandler:(/*^block*/id)arg3 ;
-(void)didTransitionToInflightState;
@end

