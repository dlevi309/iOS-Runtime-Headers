/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/_SBAlertControllerDelegate.h>
#import <libobjc.A.dylib/SBModalViewControllerStackDelegate.h>
#import <UIKit/UIAlertControllerCoordinatedActionPerforming.h>
#import <libobjc.A.dylib/SBBarSwipeAffordanceObserver.h>
#import <libobjc.A.dylib/SBBarSwipeAffordanceDelegate.h>
#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>
#import <libobjc.A.dylib/SBHomeGrabberPointerClickDelegate.h>
#import <libobjc.A.dylib/SBReachabilityObserver.h>

@protocol SBFLockOutStatusProvider;
@class SBSystemGestureManager, SBHomeGestureParticipant, SBHomeGestureArbiter, SBReachabilityManager, SBAlertLayoutPresentationVerifier, SBBarSwipeAffordanceView, SBModalViewControllerStack, SBFWindow, SBAlertItem, NSString;

@interface SBSharedModalAlertItemPresenter : NSObject <_SBAlertControllerDelegate, SBModalViewControllerStackDelegate, UIAlertControllerCoordinatedActionPerforming, SBBarSwipeAffordanceObserver, SBBarSwipeAffordanceDelegate, SBHomeGestureParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBReachabilityObserver> {

	id<SBFLockOutStatusProvider> _lockOutProvider;
	SBSystemGestureManager* _systemGestureManager;
	SBHomeGestureParticipant* _homeGestureParticipant;
	SBHomeGestureArbiter* _homeGestureArbiter;
	SBReachabilityManager* _reachabilityManager;
	SBAlertLayoutPresentationVerifier* _alertLayoutPresentationVerifier;
	SBBarSwipeAffordanceView* _barSwipeView;
	SBModalViewControllerStack* _modalViewControllerStack;
	SBFWindow* _window;

}

@property (setter=_setModalViewControllerStack:,getter=_modalViewControllerStack,nonatomic,retain) SBModalViewControllerStack * modalViewControllerStack;              //@synthesize modalViewControllerStack=_modalViewControllerStack - In the implementation block
@property (nonatomic,readonly) SBAlertItem * currentlyPresentedAlertItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)modalViewControllerStack:(id)arg1 didPresentViewController:(id)arg2 ;
-(void)handleReachabilityYOffsetDidChange;
-(void)dismissAlertItem:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)alertControllerDidDisappear:(id)arg1 ;
-(void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg1 ;
-(id)initWithLockOutProvider:(id)arg1 systemGestureManager:(id)arg2 homeGestureArbiter:(id)arg3 reachabilityManager:(id)arg4 alertLayoutPresentationVerifier:(id)arg5 enableGestures:(BOOL)arg6 ;
-(unsigned long long)barSwipeAffordanceView:(id)arg1 systemGestureTypeForType:(long long)arg2 ;
-(void)modalViewControllerStack:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)modalViewControllerStack:(id)arg1 didDismissViewController:(id)arg2 ;
-(void)_updateBarSwipeViewWithAlertController:(id)arg1 ;
-(void)_updateHomeGestureParticipantWithItemCountAdjustment:(long long)arg1 ;
-(void)presentAlertItem:(id)arg1 isLocked:(BOOL)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(void)modalViewControllerStack:(id)arg1 willDismissViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)_modalViewControllerStack;
-(void)homeGrabberViewDidReceiveClick:(id)arg1 ;
-(SBAlertItem *)currentlyPresentedAlertItem;
-(void)_performActionForAlertController:(id)arg1 invokeActionBlock:(/*^block*/id)arg2 dismissControllerBlock:(/*^block*/id)arg3 ;
-(void)_setModalViewControllerStack:(id)arg1 ;
-(void)dealloc;
-(id)initWithLockOutProvider:(id)arg1 systemGestureManager:(id)arg2 homeGestureArbiter:(id)arg3 reachabilityManager:(id)arg4 alertLayoutPresentationVerifier:(id)arg5 ;
@end

