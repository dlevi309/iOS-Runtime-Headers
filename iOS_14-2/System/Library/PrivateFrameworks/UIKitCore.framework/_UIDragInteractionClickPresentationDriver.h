/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)didTransitionToBeginState;
-(void)didTransitionToInactiveState;
-(BOOL)isPreparingToDrag;
-(BOOL)isLifted;
-(BOOL)canBeginLiftAtLocation:(CGPoint)arg1 ;
-(void)beginLiftAtLocation:(CGPoint)arg1 useDefaultLiftAnimation:(BOOL)arg2 delay:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)cancel;
-(void)didTransitionToInflightState;
-(void)_performDelayedLift;
-(void)beginDragWithTouches:(id)arg1 itemIterator:(/*^block*/id)arg2 beginningSessionHandler:(/*^block*/id)arg3 ;
@end

