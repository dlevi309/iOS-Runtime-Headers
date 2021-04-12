/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIKeyboardHandBiasTransitionCoordinatorDelegate <NSObject>
@required
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 forHandBiasCoordinator:(id)arg2;
-(id)prepareTransition:(id)arg1 forTargetHandBias:(long long)arg2 coordinator:(id)arg3;
-(void)finishHandBiasTransitionWithFinalBias:(long long)arg1;
-(long long)currentHandBiasWithCoordinator:(id)arg1;
-(id)hostViewForHandBiasTransition:(id)arg1;

@end

