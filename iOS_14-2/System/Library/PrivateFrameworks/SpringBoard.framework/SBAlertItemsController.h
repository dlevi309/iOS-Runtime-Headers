/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	id<BSInvalidatable> _stateCaptureBlock;
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
-(void)_processAlertItemQueuesAnimated:(BOOL)arg1 ;
-(id)succinctDescription;
-(void)addObserver:(id)arg1 ;
-(id)visibleAlertItem;
-(void)_activeCallStateDidChange:(id)arg1 ;
-(void)_deactivateAlertItem:(id)arg1 reason:(int)arg2 animated:(BOOL)arg3 ;
-(void)_clearAllQueuedAlertItems;
-(BOOL)deactivateAlertItemsOfClass:(Class)arg1 reason:(int)arg2 animated:(BOOL)arg3 ;
-(id)_systemModalAlertPresenter;
-(void)convertLockedAlertsToUnlockedAlerts;
-(id)init;
-(void)_performBatchActions:(/*^block*/id)arg1 animated:(BOOL)arg2 processQueue:(BOOL)arg3 ;
-(void)_notifyObservers:(/*^block*/id)arg1 ;
-(BOOL)canDeactivateAlertForMenuClickOrSystemGesture;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setLockScreenModalAlertItemPresenter:(id<SBAlertItemPresenter><SBLockScreenActionProvider>)arg1 ;
-(void)_reallyDeactivateAlertItem:(id)arg1 forReason:(int)arg2 deactivateBlock:(/*^block*/id)arg3 ;
-(id<SBAlertItemPresenter>)lockScreenNotificationsAlertItemPresenter;
-(BOOL)_isAlertItemPresentable:(id)arg1 outReasonsNotPresentable:(id*)arg2 ;
-(void)setLockScreenNotificationsAlertItemPresenter:(id<SBAlertItemPresenter>)arg1 ;
-(BOOL)hasAlerts;
-(void)_deactivateAlertItem:(id)arg1 reason:(int)arg2 animated:(BOOL)arg3 alertDismissCompletion:(/*^block*/id)arg4 ;
-(void)captureSuppressionAssertion:(id)arg1 reason:(id)arg2 ;
-(id<SBAlertItemPresenter>)unlockedAlertItemPresenter;
-(NSString *)description;
-(id)_initWithUserSessionController:(id)arg1 ;
-(id)_presentationForAlertItem:(id)arg1 ;
-(BOOL)hasAlertOfClass:(Class)arg1 ;
-(BOOL)_hasPresentationForPresenter:(id)arg1 ;
-(BOOL)deactivateAlertForMenuClickOrSystemGestureWithAnimation:(BOOL)arg1 ;
-(void)_processAlertItemsFromQueue:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_shouldPendAlertItem:(id)arg1 outReasonsPended:(id*)arg2 ;
-(void)noteVolumeOrLockPressedOverLockedAlerts;
-(id)alertItemsOfClass:(Class)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_updateActiveDestinations;
-(void)deactivateAlertItem:(id)arg1 ;
-(void)_enumerateWithDirection:(unsigned long long)arg1 presentationsWithType:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)convertUnlockedAlertsToLockedAlerts;
-(BOOL)hasVisibleSuperModalAlert;
-(void)_enumeratePresentationsWithType:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)moveActiveUnlockedAlertsToPendingWithAnimation:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)hasVisibleAlert;
-(void)activatePendedAlertsIfNecessary;
-(void)activateAlertItem:(id)arg1 ;
-(void)activateAlertItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)_presenterForAlertItem:(id)arg1 ;
-(void)_dismissAlertItem:(id)arg1 fromPresenter:(id)arg2 forReason:(int)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_hasActivePresentationsThatPresentModally;
-(void)deactivateAlertItem:(id)arg1 reason:(int)arg2 ;
-(id)_presentedAlertItemForPresenter:(id)arg1 ;
-(void)_presentAlertItem:(id)arg1 withPresenter:(id)arg2 animated:(BOOL)arg3 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)_hasVisibleModalAlertOfType:(unsigned long long)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)_setSystemModalAlertPresenter:(id)arg1 ;
-(void)_buddyDidExit;
-(id)_activePresenterForAlertItem:(id)arg1 ;
-(BOOL)hasVisibleModalAlert;
-(void)setUnlockedAlertItemPresenter:(id<SBAlertItemPresenter>)arg1 ;
-(BOOL)hasLockScreenModalAlert;
-(id<SBAlertItemPresenter><SBLockScreenActionProvider>)lockScreenModalAlertItemPresenter;
-(void)setInUILockedMode:(BOOL)arg1 ;
-(BOOL)deactivateAlertItemsOfClass:(Class)arg1 reason:(int)arg2 ;
-(void)setForceAlertsToPend:(BOOL)arg1 forReason:(id)arg2 ;
-(void)dealloc;
-(void)deactivateAlertItem:(id)arg1 reason:(int)arg2 animated:(BOOL)arg3 ;
-(BOOL)deactivateAlertItemsOfClass:(Class)arg1 ;
@end

