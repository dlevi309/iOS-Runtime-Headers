/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol BSInvalidatable, SBAlertItemPresenterSBLockScreenActionProvider, SBAlertItemPresenter;
@class SBUserSessionController, SBAlertItemsObjectQueue, NSMutableSet, NSMutableOrderedSet, NSMapTable, NSHashTable, SBModalAlertPresenter, NSString;

@interface SBAlertItemsController : NSObject <BSDescriptionProviding> {

	SBUserSessionController* _userSessionController;
	SBAlertItemsObjectQueue* _alertItemsQueue;
	SBAlertItemsObjectQueue* _superModalItemsQueue;
	NSMutableSet* _pendedAlertsToReenqueuePostDismissal;
	NSMutableOrderedSet* _alertItemPresentations;
	NSMutableOrderedSet* _superModalAlertItemPresentations;
	NSMutableSet* _activePresenters;
	NSMutableSet* _forceAlertsToPendReasons;
	NSMapTable* _suppressionAssertionReasons;
	NSHashTable* _observers;
	BOOL _inUILockedMode;
	BOOL _isProcessingQueue;
	BOOL _delayProcessingQueue;
	BOOL _suppressAlertsForKeynote;
	id<BSInvalidatable> _systemModalAlertVisibleAssertion;
	SBModalAlertPresenter* _systemModalAlertPresenter;
	id<SBAlertItemPresenter><SBLockScreenActionProvider> _lockScreenModalAlertItemPresenter;
	id<SBAlertItemPresenter> _lockScreenNotificationsAlertItemPresenter;
	id<SBAlertItemPresenter> _unlockedAlertItemPresenter;

}

@property (setter=_setSystemModalAlertPresenter:,getter=_systemModalAlertPresenter,nonatomic,retain) SBModalAlertPresenter * systemModalAlertPresenter;              //@synthesize systemModalAlertPresenter=_systemModalAlertPresenter - In the implementation block
@property (nonatomic,retain) id<SBAlertItemPresenter><SBLockScreenActionProvider> lockScreenModalAlertItemPresenter;                                                 //@synthesize lockScreenModalAlertItemPresenter=_lockScreenModalAlertItemPresenter - In the implementation block
@property (nonatomic,retain) id<SBAlertItemPresenter> lockScreenNotificationsAlertItemPresenter;                                                                     //@synthesize lockScreenNotificationsAlertItemPresenter=_lockScreenNotificationsAlertItemPresenter - In the implementation block
@property (nonatomic,retain) id<SBAlertItemPresenter> unlockedAlertItemPresenter;                                                                                    //@synthesize unlockedAlertItemPresenter=_unlockedAlertItemPresenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)activateAlertItem:(id)arg1 ;
-(void)deactivateAlertItem:(id)arg1 reason:(int)arg2 ;
-(void)_notifyObservers:(/*^block*/id)arg1 ;
-(void)_setSystemModalAlertPresenter:(id)arg1 ;
-(void)setForceAlertsToPend:(BOOL)arg1 forReason:(id)arg2 ;
-(void)setLockScreenModalAlertItemPresenter:(id<SBAlertItemPresenter><SBLockScreenActionProvider>)arg1 ;
-(void)setUnlockedAlertItemPresenter:(id<SBAlertItemPresenter>)arg1 ;
-(BOOL)deactivateAlertItemsOfClass:(Class)arg1 ;
-(id)_systemModalAlertPresenter;
-(BOOL)hasAlerts;
-(BOOL)hasVisibleAlert;
-(BOOL)canDeactivateAlertForMenuClickOrSystemGesture;
-(BOOL)deactivateAlertForMenuClickOrSystemGestureWithAnimation:(BOOL)arg1 ;
-(void)deactivateAlertItem:(id)arg1 ;
-(void)moveActiveUnlockedAlertsToPendingWithAnimation:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)alertItemsOfClass:(Class)arg1 ;
-(void)noteVolumeOrLockPressedOverLockedAlerts;
-(BOOL)hasVisibleSuperModalAlert;
-(void)captureSuppressionAssertion:(id)arg1 reason:(id)arg2 ;
-(id)visibleAlertItem;
-(void)deactivateAlertItem:(id)arg1 reason:(int)arg2 animated:(BOOL)arg3 ;
-(void)activateAlertItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)_initWithUserSessionController:(id)arg1 ;
-(void)_buddyDidExit;
-(void)_activeCallStateDidChange:(id)arg1 ;
-(void)_updateActiveDestinations;
-(void)_enumerateWithDirection:(unsigned long long)arg1 presentationsWithType:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_enumeratePresentationsWithType:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_performBatchActions:(/*^block*/id)arg1 animated:(BOOL)arg2 processQueue:(BOOL)arg3 ;
-(void)_processAlertItemQueuesAnimated:(BOOL)arg1 ;
-(void)_deactivateAlertItem:(id)arg1 reason:(int)arg2 animated:(BOOL)arg3 ;
-(BOOL)hasAlertOfClass:(Class)arg1 ;
-(void)_processAlertItemsFromQueue:(id)arg1 animated:(BOOL)arg2 ;
-(id)_presentationForAlertItem:(id)arg1 ;
-(BOOL)_isAlertItemPresentable:(id)arg1 outReasonsNotPresentable:(id*)arg2 ;
-(BOOL)_shouldPendAlertItem:(id)arg1 outReasonsPended:(id*)arg2 ;
-(id)_presenterForAlertItem:(id)arg1 ;
-(void)_presentAlertItem:(id)arg1 withPresenter:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)_hasPresentationForPresenter:(id)arg1 ;
-(id<SBAlertItemPresenter><SBLockScreenActionProvider>)lockScreenModalAlertItemPresenter;
-(id<SBAlertItemPresenter>)lockScreenNotificationsAlertItemPresenter;
-(id<SBAlertItemPresenter>)unlockedAlertItemPresenter;
-(id)_presentedAlertItemForPresenter:(id)arg1 ;
-(BOOL)_hasActivePresentationsThatPresentModally;
-(void)_deactivateAlertItem:(id)arg1 reason:(int)arg2 animated:(BOOL)arg3 alertDismissCompletion:(/*^block*/id)arg4 ;
-(void)_reallyDeactivateAlertItem:(id)arg1 forReason:(int)arg2 deactivateBlock:(/*^block*/id)arg3 ;
-(void)_dismissAlertItem:(id)arg1 fromPresenter:(id)arg2 forReason:(int)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)deactivateAlertItemsOfClass:(Class)arg1 reason:(int)arg2 ;
-(BOOL)deactivateAlertItemsOfClass:(Class)arg1 reason:(int)arg2 animated:(BOOL)arg3 ;
-(BOOL)_hasVisibleModalAlertOfType:(unsigned long long)arg1 ;
-(void)activatePendedAlertsIfNecessary;
-(void)setLockScreenNotificationsAlertItemPresenter:(id<SBAlertItemPresenter>)arg1 ;
-(void)setInUILockedMode:(BOOL)arg1 ;
-(void)convertUnlockedAlertsToLockedAlerts;
-(void)convertLockedAlertsToUnlockedAlerts;
-(void)_clearAllQueuedAlertItems;
-(id)_activePresenterForAlertItem:(id)arg1 ;
-(BOOL)hasLockScreenModalAlert;
-(BOOL)hasVisibleModalAlert;
@end

