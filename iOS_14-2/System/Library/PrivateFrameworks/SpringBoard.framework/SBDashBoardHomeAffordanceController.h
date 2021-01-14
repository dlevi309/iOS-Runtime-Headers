/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CSHomeAffordanceControlling.h>

@class UIPanGestureRecognizer, BSAnimationSettings, SBNotificationHomeAffordanceController, NSString;

@interface SBDashBoardHomeAffordanceController : NSObject <CSHomeAffordanceControlling> {

	SBNotificationHomeAffordanceController* _notificationHomeAffordanceController;

}

@property (nonatomic,readonly) UIPanGestureRecognizer * screenEdgePanGesture; 
@property (nonatomic,readonly) BSAnimationSettings * hideHomeAffordanceAnimationSettings; 
@property (nonatomic,readonly) BSAnimationSettings * unhideHomeAffordanceAnimationSettings; 
@property (nonatomic,readonly) id<UIViewSpringAnimationBehaviorDescribing> settleHomeAffordanceAnimationBehaviorDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BSAnimationSettings *)hideHomeAffordanceAnimationSettings;
-(BSAnimationSettings *)unhideHomeAffordanceAnimationSettings;
-(id<UIViewSpringAnimationBehaviorDescribing>)settleHomeAffordanceAnimationBehaviorDescription;
-(UIPanGestureRecognizer *)screenEdgePanGesture;
-(void)registerHomeGestureParticipant:(id)arg1 withIdentifier:(long long)arg2 ;
-(void)unregisterHomeGestureParticipant:(id)arg1 withIdentifier:(long long)arg2 ;
-(id)keyboardAssertionForGestureWindow:(id)arg1 ;
@end
