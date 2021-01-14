/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class UIPanGestureRecognizer, BSAnimationSettings;


@protocol CSHomeAffordanceControlling <NSObject>
@property (nonatomic,readonly) UIPanGestureRecognizer * screenEdgePanGesture; 
@property (nonatomic,readonly) BSAnimationSettings * hideHomeAffordanceAnimationSettings; 
@property (nonatomic,readonly) BSAnimationSettings * unhideHomeAffordanceAnimationSettings; 
@property (nonatomic,readonly) id<UIViewSpringAnimationBehaviorDescribing> settleHomeAffordanceAnimationBehaviorDescription; 
@required
-(BSAnimationSettings *)hideHomeAffordanceAnimationSettings;
-(BSAnimationSettings *)unhideHomeAffordanceAnimationSettings;
-(id<UIViewSpringAnimationBehaviorDescribing>)settleHomeAffordanceAnimationBehaviorDescription;
-(UIPanGestureRecognizer *)screenEdgePanGesture;
-(void)registerHomeGestureParticipant:(id)arg1 withIdentifier:(long long)arg2;
-(void)unregisterHomeGestureParticipant:(id)arg1 withIdentifier:(long long)arg2;
-(id)keyboardAssertionForGestureWindow:(id)arg1;

@end

