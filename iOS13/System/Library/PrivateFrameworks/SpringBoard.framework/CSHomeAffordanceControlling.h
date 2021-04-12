/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class UIPanGestureRecognizer, BSAnimationSettings;


@protocol CSHomeAffordanceControlling <NSObject>
@property (nonatomic,readonly) UIPanGestureRecognizer * screenEdgePanGesture; 
@property (nonatomic,readonly) BSAnimationSettings * hideHomeAffordanceAnimationSettings; 
@property (nonatomic,readonly) BSAnimationSettings * unhideHomeAffordanceAnimationSettings; 
@property (nonatomic,readonly) id<UIViewSpringAnimationBehaviorDescribing> settleHomeAffordanceAnimationBehaviorDescription; 
@required
-(void)registerHomeGestureParticipant:(id)arg1 withIdentifier:(long long)arg2;
-(void)unregisterHomeGestureParticipant:(id)arg1 withIdentifier:(long long)arg2;
-(id)keyboardAssertionForGestureWindow:(id)arg1;
-(BSAnimationSettings *)hideHomeAffordanceAnimationSettings;
-(BSAnimationSettings *)unhideHomeAffordanceAnimationSettings;
-(id<UIViewSpringAnimationBehaviorDescribing>)settleHomeAffordanceAnimationBehaviorDescription;
-(UIPanGestureRecognizer *)screenEdgePanGesture;

@end

