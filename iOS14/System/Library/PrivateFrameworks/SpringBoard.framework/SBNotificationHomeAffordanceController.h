/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>

@class NSMapTable, SBHomeGesturePanGestureRecognizer, SBScreenEdgePanGestureRecognizer, BSAnimationSettings, NSString;

@interface SBNotificationHomeAffordanceController : NSObject <SBHomeGestureParticipantDelegate> {

	NSMapTable* _clientsToParticipants;
	SBHomeGesturePanGestureRecognizer* _screenEdgePanGesture;

}

@property (nonatomic,readonly) SBScreenEdgePanGestureRecognizer * screenEdgePanGesture; 
@property (nonatomic,readonly) BSAnimationSettings * hideHomeAffordanceAnimationSettings; 
@property (nonatomic,readonly) BSAnimationSettings * unhideHomeAffordanceAnimationSettings; 
@property (nonatomic,readonly) id<UIViewSpringAnimationBehaviorDescribing> settleHomeAffordanceAnimationBehaviorDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)unregisterClient:(id)arg1 withIdentifier:(long long)arg2 ;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(void)registerClient:(id)arg1 withIdentifier:(long long)arg2 ;
-(BSAnimationSettings *)hideHomeAffordanceAnimationSettings;
-(BSAnimationSettings *)unhideHomeAffordanceAnimationSettings;
-(id<UIViewSpringAnimationBehaviorDescribing>)settleHomeAffordanceAnimationBehaviorDescription;
-(SBScreenEdgePanGestureRecognizer *)screenEdgePanGesture;
@end

