/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsUI.framework/ActivityAchievementsUI
*/


@protocol OS_dispatch_queue;
#import <ActivityAchievementsUI/ActivityAchievementsUI-Structs.h>
@class HKHealthStore, ACHQuery, ACHVisibilityEvaluator, NSMutableDictionary, NSMutableArray, NSArray, NSDictionary, NSObject, NSHashTable;

@interface AAUIAchievementsDataProvider : NSObject {

	BOOL _didFinishInitialLoad;
	os_unfair_lock_s _modelLock;
	HKHealthStore* _healthStore;
	ACHQuery* _query;
	ACHVisibilityEvaluator* _visibilityEvaluator;
	NSMutableDictionary* _achievementsBySection;
	NSMutableArray* _recentAchievements;
	NSMutableArray* _relevantAchievements;
	NSMutableDictionary* _filteredAchievementsByTemplateUniqueName;
	NSMutableDictionary* _achievementsByTemplateUniqueName;
	NSMutableDictionary* _achievementsByEarnedDateComponents;
	NSArray* _orderedSections;
	NSArray* _orderedMainSectionHeaderStrings;
	NSArray* _orderedRecentAndRelevantHeaderStrings;
	NSDictionary* _clientAchievementsBySection;
	NSArray* _clientAllAchievementsSortedByEarnedDate;
	NSArray* _clientRecentAchievements;
	NSArray* _clientRelevantAchievements;
	NSDictionary* _clientFilteredAchievementsByTemplateUniqueName;
	NSDictionary* _clientAchievementsByTemplateUniqueName;
	NSDictionary* _clientAchievementsByEarnedDateComponents;
	NSObject*<OS_dispatch_queue> _achievementsDataQueue;
	NSObject*<OS_dispatch_queue> _observerQueue;
	long long _overrideDisplayState;
	double _queryRetryDelay;
	long long _queryRetryCount;
	NSHashTable* _initialLoadObservers;
	NSHashTable* _recentAndRelevantSectionObservers;
	NSHashTable* _mainSectionObservers;

}

@property (nonatomic,retain) HKHealthStore * healthStore;                                                 //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) ACHQuery * query;                                                            //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) ACHVisibilityEvaluator * visibilityEvaluator;                                //@synthesize visibilityEvaluator=_visibilityEvaluator - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * achievementsBySection;                                 //@synthesize achievementsBySection=_achievementsBySection - In the implementation block
@property (nonatomic,retain) NSMutableArray * recentAchievements;                                         //@synthesize recentAchievements=_recentAchievements - In the implementation block
@property (nonatomic,retain) NSMutableArray * relevantAchievements;                                       //@synthesize relevantAchievements=_relevantAchievements - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * filteredAchievementsByTemplateUniqueName;              //@synthesize filteredAchievementsByTemplateUniqueName=_filteredAchievementsByTemplateUniqueName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * achievementsByTemplateUniqueName;                      //@synthesize achievementsByTemplateUniqueName=_achievementsByTemplateUniqueName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * achievementsByEarnedDateComponents;                    //@synthesize achievementsByEarnedDateComponents=_achievementsByEarnedDateComponents - In the implementation block
@property (nonatomic,retain) NSArray * orderedSections;                                                   //@synthesize orderedSections=_orderedSections - In the implementation block
@property (nonatomic,retain) NSArray * orderedMainSectionHeaderStrings;                                   //@synthesize orderedMainSectionHeaderStrings=_orderedMainSectionHeaderStrings - In the implementation block
@property (nonatomic,retain) NSArray * orderedRecentAndRelevantHeaderStrings;                             //@synthesize orderedRecentAndRelevantHeaderStrings=_orderedRecentAndRelevantHeaderStrings - In the implementation block
@property (nonatomic,retain) NSDictionary * clientAchievementsBySection;                                  //@synthesize clientAchievementsBySection=_clientAchievementsBySection - In the implementation block
@property (nonatomic,retain) NSArray * clientAllAchievementsSortedByEarnedDate;                           //@synthesize clientAllAchievementsSortedByEarnedDate=_clientAllAchievementsSortedByEarnedDate - In the implementation block
@property (nonatomic,retain) NSArray * clientRecentAchievements;                                          //@synthesize clientRecentAchievements=_clientRecentAchievements - In the implementation block
@property (nonatomic,retain) NSArray * clientRelevantAchievements;                                        //@synthesize clientRelevantAchievements=_clientRelevantAchievements - In the implementation block
@property (nonatomic,retain) NSDictionary * clientFilteredAchievementsByTemplateUniqueName;               //@synthesize clientFilteredAchievementsByTemplateUniqueName=_clientFilteredAchievementsByTemplateUniqueName - In the implementation block
@property (nonatomic,retain) NSDictionary * clientAchievementsByTemplateUniqueName;                       //@synthesize clientAchievementsByTemplateUniqueName=_clientAchievementsByTemplateUniqueName - In the implementation block
@property (nonatomic,retain) NSDictionary * clientAchievementsByEarnedDateComponents;                     //@synthesize clientAchievementsByEarnedDateComponents=_clientAchievementsByEarnedDateComponents - In the implementation block
@property (assign,nonatomic) BOOL didFinishInitialLoad;                                                   //@synthesize didFinishInitialLoad=_didFinishInitialLoad - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> achievementsDataQueue;                          //@synthesize achievementsDataQueue=_achievementsDataQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> observerQueue;                                  //@synthesize observerQueue=_observerQueue - In the implementation block
@property (assign,nonatomic) long long overrideDisplayState;                                              //@synthesize overrideDisplayState=_overrideDisplayState - In the implementation block
@property (assign,nonatomic) double queryRetryDelay;                                                      //@synthesize queryRetryDelay=_queryRetryDelay - In the implementation block
@property (assign,nonatomic) long long queryRetryCount;                                                   //@synthesize queryRetryCount=_queryRetryCount - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s modelLock;                                                  //@synthesize modelLock=_modelLock - In the implementation block
@property (nonatomic,retain) NSHashTable * initialLoadObservers;                                          //@synthesize initialLoadObservers=_initialLoadObservers - In the implementation block
@property (nonatomic,retain) NSHashTable * recentAndRelevantSectionObservers;                             //@synthesize recentAndRelevantSectionObservers=_recentAndRelevantSectionObservers - In the implementation block
@property (nonatomic,retain) NSHashTable * mainSectionObservers;                                          //@synthesize mainSectionObservers=_mainSectionObservers - In the implementation block
@property (nonatomic,readonly) long long numberOfRecentAndRelevantSections; 
@property (nonatomic,readonly) long long numberOfSections; 
-(ACHQuery *)query;
-(HKHealthStore *)healthStore;
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(void)setObserverQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)setQuery:(ACHQuery *)arg1 ;
-(void)_reload;
-(NSMutableDictionary *)achievementsByTemplateUniqueName;
-(void)setAchievementsByTemplateUniqueName:(NSMutableDictionary *)arg1 ;
-(void)_handleUpdatedAchievements:(id)arg1 ;
-(void)_handleDeletedAchievements:(id)arg1 ;
-(long long)queryRetryCount;
-(void)cycleQuery;
-(void)setQueryRetryCount:(long long)arg1 ;
-(void)startFetching;
-(BOOL)didFinishInitialLoad;
-(NSArray *)orderedMainSectionHeaderStrings;
-(NSArray *)orderedRecentAndRelevantHeaderStrings;
-(NSArray *)clientRecentAchievements;
-(NSArray *)orderedSections;
-(NSDictionary *)clientAchievementsBySection;
-(NSDictionary *)clientFilteredAchievementsByTemplateUniqueName;
-(NSDictionary *)clientAchievementsByTemplateUniqueName;
-(NSDictionary *)clientAchievementsByEarnedDateComponents;
-(NSArray *)clientAllAchievementsSortedByEarnedDate;
-(NSMutableArray *)recentAchievements;
-(NSMutableArray *)relevantAchievements;
-(NSMutableDictionary *)achievementsBySection;
-(void)setClientRecentAchievements:(NSArray *)arg1 ;
-(void)setClientRelevantAchievements:(NSArray *)arg1 ;
-(NSMutableDictionary *)filteredAchievementsByTemplateUniqueName;
-(void)setClientFilteredAchievementsByTemplateUniqueName:(NSDictionary *)arg1 ;
-(void)setClientAchievementsByTemplateUniqueName:(NSDictionary *)arg1 ;
-(void)setClientAchievementsBySection:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)achievementsByEarnedDateComponents;
-(void)setClientAchievementsByEarnedDateComponents:(NSDictionary *)arg1 ;
-(void)setClientAllAchievementsSortedByEarnedDate:(NSArray *)arg1 ;
-(long long)overrideDisplayState;
-(void)setDidFinishInitialLoad:(BOOL)arg1 ;
-(id)_achievementsRespectingOverrideDisplayState:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)achievementsDataQueue;
-(long long)_updateAchievement:(id)arg1 ;
-(long long)_deleteAchievement:(id)arg1 fromUnfiltered:(BOOL)arg2 ;
-(void)_deepCopyClientFacingModel;
-(ACHVisibilityEvaluator *)visibilityEvaluator;
-(id)_oldestRecentAchievement;
-(BOOL)_remoteAchievementBelongsInRelevants:(id)arg1 ;
-(BOOL)_monthlyChallengeBelongsInRelevants:(id)arg1 ;
-(BOOL)_builtInBelongsInRelevants:(id)arg1 ;
-(BOOL)_shouldShowAchievement:(id)arg1 ;
-(BOOL)_achievementBelongsInRecents:(id)arg1 replacingRecent:(id*)arg2 ;
-(BOOL)_achievementBelongsInRelevants:(id)arg1 replacingRelevant:(id*)arg2 ;
-(id)initWithHealthStore:(id)arg1 layoutMode:(unsigned long long)arg2 ;
-(double)queryRetryDelay;
-(void)addInitialLoadObserver:(id)arg1 ;
-(void)removeInitialLoadObserver:(id)arg1 ;
-(void)addRecentAndRelevantSectionObserver:(id)arg1 ;
-(void)removeRecentAndRelevantSectionObserver:(id)arg1 ;
-(void)addMainSectionObserver:(id)arg1 ;
-(void)removeMainSectionObserver:(id)arg1 ;
-(void)stopFetching;
-(id)headerStringForSection:(long long)arg1 isRecentAndRelevant:(BOOL)arg2 ;
-(long long)numberOfRecentAndRelevantSections;
-(long long)numberOfItemsInRecentAndRelevantSection:(long long)arg1 ;
-(id)recentAndRelevantAchievementAtIndexPath:(id)arg1 ;
-(id)achievementAtIndexPath:(id)arg1 ;
-(id)trophyCaseAchievementForTemplateUniqueName:(id)arg1 ;
-(id)achievementForTemplateUniqueName:(id)arg1 ;
-(id)achievementsForDateComponents:(id)arg1 ;
-(id)allAchievementsSortedByEarnedDate;
-(BOOL)_shouldShowPerfectWeekAchievement:(double)arg1 ;
-(id)_recentAndRelevantSectionIndexPathForAchievement:(id)arg1 ;
-(id)_mainSectionIndexPathForAchievement:(id)arg1 ;
-(void)setVisibilityEvaluator:(ACHVisibilityEvaluator *)arg1 ;
-(void)setAchievementsBySection:(NSMutableDictionary *)arg1 ;
-(void)setRecentAchievements:(NSMutableArray *)arg1 ;
-(void)setRelevantAchievements:(NSMutableArray *)arg1 ;
-(void)setFilteredAchievementsByTemplateUniqueName:(NSMutableDictionary *)arg1 ;
-(void)setAchievementsByEarnedDateComponents:(NSMutableDictionary *)arg1 ;
-(void)setOrderedSections:(NSArray *)arg1 ;
-(void)setOrderedMainSectionHeaderStrings:(NSArray *)arg1 ;
-(void)setOrderedRecentAndRelevantHeaderStrings:(NSArray *)arg1 ;
-(NSArray *)clientRelevantAchievements;
-(void)setAchievementsDataQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setOverrideDisplayState:(long long)arg1 ;
-(void)setQueryRetryDelay:(double)arg1 ;
-(os_unfair_lock_s)modelLock;
-(void)setModelLock:(os_unfair_lock_s)arg1 ;
-(NSHashTable *)initialLoadObservers;
-(void)setInitialLoadObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)recentAndRelevantSectionObservers;
-(void)setRecentAndRelevantSectionObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)mainSectionObservers;
-(void)setMainSectionObservers:(NSHashTable *)arg1 ;
@end

