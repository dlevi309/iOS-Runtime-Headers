/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NCNotificationMasterListDelegate.h>
#import <libobjc.A.dylib/NCNotificationManagementViewPresenterDelegate.h>
#import <libobjc.A.dylib/NCLegibilitySettingsAdjusting.h>

@protocol NCNotificationStructuredListViewControllerDelegate, NCNotificationListCoalescingControlsHandler;
@class NCNotificationMasterList, NCNotificationListView, NCNotificationListTouchEaterManager, NCNotificationManagementViewPresenter, NCNotificationRequest, NCNotificationViewController, NCNotificationListSectionHeaderView, NSHashTable, UIScrollView, NSString, UIPanGestureRecognizer;

@interface NCNotificationStructuredListViewController : UIViewController <NCNotificationMasterListDelegate, NCNotificationManagementViewPresenterDelegate, NCLegibilitySettingsAdjusting> {

	BOOL _deviceAuthenticated;
	BOOL _backgroundBlurred;
	id<NCNotificationStructuredListViewControllerDelegate> _delegate;
	double _itemSpacing;
	NCNotificationMasterList* _masterList;
	NCNotificationListView* _masterListView;
	NCNotificationListTouchEaterManager* _touchEaterManager;
	NCNotificationManagementViewPresenter* _managementViewPresenter;
	NCNotificationRequest* _notificationRequestRemovedWhilePresentingLongLook;
	NCNotificationViewController* _notificationViewControllerPresentingLongLook;
	NCNotificationListSectionHeaderView* _headerViewInForceTouchState;
	id<NCNotificationListCoalescingControlsHandler> _coalescingControlsHandlerInForceTouchState;
	NSHashTable* _observers;
	UIEdgeInsets _insetMargins;

}

@property (nonatomic,retain) NCNotificationMasterList * masterList;                                                                          //@synthesize masterList=_masterList - In the implementation block
@property (nonatomic,retain) NCNotificationListView * masterListView;                                                                        //@synthesize masterListView=_masterListView - In the implementation block
@property (nonatomic,retain) NCNotificationListTouchEaterManager * touchEaterManager;                                                        //@synthesize touchEaterManager=_touchEaterManager - In the implementation block
@property (nonatomic,retain) NCNotificationManagementViewPresenter * managementViewPresenter;                                                //@synthesize managementViewPresenter=_managementViewPresenter - In the implementation block
@property (assign,nonatomic) BOOL backgroundBlurred;                                                                                         //@synthesize backgroundBlurred=_backgroundBlurred - In the implementation block
@property (nonatomic,retain) NCNotificationRequest * notificationRequestRemovedWhilePresentingLongLook;                                      //@synthesize notificationRequestRemovedWhilePresentingLongLook=_notificationRequestRemovedWhilePresentingLongLook - In the implementation block
@property (assign,nonatomic,__weak) NCNotificationViewController * notificationViewControllerPresentingLongLook;                             //@synthesize notificationViewControllerPresentingLongLook=_notificationViewControllerPresentingLongLook - In the implementation block
@property (assign,nonatomic,__weak) NCNotificationListSectionHeaderView * headerViewInForceTouchState;                                       //@synthesize headerViewInForceTouchState=_headerViewInForceTouchState - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationListCoalescingControlsHandler> coalescingControlsHandlerInForceTouchState;              //@synthesize coalescingControlsHandlerInForceTouchState=_coalescingControlsHandlerInForceTouchState - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                                                                        //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationStructuredListViewControllerDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isDeviceAuthenticated,nonatomic) BOOL deviceAuthenticated;                                                          //@synthesize deviceAuthenticated=_deviceAuthenticated - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,readonly) NSString * backgroundGroupNameBase; 
@property (nonatomic,readonly) CGSize effectiveContentSize; 
@property (nonatomic,readonly) UIEdgeInsets insetMargins;                                                                                    //@synthesize insetMargins=_insetMargins - In the implementation block
@property (nonatomic,readonly) double itemSpacing;                                                                                           //@synthesize itemSpacing=_itemSpacing - In the implementation block
@property (nonatomic,readonly) BOOL hasVisibleContent; 
@property (getter=isPresentingNotificationInLongLook,nonatomic,readonly) BOOL presentingNotificationInLongLook; 
@property (assign,getter=isHomeAffordanceVisible,nonatomic) BOOL homeAffordanceVisible; 
@property (assign,nonatomic,__weak) UIPanGestureRecognizer * homeAffordancePanGesture; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<NCNotificationStructuredListViewControllerDelegate>)delegate;
-(void)setDelegate:(id<NCNotificationStructuredListViewControllerDelegate>)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(CGSize)effectiveContentSize;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(double)itemSpacing;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)_didChangeDeepestUnambiguousResponder;
-(UIScrollView *)scrollView;
-(id)_logDescription;
-(void)setBackgroundBlurred:(BOOL)arg1 ;
-(BOOL)isHomeAffordanceVisible;
-(void)setHomeAffordanceVisible:(BOOL)arg1 ;
-(void)setHomeAffordancePanGesture:(UIPanGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)homeAffordancePanGesture;
-(void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2 ;
-(BOOL)isPresentingNotificationInLongLook;
-(BOOL)interpretsViewAsContent:(id)arg1 ;
-(void)setDeviceAuthenticated:(BOOL)arg1 ;
-(void)addContentObserver:(id)arg1 ;
-(NSString *)backgroundGroupNameBase;
-(void)toggleMissedSectionActive:(BOOL)arg1 reason:(unsigned long long)arg2 ;
-(BOOL)dismissModalFullScreenAnimated:(BOOL)arg1 ;
-(void)insertNotificationRequest:(id)arg1 ;
-(void)modifyNotificationRequest:(id)arg1 ;
-(void)removeNotificationRequest:(id)arg1 ;
-(UIEdgeInsets)insetMargins;
-(BOOL)hasVisibleContent;
-(BOOL)isContentExtensionVisible:(id)arg1 ;
-(void)revealNotificationHistory:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)migrateNotifications;
-(void)listViewControllerPresentedByUserAction;
-(id)newCaptureOnlyMaterialViewController;
-(void)toggleFilteringForSectionIdentifier:(id)arg1 shouldFilter:(BOOL)arg2 ;
-(void)adjustForLegibilitySettingsChange:(id)arg1 ;
-(id)notificationRequestWithNotificationIdentifier:(id)arg1 sectionIdentifier:(id)arg2 ;
-(void)expandGroupForNotificationRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)collapseGroupForNotificationRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)notificationListComponent:(id)arg1 requestsExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(BOOL)arg4 withParameters:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)notificationListComponent:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)notificationListComponent:(id)arg1 willDismissLongLookForCancelActionForViewController:(id)arg2 ;
-(void)notificationListComponentRequestsClearingAllNotificationRequests:(id)arg1 ;
-(void)notificationListComponent:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2 ;
-(void)notificationListComponent:(id)arg1 requestsClearingNotificationRequests:(id)arg2 ;
-(id)notificationListComponent:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2 ;
-(id)legibilitySettingsForNotificationListComponent:(id)arg1 ;
-(BOOL)notificationListComponentShouldHintForDefaultAction:(id)arg1 ;
-(BOOL)notificationListComponent:(id)arg1 shouldAllowInteractionsForNotificationRequest:(id)arg2 ;
-(void)notificationListComponent:(id)arg1 requestsAuthenticationAndPerformBlock:(/*^block*/id)arg2 ;
-(double)insetHorizontalMarginForNotificationListComponent:(id)arg1 ;
-(void)notificationListComponent:(id)arg1 shouldFinishLongLookTransitionForNotificationRequest:(id)arg2 trigger:(long long)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)notificationListComponent:(id)arg1 isPresentingLongLookForViewController:(id)arg2 ;
-(void)notificationListComponent:(id)arg1 requestsPresentingManagementViewForNotificationRequest:(id)arg2 managementViewType:(unsigned long long)arg3 withPresentingView:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)notificationListComponentDidSignificantUserInteraction:(id)arg1 ;
-(void)notificationListComponent:(id)arg1 didBeginUserInteractionWithNotificationViewController:(id)arg2 ;
-(void)notificationListComponent:(id)arg1 didEndUserInteractionWithNotificationViewController:(id)arg2 ;
-(void)notificationListComponent:(id)arg1 didAddNotificationViewController:(id)arg2 ;
-(void)notificationListComponent:(id)arg1 didRemoveNotificationViewController:(id)arg2 ;
-(id)containerViewForPreviewInteractionPresentedContentForNotificationListComponent:(id)arg1 ;
-(BOOL)notificationListComponentShouldAllowLongPressGesture:(id)arg1 ;
-(void)notificationListComponent:(id)arg1 didTransitionActionsForNotificationCell:(id)arg2 revealed:(BOOL)arg3 ;
-(void)notificationListComponent:(id)arg1 didTransitionCoalescingControlsHandler:(id)arg2 toClearState:(BOOL)arg3 ;
-(void)notificationListComponent:(id)arg1 didTransitionSectionHeaderView:(id)arg2 toClearState:(BOOL)arg3 ;
-(void)notificationListComponent:(id)arg1 didPresentCoalescingControlsHandler:(id)arg2 inForceTouchState:(BOOL)arg3 ;
-(void)notificationListComponent:(id)arg1 didPresentSectionHeaderView:(id)arg2 inForceTouchState:(BOOL)arg3 ;
-(BOOL)notificationListComponent:(id)arg1 isClockNotificationRequest:(id)arg2 ;
-(id)notificationUsageTrackingStateForNotificationListComponent:(id)arg1 ;
-(id)notificationListComponent:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2 ;
-(id)hideHomeAffordanceAnimationSettingsForNotificationListComponent:(id)arg1 ;
-(id)unhideHomeAffordanceAnimationSettingsForNotificationListComponent:(id)arg1 ;
-(id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationListComponent:(id)arg1 ;
-(id)backgroundGroupNameBaseForNotificationListComponent:(id)arg1 ;
-(void)notificationListComponentChangedContent:(id)arg1 ;
-(NCNotificationListView *)masterListView;
-(BOOL)notificationMasterList:(id)arg1 shouldFilterNotificationRequest:(id)arg2 ;
-(BOOL)notificationMasterListShouldAllowNotificationHistoryReveal:(id)arg1 ;
-(void)notificationMasterListDidScrollToRevealNotificationHistory:(id)arg1 ;
-(void)notificationMasterList:(id)arg1 scrollViewWillBeginDragging:(id)arg2 ;
-(void)notificationMasterList:(id)arg1 scrollViewDidScroll:(id)arg2 ;
-(void)notificationMasterList:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(CGPoint)arg3 targetContentOffset:(inout CGPoint*)arg4 ;
-(BOOL)isDeviceAuthenticated;
-(BOOL)notificationMasterList:(id)arg1 shouldDelayDeliveryOfNotificationRequest:(id)arg2 ;
-(void)notificationMasterList:(id)arg1 requestsClearingFromIncomingSectionNotificationRequests:(id)arg2 ;
-(void)setMasterListView:(NCNotificationListView *)arg1 ;
-(id)_sectionSettingsForSectionIdentifier:(id)arg1 ;
-(void)notificationManagementViewPresenterWillPresentManagementView:(id)arg1 ;
-(void)notificationManagementViewPresenterDidDismissManagementView:(id)arg1 ;
-(id)notificationManagementViewPresenter:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2 ;
-(void)notificationManagementViewPresenter:(id)arg1 setAllowsNotifications:(BOOL)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 ;
-(void)notificationManagementViewPresenter:(id)arg1 setDeliverQuietly:(BOOL)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 ;
-(void)notificationManagementViewPresenter:(id)arg1 setAllowsCriticalAlerts:(BOOL)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 ;
-(NCNotificationManagementViewPresenter *)managementViewPresenter;
-(void)_resetCellWithRevealedActions;
-(BOOL)_forwarNotificationRequestToLongLookIfNecessary:(id)arg1 ;
-(NCNotificationMasterList *)masterList;
-(NCNotificationViewController *)notificationViewControllerPresentingLongLook;
-(void)setNotificationRequestRemovedWhilePresentingLongLook:(NCNotificationRequest *)arg1 ;
-(NCNotificationListSectionHeaderView *)headerViewInForceTouchState;
-(id<NCNotificationListCoalescingControlsHandler>)coalescingControlsHandlerInForceTouchState;
-(void)notifyContentObservers;
-(void)setNotificationViewControllerPresentingLongLook:(NCNotificationViewController *)arg1 ;
-(NCNotificationRequest *)notificationRequestRemovedWhilePresentingLongLook;
-(NCNotificationListTouchEaterManager *)touchEaterManager;
-(void)_requestAuthenticationAndPerformBlock:(/*^block*/id)arg1 ;
-(void)removeContentObserver:(id)arg1 ;
-(void)setMasterList:(NCNotificationMasterList *)arg1 ;
-(void)setTouchEaterManager:(NCNotificationListTouchEaterManager *)arg1 ;
-(void)setManagementViewPresenter:(NCNotificationManagementViewPresenter *)arg1 ;
-(BOOL)backgroundBlurred;
-(void)setHeaderViewInForceTouchState:(NCNotificationListSectionHeaderView *)arg1 ;
-(void)setCoalescingControlsHandlerInForceTouchState:(id<NCNotificationListCoalescingControlsHandler>)arg1 ;
@end

