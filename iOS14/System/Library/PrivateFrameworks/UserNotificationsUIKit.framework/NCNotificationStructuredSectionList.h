/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <libobjc.A.dylib/NCNotificationListViewDataSource.h>
#import <libobjc.A.dylib/NCNotificationGroupListDelegate.h>
#import <libobjc.A.dylib/NCNotificationListSectionHeaderViewDelegate.h>
#import <libobjc.A.dylib/NCNotificationListComponent.h>

@protocol NCNotificationStructuredSectionListDelegate, NCNotificationListComponent;
@class NSString, NCNotificationListCache, NSMutableArray, NSMutableSet, NSMutableDictionary, NCNotificationListView, NCNotificationListSectionHeaderView, NCNotificationListSectionRevealHintView, NSArray;

@interface NCNotificationStructuredSectionList : NSObject <NCNotificationListViewDataSource, NCNotificationGroupListDelegate, NCNotificationListSectionHeaderViewDelegate, NCNotificationListComponent> {

	BOOL _deviceAuthenticated;
	BOOL _adjustsFontForContentSizeCategory;
	BOOL _shouldPresentEmptySectionHint;
	BOOL _supportsDynamicGrouping;
	BOOL _historySection;
	BOOL _notificationListViewRevealed;
	BOOL _preloadsNotificationRequests;
	BOOL _headerViewHeightValid;
	BOOL _performingDynamicGrouping;
	BOOL _dynamicGroupingActive;
	NSString* _logDescription;
	id<NCNotificationStructuredSectionListDelegate> _delegate;
	NCNotificationListCache* _notificationListCache;
	NSString* _sectionListDestination;
	NSString* _title;
	NSMutableArray* _notificationGroups;
	NSMutableSet* _hiddenNotificationGroups;
	NSMutableSet* _hiddenNotificationRequests;
	NSMutableDictionary* _filteredNotificationRequests;
	NSMutableDictionary* _preloadedNotificationGroups;
	NSMutableSet* _loadedNotificationSections;
	NCNotificationListView* _sectionListView;
	NCNotificationListSectionHeaderView* _headerView;
	NCNotificationListSectionRevealHintView* _revealHintView;
	double _headerViewHeight;
	unsigned long long _dynamicGroupingThreshold;
	NSMutableSet* _groupListsToSort;
	id<NCNotificationListComponent> _groupListPresentingLongLook;

}

@property (nonatomic,retain) NSString * title;                                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSMutableArray * notificationGroups;                                                  //@synthesize notificationGroups=_notificationGroups - In the implementation block
@property (nonatomic,retain) NSMutableSet * hiddenNotificationGroups;                                              //@synthesize hiddenNotificationGroups=_hiddenNotificationGroups - In the implementation block
@property (nonatomic,retain) NSMutableSet * hiddenNotificationRequests;                                            //@synthesize hiddenNotificationRequests=_hiddenNotificationRequests - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * filteredNotificationRequests;                                   //@synthesize filteredNotificationRequests=_filteredNotificationRequests - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * preloadedNotificationGroups;                                    //@synthesize preloadedNotificationGroups=_preloadedNotificationGroups - In the implementation block
@property (nonatomic,retain) NSMutableSet * loadedNotificationSections;                                            //@synthesize loadedNotificationSections=_loadedNotificationSections - In the implementation block
@property (nonatomic,retain) NCNotificationListView * sectionListView;                                             //@synthesize sectionListView=_sectionListView - In the implementation block
@property (nonatomic,retain) NCNotificationListSectionHeaderView * headerView;                                     //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) NCNotificationListSectionRevealHintView * revealHintView;                             //@synthesize revealHintView=_revealHintView - In the implementation block
@property (assign,nonatomic) double headerViewHeight;                                                              //@synthesize headerViewHeight=_headerViewHeight - In the implementation block
@property (assign,getter=isHeaderViewHeightValid,nonatomic) BOOL headerViewHeightValid;                            //@synthesize headerViewHeightValid=_headerViewHeightValid - In the implementation block
@property (assign,nonatomic) unsigned long long dynamicGroupingThreshold;                                          //@synthesize dynamicGroupingThreshold=_dynamicGroupingThreshold - In the implementation block
@property (assign,getter=isPerformingDynamicGrouping,nonatomic) BOOL performingDynamicGrouping;                    //@synthesize performingDynamicGrouping=_performingDynamicGrouping - In the implementation block
@property (assign,getter=isDynamicGroupingActive,nonatomic) BOOL dynamicGroupingActive;                            //@synthesize dynamicGroupingActive=_dynamicGroupingActive - In the implementation block
@property (nonatomic,retain) NSMutableSet * groupListsToSort;                                                      //@synthesize groupListsToSort=_groupListsToSort - In the implementation block
@property (nonatomic,retain) id<NCNotificationListComponent> groupListPresentingLongLook;                          //@synthesize groupListPresentingLongLook=_groupListPresentingLongLook - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationStructuredSectionListDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NCNotificationListCache * notificationListCache;                                      //@synthesize notificationListCache=_notificationListCache - In the implementation block
@property (nonatomic,readonly) NSArray * allNotificationGroups; 
@property (nonatomic,readonly) NSArray * allNotificationRequests; 
@property (assign,nonatomic) BOOL shouldPresentEmptySectionHint;                                                   //@synthesize shouldPresentEmptySectionHint=_shouldPresentEmptySectionHint - In the implementation block
@property (assign,nonatomic) BOOL supportsDynamicGrouping;                                                         //@synthesize supportsDynamicGrouping=_supportsDynamicGrouping - In the implementation block
@property (assign,getter=isHistorySection,nonatomic) BOOL historySection;                                          //@synthesize historySection=_historySection - In the implementation block
@property (assign,getter=isNotificationListViewRevealed,nonatomic) BOOL notificationListViewRevealed;              //@synthesize notificationListViewRevealed=_notificationListViewRevealed - In the implementation block
@property (nonatomic,readonly) BOOL hasVisibleContentToReveal; 
@property (assign,nonatomic) BOOL preloadsNotificationRequests;                                                    //@synthesize preloadsNotificationRequests=_preloadsNotificationRequests - In the implementation block
@property (nonatomic,retain) NSString * sectionListDestination;                                                    //@synthesize sectionListDestination=_sectionListDestination - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long notificationCount; 
@property (assign,getter=isDeviceAuthenticated,nonatomic) BOOL deviceAuthenticated;                                //@synthesize deviceAuthenticated=_deviceAuthenticated - In the implementation block
@property (nonatomic,copy) NSString * logDescription;                                                              //@synthesize logDescription=_logDescription - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                               //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
-(void)reloadNotificationRequest:(id)arg1 ;
-(BOOL)isDeviceAuthenticated;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(NSMutableSet *)groupListsToSort;
-(id)initWithTitle:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(NSMutableSet *)loadedNotificationSections;
-(void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2 ;
-(void)_toggleHiddenNotificationsOnAuthenticationChange:(BOOL)arg1 ;
-(BOOL)isDynamicGroupingActive;
-(void)setLogDescription:(NSString *)arg1 ;
-(void)notificationsLoadedForSectionIdentifier:(id)arg1 ;
-(id)notificationListView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(id)_legibilitySettings;
-(void)insertNotificationRequest:(id)arg1 ;
-(void)setShouldPresentEmptySectionHint:(BOOL)arg1 ;
-(NCNotificationListCache *)notificationListCache;
-(void)setHeaderView:(NCNotificationListSectionHeaderView *)arg1 ;
-(void)setSupportsDynamicGrouping:(BOOL)arg1 ;
-(void)setDeviceAuthenticated:(BOOL)arg1 ;
-(unsigned long long)notificationCount;
-(void)setPreloadsNotificationRequests:(BOOL)arg1 ;
-(void)sectionHeaderViewDidTransitionToClearState:(id)arg1 ;
-(void)setNotificationListCache:(NCNotificationListCache *)arg1 ;
-(void)setNotificationGroups:(NSMutableArray *)arg1 ;
-(void)setSectionListView:(NCNotificationListView *)arg1 ;
-(void)expandGroupForNotificationRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSString *)logDescription;
-(void)_toggleDynamicGroupingIfNecessary;
-(void)setDynamicGroupingActive:(BOOL)arg1 ;
-(BOOL)isHistorySection;
-(void)sectionHeaderViewDidBeginForceTouchInteraction:(id)arg1 ;
-(void)removeNotificationRequest:(id)arg1 ;
-(double)notificationListView:(id)arg1 heightForItemAtIndex:(unsigned long long)arg2 ;
-(void)toggleFilteringForSectionIdentifier:(id)arg1 shouldFilter:(BOOL)arg2 ;
-(void)notificationGroupList:(id)arg1 requestsScrollToTopOfGroupWithCompletion:(/*^block*/id)arg2 ;
-(BOOL)notificationListViewIsGroup:(id)arg1 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(id)_sectionSettingsForSectionIdentifier:(id)arg1 ;
-(BOOL)hasVisibleContentToReveal;
-(void)_filterNotificationRequest:(id)arg1 ;
-(BOOL)_shouldHideNotificationGroupList:(id)arg1 ;
-(void)_unfilterNotificationRequestsForSectionIdentifier:(id)arg1 ;
-(NSArray *)allNotificationRequests;
-(unsigned long long)dynamicGroupingThreshold;
-(void)_modifyHiddenNotificationRequest:(id)arg1 ;
-(void)setFilteredNotificationRequests:(NSMutableDictionary *)arg1 ;
-(void)setHiddenNotificationGroups:(NSMutableSet *)arg1 ;
-(void)setHistorySection:(BOOL)arg1 ;
-(void)setLoadedNotificationSections:(NSMutableSet *)arg1 ;
-(void)modifyNotificationRequest:(id)arg1 ;
-(id<NCNotificationStructuredSectionListDelegate>)delegate;
-(void)adjustForLegibilitySettingsChange:(id)arg1 ;
-(void)_insertNotificationGroupList:(id)arg1 ;
-(BOOL)_shouldHideForSectionIdentifier:(id)arg1 ;
-(void)sectionHeaderViewDidDismissForceTouchView:(id)arg1 ;
-(NCNotificationListView *)sectionListView;
-(void)setGroupListPresentingLongLook:(id<NCNotificationListComponent>)arg1 ;
-(void)notificationListComponent:(id)arg1 shouldFinishLongLookTransitionForNotificationRequest:(id)arg2 trigger:(long long)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)count;
-(void)_hideNotificationGroupsPassingTest:(/*^block*/id)arg1 ;
-(BOOL)_shouldHideNotificationRequest:(id)arg1 ;
-(BOOL)notificationGroupListShouldScrollToTop:(id)arg1 ;
-(void)_filterNotificationRequestsForSectionIdentifier:(id)arg1 ;
-(id)_groupListForPreloadedNotificationRequest:(id)arg1 createNewIfNecessary:(BOOL)arg2 ;
-(double)_insetHorizontalMargin;
-(void)_addHiddenNotificationGroupList:(id)arg1 ;
-(void)mergeNotificationGroups:(id)arg1 ;
-(NSMutableDictionary *)preloadedNotificationGroups;
-(NCNotificationListSectionRevealHintView *)revealHintView;
-(void)sectionHeaderViewDidPresentForceTouchView:(id)arg1 ;
-(unsigned long long)_existingIndexOfGroupForNotificationRequest:(id)arg1 inNotificationGroupLists:(id)arg2 ;
-(unsigned long long)_existingIndexOfGroupWithSectionIdentifier:(id)arg1 threadIdentifier:(id)arg2 inNotificationGroupLists:(id)arg3 ;
-(void)setDelegate:(id<NCNotificationStructuredSectionListDelegate>)arg1 ;
-(void)_removeNotificationGroupList:(id)arg1 ;
-(void)clearAllNotificationRequests;
-(double)headerViewHeight;
-(id)legibilitySettingsForSectionHeaderView:(id)arg1 ;
-(NSMutableArray *)notificationGroups;
-(void)setSectionListDestination:(NSString *)arg1 ;
-(NSMutableDictionary *)filteredNotificationRequests;
-(BOOL)isPerformingDynamicGrouping;
-(BOOL)isViewVisibleForNotificationGroupList:(id)arg1 ;
-(BOOL)preloadsNotificationRequests;
-(id)headerViewForNotificationList:(id)arg1 ;
-(void)setDynamicGroupingThreshold:(unsigned long long)arg1 ;
-(void)setHeaderViewHeight:(double)arg1 ;
-(id)_backgroundGroupNameBase;
-(void)_removeFilteredNotificationRequest:(id)arg1 ;
-(void)recycleView:(id)arg1 ;
-(void)sectionHeaderViewDidReceiveClearAllAction:(id)arg1 ;
-(void)collapseGroupForNotificationRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(unsigned long long)_existingIndexOfGroupForNotificationRequest:(id)arg1 withSectionIdentifier:(id)arg2 threadIdentifier:(id)arg3 inNotificationGroupLists:(id)arg4 ;
-(void)_postPreloadedNotificationRequestsForSectionIdentifier:(id)arg1 ;
-(id)_newGroupListForNotificationRequest:(id)arg1 ;
-(void)_removeHiddenNotificationRequest:(id)arg1 ;
-(BOOL)_shouldPreloadNotificationRequest:(id)arg1 ;
-(void)_showHiddenNotificationGroupsOnDeviceAuthentication;
-(NSMutableSet *)hiddenNotificationRequests;
-(void)setHeaderViewHeightValid:(BOOL)arg1 ;
-(void)setPerformingDynamicGrouping:(BOOL)arg1 ;
-(BOOL)shouldPresentEmptySectionHint;
-(void)_modifyPreloadedNotificationRequest:(id)arg1 ;
-(void)_showHiddenNotificationGroupsPassingTest:(/*^block*/id)arg1 ;
-(id)notificationGroupListsForMigrationPassingTest:(/*^block*/id)arg1 filterPersistentRequests:(BOOL)arg2 ;
-(void)setHiddenNotificationRequests:(NSMutableSet *)arg1 ;
-(void)sortNotificationGroupListsIfNecessary;
-(id<NCNotificationListComponent>)groupListPresentingLongLook;
-(id)notificationGroupList:(id)arg1 requestsAuxiliaryOptionsContentProviderForNotificationRequest:(id)arg2 isLongLook:(BOOL)arg3 ;
-(NSString *)sectionListDestination;
-(NCNotificationListSectionHeaderView *)headerView;
-(void)notificationListComponent:(id)arg1 isPresentingLongLookForViewController:(id)arg2 ;
-(void)_showHiddenNotificationRequestsPassingTest:(/*^block*/id)arg1 ;
-(void)_updatePositionOfGroup:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(NSArray *)allNotificationGroups;
-(NSMutableSet *)hiddenNotificationGroups;
-(void)sectionHeaderView:(id)arg1 didReceiveClearActionForSectionIdentifier:(id)arg2 ;
-(unsigned long long)_existingIndexOfGroupForNotificationRequest:(id)arg1 ;
-(void)_removePreloadedNotificationRequest:(id)arg1 ;
-(id)containerViewForHeaderViewPreviewInteractionPresentedContent:(id)arg1 ;
-(void)regroupNotificationGroups;
-(void)setNotificationListViewRevealed:(BOOL)arg1 ;
-(void)setRevealHintView:(NCNotificationListSectionRevealHintView *)arg1 ;
-(void)notificationGroupListDidRemoveAllNotificationRequests:(id)arg1 ;
-(void)_insertPreloadedNotificationRequest:(id)arg1 ;
-(BOOL)isNotificationListViewRevealed;
-(void)notificationGroupList:(id)arg1 didRemoveNotificationRequest:(id)arg2 ;
-(BOOL)supportsDynamicGrouping;
-(BOOL)_shouldFilterNotificationRequest:(id)arg1 ;
-(void)_hideNotificationGroupsOnDeviceReauthentication;
-(NSString *)title;
-(unsigned long long)notificationListViewNumberOfItems:(id)arg1 ;
-(BOOL)isHeaderViewHeightValid;
-(double)headerViewHeightForNotificationList:(id)arg1 ;
-(void)setGroupListsToSort:(NSMutableSet *)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)setPreloadedNotificationGroups:(NSMutableDictionary *)arg1 ;
@end

