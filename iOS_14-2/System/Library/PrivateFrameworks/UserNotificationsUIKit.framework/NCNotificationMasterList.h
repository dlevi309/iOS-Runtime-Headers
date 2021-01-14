/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) BOOL hasVisibleContentToReveal; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long notificationCount; 
@property (assign,getter=isDeviceAuthenticated,nonatomic) BOOL deviceAuthenticated;                                        //@synthesize deviceAuthenticated=_deviceAuthenticated - In the implementation block
@property (nonatomic,copy) NSString * logDescription;                                                                      //@synthesize logDescription=_logDescription - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                                       //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
-(void)reloadNotificationRequest:(id)arg1 ;
-(BOOL)isDeviceAuthenticated;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(id)notificationRequestWithNotificationIdentifier:(id)arg1 sectionIdentifier:(id)arg2 ;
-(NCNotificationListView *)masterListView;
-(void)setIncomingSectionList:(NCNotificationStructuredSectionList *)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)listViewControllerPresentedByUserAction;
-(void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2 ;
-(void)notificationListComponentRequestsClearingAllNotificationRequests:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)setLogDescription:(NSString *)arg1 ;
-(void)notificationsLoadedForSectionIdentifier:(id)arg1 ;
-(id)notificationListView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2 ;
-(BOOL)isNotificationHistoryRevealed;
-(BOOL)adjustsFontForContentSizeCategory;
-(void)insertNotificationRequest:(id)arg1 ;
-(NCNotificationListCache *)notificationListCache;
-(NSMutableArray *)notificationSections;
-(void)setMasterListView:(NCNotificationListView *)arg1 ;
-(void)setDeviceAuthenticated:(BOOL)arg1 ;
-(unsigned long long)notificationCount;
-(void)toggleMissedSectionActive:(BOOL)arg1 reason:(unsigned long long)arg2 ;
-(void)setNotificationListCache:(NCNotificationListCache *)arg1 ;
-(void)expandGroupForNotificationRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSString *)logDescription;
-(void)removeNotificationRequest:(id)arg1 ;
-(double)notificationListView:(id)arg1 heightForItemAtIndex:(unsigned long long)arg2 ;
-(void)migrateNotifications;
-(void)toggleFilteringForSectionIdentifier:(id)arg1 shouldFilter:(BOOL)arg2 ;
-(BOOL)notificationListViewIsGroup:(id)arg1 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)hasVisibleContentToReveal;
-(void)notificationManagementSuggestionManager:(id)arg1 requestsUpdatingContentForNotificationRequest:(id)arg2 ;
-(BOOL)isMissedSectionActive;
-(NCNotificationListRevealCoordinator *)revealCoordinator;
-(id)init;
-(void)_setupNotificationSectionLists;
-(void)notificationManagementSuggestionManager:(id)arg1 requestsPresentingNotificationManagementViewType:(unsigned long long)arg2 forNotificationRequest:(id)arg3 withPresentingView:(id)arg4 ;
-(void)modifyNotificationRequest:(id)arg1 ;
-(id<NCNotificationMasterListDelegate>)delegate;
-(void)adjustForLegibilitySettingsChange:(id)arg1 ;
-(id)_newNotificationSectionListWithTitle:(id)arg1 notificationListViewRevealed:(BOOL)arg2 logDescription:(id)arg3 ;
-(void)setMissedSectionList:(NCNotificationStructuredSectionList *)arg1 ;
-(id)notificationStructuredSectionList:(id)arg1 requestsAuxiliaryOptionsContentProviderForNotificationRequest:(id)arg2 isLongLook:(BOOL)arg3 ;
-(BOOL)notificationListRevealCoordinatorShouldAllowReveal:(id)arg1 ;
-(void)setNotificationListStalenessEventTracker:(NCNotificationListStalenessEventTracker *)arg1 ;
-(NCNotificationListStalenessEventTracker *)notificationListStalenessEventTracker;
-(BOOL)notificationStructuredSectionList:(id)arg1 shouldScrollToTopForGroupList:(id)arg2 ;
-(void)setNotificationSections:(NSMutableArray *)arg1 ;
-(BOOL)shouldAllowNotificationHistoryReveal;
-(unsigned long long)count;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)setMissedSectionActive:(BOOL)arg1 ;
-(void)setScrollCompletionBlock:(id)arg1 ;
-(NCNotificationManagementSuggestionManager *)suggestionManager;
-(id)scrollCompletionBlock;
-(void)setShouldAllowNotificationHistoryReveal:(BOOL)arg1 ;
-(void)setSuggestionManager:(NCNotificationManagementSuggestionManager *)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(id)_filterNotificationsInGroupLists:(id)arg1 withDestinationsForSectionList:(id)arg2 ;
-(void)_insertNotificationRequest:(id)arg1 ;
-(void)setDelegate:(id<NCNotificationMasterListDelegate>)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(BOOL)notificationStructuredSectionList:(id)arg1 shouldFilterNotificationRequest:(id)arg2 ;
-(double)scrollCompletionBlockOffsetThreshold;
-(void)recycleView:(id)arg1 ;
-(id)subListsForNotificationListRevealCoordinator:(id)arg1 ;
-(void)collapseGroupForNotificationRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_sortNotificationGroupsIfNecessary;
-(NCNotificationStructuredSectionList *)incomingSectionList;
-(NCNotificationStructuredSectionList *)missedSectionList;
-(void)revealCoordinatorDidScrollToReveal:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)setRevealCoordinator:(NCNotificationListRevealCoordinator *)arg1 ;
-(void)notificationListRevealCoordinator:(id)arg1 updatedRevealState:(BOOL)arg2 ;
-(void)_regroupAllNotificationGroups;
-(id)_sectionForNotificationRequest:(id)arg1 ;
-(void)_migrateNotificationsFromList:(id)arg1 toList:(id)arg2 passingTest:(/*^block*/id)arg3 hideToList:(BOOL)arg4 clearRequests:(BOOL)arg5 filterPersistentRequests:(BOOL)arg6 ;
-(id)_newMissedSectionListForReason:(unsigned long long)arg1 ;
-(id)notificationManagementSuggestionManager:(id)arg1 requestsSectionSettingsForSectionIdentifier:(id)arg2 ;
-(BOOL)_shouldDNDDelayDeliveryOfNotificationRequest:(id)arg1 ;
-(void)setHistorySectionList:(NCNotificationStructuredSectionList *)arg1 ;
-(BOOL)_isNotificationRequest:(id)arg1 forSectionList:(id)arg2 ;
-(void)setNotificationHistoryRevealed:(BOOL)arg1 ;
-(void)setScrollCompletionBlockOffsetThreshold:(double)arg1 ;
-(void)_updateVisibleRectForContentOffset:(CGPoint)arg1 ;
-(NCNotificationStructuredSectionList *)historySectionList;
-(unsigned long long)notificationListViewNumberOfItems:(id)arg1 ;
-(void)notificationStructuredSectionList:(id)arg1 requestsScrollingToContentOffset:(double)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)forwardInvocation:(id)arg1 ;
@end

