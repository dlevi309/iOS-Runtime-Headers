/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <libobjc.A.dylib/NCNotificationListViewDataSource.h>
#import <libobjc.A.dylib/NCNotificationViewControllerDelegatePrivate.h>
#import <libobjc.A.dylib/NCNotificationViewControllerObserving.h>
#import <libobjc.A.dylib/NCNotificationListCellDelegate.h>
#import <libobjc.A.dylib/NCNotificationListCoalescingControlsHandlerDelegate.h>
#import <libobjc.A.dylib/NCNotificationManagementContentProviderDelegate.h>
#import <libobjc.A.dylib/NCNotificationListComponent.h>

@protocol NCNotificationGroupListDelegate;
@class NSString, NCNotificationListCache, NCNotificationSectionSettings, NCNotificationListView, NSMutableArray, NSMutableDictionary, NCNotificationListCoalescingHeaderCell, NCNotificationListCoalescingControlsCell, NCNotificationRequest, NCNotificationSummaryBuilder, _UILegibilitySettings, NCNotificationListCell, NSArray;

@interface NCNotificationGroupList : NSObject <NCNotificationListViewDataSource, NCNotificationViewControllerDelegatePrivate, NCNotificationViewControllerObserving, NCNotificationListCellDelegate, NCNotificationListCoalescingControlsHandlerDelegate, NCNotificationManagementContentProviderDelegate, NCNotificationListComponent> {

	BOOL _deviceAuthenticated;
	BOOL _adjustsFontForContentSizeCategory;
	BOOL _grouped;
	BOOL _clockNotificationGroup;
	BOOL _longLookDismissalFinalFrameCalculatedWithoutWindow;
	NSString* _logDescription;
	id<NCNotificationGroupListDelegate> _delegate;
	NCNotificationListCache* _notificationListCache;
	NSString* _sectionIdentifier;
	NSString* _threadIdentifier;
	NCNotificationSectionSettings* _notificationSectionSettings;
	double _horizontalMarginInset;
	NCNotificationListView* _groupListView;
	NSMutableArray* _orderedRequests;
	NSMutableDictionary* _contentProviders;
	NSMutableDictionary* _clockSnoozeAlarmContentProviders;
	NCNotificationListCoalescingHeaderCell* _headerView;
	NCNotificationListCoalescingControlsCell* _footerView;
	double _headerViewHeight;
	double _footerViewHeight;
	NCNotificationRequest* _leadingNotificationRequest;
	NCNotificationSummaryBuilder* _summaryBuilder;
	_UILegibilitySettings* _legibilitySettings;
	NSString* _backgroundGroupNameBase;
	NCNotificationListCell* _cellRecycledWhilePresentingLongLook;

}

@property (nonatomic,retain) NCNotificationListView * groupListView;                                    //@synthesize groupListView=_groupListView - In the implementation block
@property (nonatomic,retain) NSMutableArray * orderedRequests;                                          //@synthesize orderedRequests=_orderedRequests - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * contentProviders;                                    //@synthesize contentProviders=_contentProviders - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * clockSnoozeAlarmContentProviders;                    //@synthesize clockSnoozeAlarmContentProviders=_clockSnoozeAlarmContentProviders - In the implementation block
@property (nonatomic,retain) NCNotificationListCoalescingHeaderCell * headerView;                       //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) NCNotificationListCoalescingControlsCell * footerView;                     //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic) double headerViewHeight;                                                   //@synthesize headerViewHeight=_headerViewHeight - In the implementation block
@property (assign,nonatomic) double footerViewHeight;                                                   //@synthesize footerViewHeight=_footerViewHeight - In the implementation block
@property (nonatomic,retain) NCNotificationRequest * leadingNotificationRequest;                        //@synthesize leadingNotificationRequest=_leadingNotificationRequest - In the implementation block
@property (nonatomic,retain) NCNotificationSummaryBuilder * summaryBuilder;                             //@synthesize summaryBuilder=_summaryBuilder - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,copy) NSString * backgroundGroupNameBase;                                          //@synthesize backgroundGroupNameBase=_backgroundGroupNameBase - In the implementation block
@property (nonatomic,retain) NCNotificationListCell * cellRecycledWhilePresentingLongLook;              //@synthesize cellRecycledWhilePresentingLongLook=_cellRecycledWhilePresentingLongLook - In the implementation block
@property (assign,nonatomic) BOOL longLookDismissalFinalFrameCalculatedWithoutWindow;                   //@synthesize longLookDismissalFinalFrameCalculatedWithoutWindow=_longLookDismissalFinalFrameCalculatedWithoutWindow - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationGroupListDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NCNotificationListCache * notificationListCache;                           //@synthesize notificationListCache=_notificationListCache - In the implementation block
@property (nonatomic,readonly) NSString * sectionIdentifier;                                            //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * threadIdentifier;                                             //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * allNotificationRequests; 
@property (nonatomic,readonly) NSArray * persistentNotificationRequests; 
@property (nonatomic,readonly) NSArray * criticalAlerts; 
@property (assign,getter=isGrouped,nonatomic) BOOL grouped;                                             //@synthesize grouped=_grouped - In the implementation block
@property (nonatomic,readonly) BOOL containsNonPersistentNotificationRequests; 
@property (nonatomic,retain) NCNotificationSectionSettings * notificationSectionSettings;               //@synthesize notificationSectionSettings=_notificationSectionSettings - In the implementation block
@property (assign,nonatomic) double horizontalMarginInset;                                              //@synthesize horizontalMarginInset=_horizontalMarginInset - In the implementation block
@property (assign,getter=isClockNotificationGroup,nonatomic) BOOL clockNotificationGroup;               //@synthesize clockNotificationGroup=_clockNotificationGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long notificationCount; 
@property (assign,getter=isDeviceAuthenticated,nonatomic) BOOL deviceAuthenticated;                     //@synthesize deviceAuthenticated=_deviceAuthenticated - In the implementation block
@property (nonatomic,copy) NSString * logDescription;                                                   //@synthesize logDescription=_logDescription - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                    //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
-(void)reloadNotificationRequest:(id)arg1 ;
-(BOOL)isGrouped;
-(BOOL)isDeviceAuthenticated;
-(NCNotificationListCoalescingControlsCell *)footerView;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(void)setSummaryBuilder:(NCNotificationSummaryBuilder *)arg1 ;
-(NSString *)threadIdentifier;
-(void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2 ;
-(id)unhideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg1 ;
-(void)notificationViewControllerWillBeginUserInteraction:(id)arg1 ;
-(void)setLogDescription:(NSString *)arg1 ;
-(id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationViewController:(id)arg1 ;
-(void)notificationsLoadedForSectionIdentifier:(id)arg1 ;
-(id)notificationListView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(long long)compare:(id)arg1 ;
-(void)insertNotificationRequest:(id)arg1 ;
-(NCNotificationListCache *)notificationListCache;
-(NSString *)sectionIdentifier;
-(void)setHeaderView:(NCNotificationListCoalescingHeaderCell *)arg1 ;
-(void)setDeviceAuthenticated:(BOOL)arg1 ;
-(unsigned long long)notificationCount;
-(BOOL)notificationViewControllerShouldAllowClickPresentationInteraction:(id)arg1 ;
-(void)setNotificationListCache:(NCNotificationListCache *)arg1 ;
-(NSString *)logDescription;
-(void)removeNotificationRequest:(id)arg1 ;
-(double)notificationListView:(id)arg1 heightForItemAtIndex:(unsigned long long)arg2 ;
-(BOOL)notificationListViewIsGroup:(id)arg1 ;
-(void)notificationViewController:(id)arg1 executeAction:(id)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(void)notificationViewController:(id)arg1 shouldFinishLongLookTransitionForTrigger:(long long)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(NSArray *)allNotificationRequests;
-(void)modifyNotificationRequest:(id)arg1 ;
-(id<NCNotificationGroupListDelegate>)delegate;
-(void)adjustForLegibilitySettingsChange:(id)arg1 ;
-(id)notificationUsageTrackingStateForNotificationViewController:(id)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(unsigned long long)count;
-(NSString *)backgroundGroupNameBase;
-(void)longLookWillPresentForNotificationViewController:(id)arg1 ;
-(void)notificationViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setDelegate:(id<NCNotificationGroupListDelegate>)arg1 ;
-(double)headerViewHeight;
-(void)longLookWillDismissForNotificationViewController:(id)arg1 ;
-(void)notificationViewControllerDidEndUserInteraction:(id)arg1 ;
-(void)notificationViewControllerWillDismissForCancelAction:(id)arg1 ;
-(void)setOrderedRequests:(NSMutableArray *)arg1 ;
-(NSMutableArray *)orderedRequests;
-(id)headerViewForNotificationList:(id)arg1 ;
-(void)setHeaderViewHeight:(double)arg1 ;
-(void)recycleView:(id)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)longLookDidDismissForNotificationViewController:(id)arg1 ;
-(id)notificationViewController:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2 ;
-(BOOL)notificationViewControllerShouldInterpretTapAsDefaultAction:(id)arg1 ;
-(void)setFooterView:(NCNotificationListCoalescingControlsCell *)arg1 ;
-(NCNotificationListCoalescingHeaderCell *)headerView;
-(NCNotificationListView *)groupListView;
-(void)setGroupListView:(NCNotificationListView *)arg1 ;
-(NCNotificationSummaryBuilder *)summaryBuilder;
-(id)notificationViewController:(id)arg1 auxiliaryOptionsContentProviderForNotificationRequest:(id)arg2 withLongLook:(BOOL)arg3 ;
-(id)notificationViewController:(id)arg1 staticContentProviderForNotificationRequest:(id)arg2 ;
-(void)notificationManagementContentProvider:(id)arg1 requestsPresentingNotificationManagementViewType:(unsigned long long)arg2 forNotificationRequest:(id)arg3 withPresentingView:(id)arg4 ;
-(id)hideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg1 ;
-(unsigned long long)notificationListViewNumberOfItems:(id)arg1 ;
-(double)headerViewHeightForNotificationList:(id)arg1 ;
-(void)setGrouped:(BOOL)arg1 ;
-(void)setFooterViewHeight:(double)arg1 ;
-(double)footerViewHeight;
-(long long)notificationViewControllerDateFormatStyle:(id)arg1 ;
-(BOOL)containsNonPersistentNotificationRequests;
-(id)footerViewForNotificationList:(id)arg1 ;
-(double)footerViewHeightForNotificationList:(id)arg1 ;
-(NSArray *)persistentNotificationRequests;
-(BOOL)matchesGroup:(id)arg1 ;
-(void)mergeNotificationRequests:(id)arg1 ;
-(void)setGrouped:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isLeadingNotificationRequest:(id)arg1 ;
-(id)initWithSectionIdentifier:(id)arg1 threadIdentifier:(id)arg2 ;
-(void)setNotificationSectionSettings:(NCNotificationSectionSettings *)arg1 ;
-(void)setHorizontalMarginInset:(double)arg1 ;
-(void)setClockNotificationGroup:(BOOL)arg1 ;
-(NSArray *)criticalAlerts;
-(BOOL)isGroupForNotificationRequest:(id)arg1 ;
-(void)notificationListCoalescingControlsHandlerRequestsClearingNotifications:(id)arg1 ;
-(id)containerViewForCoalescingControlsHandlerPreviewInteractionPresentedContent:(id)arg1 ;
-(void)notificationListCoalescingControlsHandlerRequestsClearingAllNotifications:(id)arg1 ;
-(void)notificationListCoalescingControlsHandlerRequestsRestackingNotifications:(id)arg1 ;
-(void)notificationListCoalescingControlsHandler:(id)arg1 didTransitionToClearState:(BOOL)arg2 ;
-(void)notificationListCoalescingControlsHandlerDidBeginPreviewInteraction:(id)arg1 ;
-(void)notificationListCoalescingControlsHandlerDidPresentPreviewInteractionPresentedContent:(id)arg1 ;
-(void)notificationListCoalescingControlsHandlerDidDismissPreviewInteractionPresentedContent:(id)arg1 ;
-(void)willTearDownNotificationListCell:(id)arg1 ;
-(void)notificationListCellDidHideCellActions:(id)arg1 resetCellScrollPosition:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)notificationListCellRequestsPresentingLongLook:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)notificationListCellRequestsPresentingManagementView:(id)arg1 withPresentingView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)notificationListCellRequestsDismissAction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)notificationListCellRequestsDefaultAction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)notificationListCellDidRevealCellActions:(id)arg1 ;
-(BOOL)notificationListCellShouldPanHorizontally:(id)arg1 ;
-(void)notificationListCellDidSignificantUserInteraction:(id)arg1 ;
-(void)notificationListCell:(id)arg1 didMoveToNewXPosition:(double)arg2 ;
-(id)notificationListCellRequestsSectionSettings:(id)arg1 sectionIdentifier:(id)arg2 ;
-(BOOL)notificationListCellShouldPerformClipping:(id)arg1 ;
-(NCNotificationSectionSettings *)notificationSectionSettings;
-(NCNotificationRequest *)leadingNotificationRequest;
-(long long)_compareNotificationRequest:(id)arg1 withNotificationRequest:(id)arg2 ;
-(unsigned long long)_existingIndexForNotificationRequest:(id)arg1 ;
-(unsigned long long)_insertionIndexForNotificationRequest:(id)arg1 ;
-(void)_updateSummaryTextForNewLeadingNotificationRequest:(id)arg1 oldLeadingNotificationRequest:(id)arg2 ;
-(void)_toggleGroupedState;
-(void)_scrollToTopIfNecessaryAndPerformBlock:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)contentProviders;
-(void)_reloadRecycledNotificationCellForRequest:(id)arg1 ;
-(BOOL)isClockNotificationGroup;
-(void)_invalidateSnoozeAlarmNotificationStaticContentProviderTimerForNotificationRequest:(id)arg1 ;
-(void)_reloadNotificationViewForNotificationRequest:(id)arg1 ;
-(double)_cachedHeightForNotificationRequest:(id)arg1 isLeadingNotificationRequest:(BOOL)arg2 ;
-(id)_cachedCellForNotificationRequest:(id)arg1 createNewIfNecessary:(BOOL)arg2 shouldConfigure:(BOOL)arg3 ;
-(double)horizontalMarginInset;
-(void)setCellRecycledWhilePresentingLongLook:(NCNotificationListCell *)arg1 ;
-(void)_hintSideSwipeForDefaultActionForNotificationRequest:(id)arg1 ;
-(BOOL)_shouldAllowInteractionWithNotificationViewController:(id)arg1 ;
-(id)_currentCellForNotificationRequest:(id)arg1 ;
-(id)_clockSnoozeAlarmNotificationStaticContentProviderForNotificationRequest:(id)arg1 viewController:(id)arg2 ;
-(void)_reloadNotificationCellAtIndex:(unsigned long long)arg1 ;
-(NCNotificationListCell *)cellRecycledWhilePresentingLongLook;
-(void)_performDefaultActionForNotificationRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_clearNotificationRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_reloadRecycledGroupedNotificationCells;
-(BOOL)_isContentRevealedForNotificationRequest:(id)arg1 ;
-(void)_performAction:(id)arg1 forNotificationRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)clockSnoozeAlarmContentProviders;
-(unsigned long long)_lockScreenPriorityForNotificationRequest:(id)arg1 ;
-(unsigned long long)_lockScreenPersistenceForNotificationRequest:(id)arg1 ;
-(BOOL)notificationViewControllerShouldAllowLongPressGesture:(id)arg1 ;
-(CGRect)notificationViewController:(id)arg1 initialFrameForPresentingLongLookFromView:(id)arg2 ;
-(CGRect)notificationViewController:(id)arg1 finalFrameForDismissingLongLookFromView:(id)arg2 ;
-(BOOL)showAdditionalMessageLinesForNotificationViewController:(id)arg1 ;
-(void)notificationViewController:(id)arg1 requestsExpandingCoalescedBundleForNotificationRequest:(id)arg2 ;
-(BOOL)notificationViewControllerIsCoalescedBundle:(id)arg1 ;
-(BOOL)notificationViewControllerShouldPerformHoverHighlighting:(id)arg1 ;
-(void)notificationViewController:(id)arg1 isPerformingHoverHighlighting:(BOOL)arg2 ;
-(void)setContentProviders:(NSMutableDictionary *)arg1 ;
-(void)setClockSnoozeAlarmContentProviders:(NSMutableDictionary *)arg1 ;
-(void)setLeadingNotificationRequest:(NCNotificationRequest *)arg1 ;
-(void)setBackgroundGroupNameBase:(NSString *)arg1 ;
-(BOOL)longLookDismissalFinalFrameCalculatedWithoutWindow;
-(void)setLongLookDismissalFinalFrameCalculatedWithoutWindow:(BOOL)arg1 ;
@end

