/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>

@class NSMapTable, SBHomeGesturePanGestureRecognizer, SBScreenEdgePanGestureRecognizer, BSAnimationSettings;

@interface SBNotificationHomeAffordanceController : NSObject <SBHomeGestureParticipantDelegate> {

	NSMapTable* _clientsToParticipants;
	SBHomeGesturePanGestureRecognizer* _screenEdgePanGesture;

}

@property (nonatomic,readonly) SBScreenEdgePanGestureRecognizer * screenEdgePanGesture; 
@property (nonatomic,readonly) BSAnimationSettings * hideHomeAffordanceAnimationSettings; 
@property (nonatomic,readonly) BSAnimationSettings * unhideHomeAffordanceAnimationSettings; 
@property (nonatomic,readonly) id<UIViewSpringAnimationBehaviorDescribing> settleHomeAffordanceAnimationBehaviorDescription; 
+(id)sharedInstance;
-(void)registerClient:(id)arg1 withIdentifier:(long long)arg2 ;
-(void)unregisterClient:(id)arg1 withIdentifier:(long long)arg2 ;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(BSAnimationSettings *)hideHomeAffordanceAnimationSettings;
-(BSAnimationSettings *)unhideHomeAffordanceAnimationSettings;
-(id<UIViewSpringAnimationBehaviorDescribing>)settleHomeAffordanceAnimationBehaviorDescription;
-(SBScreenEdgePanGestureRecognizer *)screenEdgePanGesture;
@end

