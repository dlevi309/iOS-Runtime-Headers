/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>

@protocol SBHomeGrabberPointerClickDelegate;
@class SBHomeGestureParticipant, SBBarSwipeAffordanceView, NSString;

@interface SBBarSwipeAffordanceViewController : UIViewController <SBHomeGestureParticipantDelegate> {

	long long _homeGestureParticipantIdentifier;
	BOOL _wantsToBeActiveAffordance;
	BOOL _suppressAffordance;
	SBHomeGestureParticipant* _homeGestureParticipant;
	id<SBHomeGrabberPointerClickDelegate> _pointerClickDelegate;

}

@property (nonatomic,retain) SBBarSwipeAffordanceView * view; 
@property (assign,nonatomic) BOOL wantsToBeActiveAffordance;                                                 //@synthesize wantsToBeActiveAffordance=_wantsToBeActiveAffordance - In the implementation block
@property (assign,nonatomic) BOOL suppressAffordance;                                                        //@synthesize suppressAffordance=_suppressAffordance - In the implementation block
@property (nonatomic,readonly) SBHomeGestureParticipant * homeGestureParticipant; 
@property (assign,nonatomic,__weak) id<SBHomeGrabberPointerClickDelegate> pointerClickDelegate;              //@synthesize pointerClickDelegate=_pointerClickDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBHomeGestureParticipant *)homeGestureParticipant;
-(void)setPointerClickDelegate:(id<SBHomeGrabberPointerClickDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)_updateActiveState;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(void)loadView;
-(id<SBHomeGrabberPointerClickDelegate>)pointerClickDelegate;
-(void)setWantsToBeActiveAffordance:(BOOL)arg1 ;
-(id)initWithHomeGestureParticipantIdentifier:(long long)arg1 ;
-(void)_beginTryingToBecomeActiveAffordance;
-(void)_stopTryingToBecomeActiveAffordance;
-(BOOL)suppressAffordance;
-(void)setSuppressAffordance:(BOOL)arg1 ;
-(BOOL)wantsToBeActiveAffordance;
@end

