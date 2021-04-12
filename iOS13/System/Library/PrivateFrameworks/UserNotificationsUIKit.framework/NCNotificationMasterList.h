/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <libobjc.A.dylib/NCNotificationListViewDataSource.h>
#import <libobjc.A.dylib/NCNotificationListRevealCoordinatorDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/NCNotificationStructuredSectionListDelegate.h>
#import <libobjc.A.dylib/NCNotificationManagementSuggestionManagerDelegate.h>
#import <libobjc.A.dylib/NCNotificationListComponent.h>

@protocol NCNotificationMasterListDelegate;
@class NSString, NCNotificationListView, NCNotificationManagementSuggestionManager, NSMutableArray, NCNotificationListRevealCoordinator, NCNotificationListCache, NCNotificationListStalenessEventTracker, NCNotificationStructuredSectionList;

@interface NCNotificationMasterList : NSObject <NCNotificationListViewDataSource, NCNotificationListRevealCoordinatorDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, NCNotificationStructuredSectionListDelegate, NCNotificationManagementSuggestionManagerDelegate, NCNotificationListComponent> {

	BOOL _deviceAuthenticated;
	BOOL _adjustsFontForContentSizeCategory;
	BOOL _notificationHistoryRevealed;
	BOOL _shouldAllowNotificationHistoryReveal;
	BOOL _missedSectionActive;
	NSString* _logDescription;
	id<NCNotificationMasterListDelegate> _delegate;
	NCNotificationListView* _masterListView;
	NCNotificationManagementSuggestionManager* _suggestionManager;
	NSMutableArray* _notificationSections;
	NCNotificationListRevealCoordinator* _revealCoordinator;
	NCNotificationListCache* _notificationListCache;
	NCNotificationListStalenessEventTracker* _notificationListStalenessEventTracker;
	NCNotificationStructuredSectionList* _incomingSectionList;
	NCNotificationStructuredSectionList* _historySectionList;
	NCNotificationStructuredSectionList* _missedSectionList;
	/*^block*/id _scrollCompletionBlock;
	double _scrollCompletionBlockOffsetThreshold;

}

@property (nonatomic,retain) NSMutableArray * notificationSections;                                                        //@synthesize notificationSections=_notificationSections - In the implementation block
@property (nonatomic,retain) NCNotificationListRevealCoordinator * revealCoordinator;                                      //@synthesize revealCoordinator=_revealCoordinator - In the implementation block
@property (nonatomic,retain) NCNotificationListCache * notificationListCache;                                              //@synthesize notificationListCache=_notificationListCache - In the implementation block
@property (nonatomic,retain) NCNotificationListStalenessEventTracker * notificationListStalenessEventTracker;              //@synthesize notificationListStalenessEventTracker=_notificationListStalenessEventTracker - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowNotificationHistoryReveal;                                                    //@synthesize shouldAllowNotificationHistoryReveal=_shouldAllowNotificationHistoryReveal - In the implementation block
@property (assign,getter=isMissedSectionActive,nonatomic) BOOL missedSectionActive;                                        //@synthesize missedSectionActive=_missedSectionActive - In the implementation block
@property (nonatomic,retain) NCNotificationStructuredSectionList * incomingSectionList;                                    //@synthesize incomingSectionList=_incomingSectionList - In the implementation block
@property (nonatomic,retain) NCNotificationStructuredSectionList * historySectionList;                                     //@synthesize historySectionList=_historySectionList - In the implementation block
@property (nonatomic,retain) NCNotificationStructuredSectionList * missedSectionList;                                      //@synthesize missedSectionList=_missedSectionList - In the implementation block
@property (nonatomic,copy) id scrollCompletionBlock;                                                                       //@synthesize scrollCompletionBlock=_scrollCompletionBlock - In the implementation block
@property (assign,nonatomic) double scrollCompletionBlockOffsetThreshold;                                                  //@synthesize scrollCompletionBlockOffsetThreshold=_scrollCompletionBlockOffsetThreshold - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationMasterListDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NCNotificationListView * masterListView;                                                      //@synthesize masterListView=_masterListView - In the implementation block
@property (nonatomic,retain) NCNotificationManagementSuggestionManager * suggestionManager;                                //@synthesize suggestionManager=_suggestionManager - In the implementation block
@property (assign,getter=isNotificationHistoryRevealed,nonatomic) BOOL notificationHistoryRevealed;                        //@synthesize notificationHistoryRevealed=_notificationHistoryRevealed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                                       //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long notificationCount; 
@property (assign,getter=isDeviceAuthenticated,nonatomic) BOOL deviceAuthenticated;                                        //@synthesize deviceAuthenticated=_deviceAuthenticated - In the implementation block
@property (nonatomic,copy) NSString * logDescription;                                                                      //@synthesize logDescription=_logDescription - In the implementation block
-(id)init;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(unsigned long long)count;
-(id<NCNotificationMasterListDelegate>)delegate;
-(void)setDelegate:(id<NCNotificationMasterListDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(NSString *)logDescription;
-(unsigned long long)notificationCount;
-(void)recycleView:(id)arg1 ;
-(NCNotificationManagementSuggestionManager *)suggestionManager;
-(void)setSuggestionManager:(NCNotificationManagementSuggestionManager *)arg1 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2 ;
-(void)setDeviceAuthenticated:(BOOL)arg1 ;
-(void)toggleMissedSectionActive:(BOOL)arg1 reason:(unsigned long long)arg2 ;
-(void)insertNotificationRequest:(id)arg1 ;
-(void)modifyNotificationRequest:(id)arg1 ;
-(void)removeNotificationRequest:(id)arg1 ;
-(BOOL)_shouldDNDDelayDeliveryOfNotificationRequest:(id)arg1 ;
-(void)migrateNotifications;
-(void)listViewControllerPresentedByUserAction;
-(void)toggleFilteringForSectionIdentifier:(id)arg1 shouldFilter:(BOOL)arg2 ;
-(void)adjustForLegibilitySettingsChange:(id)arg1 ;
-(id)notificationRequestWithNotificationIdentifier:(id)arg1 sectionIdentifier:(id)arg2 ;
-(void)expandGroupForNotificationRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)collapseGroupForNotificationRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSMutableArray *)notificationSections;
-(void)setNotificationSections:(NSMutableArray *)arg1 ;
-(void)notificationListComponentRequestsClearingAllNotificationRequests:(id)arg1 ;
-(void)_setupNotificationSectionLists;
-(NCNotificationListStalenessEventTracker *)notificationListStalenessEventTracker;
-(NCNotificationStructuredSectionList *)incomingSectionList;
-(BOOL)isMissedSectionActive;
-(NCNotificationStructuredSectionList *)historySectionList;
-(void)_migrateNotificationsFromList:(id)arg1 toList:(id)arg2 passingTest:(/*^block*/id)arg3 hideToList:(BOOL)arg4 clearRequests:(BOOL)arg5 filterPersistentRequests:(BOOL)arg6 ;
-(NCNotificationListRevealCoordinator *)revealCoordinator;
-(void)_regroupAllNotificationGroups;
-(void)_sortNotificationGroupsIfNecessary;
-(id)_newMissedSectionListForReason:(unsigned long long)arg1 ;
-(NCNotificationStructuredSectionList *)missedSectionList;
-(NCNotificationListView *)masterListView;
-(BOOL)isNotificationHistoryRevealed;
-(void)_insertNotificationRequest:(id)arg1 ;
-(BOOL)_isNotificationRequestForIncomingSection:(id)arg1 ;
-(BOOL)_isNotificationRequestForHistorySection:(id)arg1 ;
-(NCNotificationListCache *)notificationListCache;
-(void)reloadNotificationRequest:(id)arg1 ;
-(BOOL)shouldAllowNotificationHistoryReveal;
-(void)_updateVisibleRectForContentOffset:(CGPoint)arg1 ;
-(double)scrollCompletionBlockOffsetThreshold;
-(BOOL)isDeviceAuthenticated;
-(void)setNotificationListCache:(NCNotificationListCache *)arg1 ;
-(void)setLogDescription:(NSString *)arg1 ;
-(id)_newNotificationSectionListWithTitle:(id)arg1 notificationListViewRevealed:(BOOL)arg2 logDescription:(id)arg3 ;
-(id)_sectionForNotificationRequest:(id)arg1 ;
-(double)notificationListView:(id)arg1 heightForItemAtIndex:(unsigned long long)arg2 ;
-(id)notificationListView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)notificationListViewNumberOfItems:(id)arg1 ;
-(BOOL)notificationListViewIsGroup:(id)arg1 ;
-(BOOL)notificationListRevealCoordinatorShouldAllowReveal:(id)arg1 ;
-(id)subListsForNotificationListRevealCoordinator:(id)arg1 ;
-(void)notificationListRevealCoordinator:(id)arg1 updatedRevealState:(BOOL)arg2 ;
-(void)revealCoordinatorDidScrollToReveal:(id)arg1 ;
-(id)notificationStructuredSectionList:(id)arg1 requestsAuxiliaryOptionsContentProviderForNotificationRequest:(id)arg2 isLongLook:(BOOL)arg3 ;
-(BOOL)notificationStructuredSectionList:(id)arg1 shouldFilterNotificationRequest:(id)arg2 ;
-(void)notificationStructuredSectionList:(id)arg1 requestsScrollingToContentOffset:(double)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)notificationStructuredSectionList:(id)arg1 shouldScrollToTopForGroupList:(id)arg2 ;
-(void)notificationManagementSuggestionManager:(id)arg1 requestsUpdatingContentForNotificationRequest:(id)arg2 ;
-(void)notificationManagementSuggestionManager:(id)arg1 requestsPresentingNotificationManagementViewType:(unsigned long long)arg2 forNotificationRequest:(id)arg3 withPresentingView:(id)arg4 ;
-(id)notificationManagementSuggestionManager:(id)arg1 requestsSectionSettingsForSectionIdentifier:(id)arg2 ;
-(void)setMasterListView:(NCNotificationListView *)arg1 ;
-(void)setNotificationHistoryRevealed:(BOOL)arg1 ;
-(void)setRevealCoordinator:(NCNotificationListRevealCoordinator *)arg1 ;
-(void)setNotificationListStalenessEventTracker:(NCNotificationListStalenessEventTracker *)arg1 ;
-(void)setShouldAllowNotificationHistoryReveal:(BOOL)arg1 ;
-(void)setMissedSectionActive:(BOOL)arg1 ;
-(void)setIncomingSectionList:(NCNotificationStructuredSectionList *)arg1 ;
-(void)setHistorySectionList:(NCNotificationStructuredSectionList *)arg1 ;
-(void)setMissedSectionList:(NCNotificationStructuredSectionList *)arg1 ;
-(id)scrollCompletionBlock;
-(void)setScrollCompletionBlock:(id)arg1 ;
-(void)setScrollCompletionBlockOffsetThreshold:(double)arg1 ;
@end

