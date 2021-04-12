/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>

@class SBHomeGestureParticipant, SBBarSwipeAffordanceView;

@interface SBBarSwipeAffordanceViewController : UIViewController <SBHomeGestureParticipantDelegate> {

	long long _homeGestureParticipantIdentifier;
	SBHomeGestureParticipant* _homeGestureParticipant;
	BOOL _wantsToBeActiveAffordance;
	BOOL _suppressAffordance;

}

@property (nonatomic,retain) SBBarSwipeAffordanceView * view; 
@property (assign,nonatomic) BOOL wantsToBeActiveAffordance;               //@synthesize wantsToBeActiveAffordance=_wantsToBeActiveAffordance - In the implementation block
@property (assign,nonatomic) BOOL suppressAffordance;                      //@synthesize suppressAffordance=_suppressAffordance - In the implementation block
-(void)loadView;
-(BOOL)_canShowWhileLocked;
-(void)_updateActiveState;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(void)_beginTryingToBecomeActiveAffordance;
-(void)_stopTryingToBecomeActiveAffordance;
-(BOOL)suppressAffordance;
-(id)initWithHomeGestureParticipantIdentifier:(long long)arg1 ;
-(void)setWantsToBeActiveAffordance:(BOOL)arg1 ;
-(void)setSuppressAffordance:(BOOL)arg1 ;
-(BOOL)wantsToBeActiveAffordance;
@end

