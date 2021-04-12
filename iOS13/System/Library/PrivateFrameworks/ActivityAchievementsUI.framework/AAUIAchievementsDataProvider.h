/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsUI.framework/ActivityAchievementsUI
*/


@protocol AAUIAchievementsDataProviderDelegate, AAUIAchievementsDataProviderInitialLoadListener, OS_dispatch_queue;
#import <ActivityAchievementsUI/ActivityAchievementsUI-Structs.h>
@class HKHealthStore, ACHQuery, ACHVisibilityEvaluator, NSMutableDictionary, NSMutableArray, NSArray, NSDictionary, NSObject;

@interface AAUIAchievementsDataProvider : NSObject {

	BOOL _didFinishInitialLoad;
	os_unfair_lock_s _modelLock;
	id<AAUIAchievementsDataProviderDelegate> _recentAndRelevantSectionDelegate;
	id<AAUIAchievementsDataProviderDelegate> _mainSectionDelegate;
	id<AAUIAchievementsDataProviderInitialLoadListener> _initialLoadListener;
	HKHealthStore* _healthStore;
	ACHQuery* _query;
	ACHVisibilityEvaluator* _visibilityEvaluator;
	NSMutableDictionary* _achievementsBySection;
	NSMutableArray* _recentAchievements;
	NSMutableArray* _relevantAchievements;
	NSArray* _orderedSections;
	NSArray* _orderedMainSectionHeaderStrings;
	NSArray* _orderedRecentAndRelevantHeaderStrings;
	NSDictionary* _clientAchievementsBySection;
	NSArray* _clientRecentAchievements;
	NSArray* _clientRelevantAchievements;
	NSDictionary* _clientAchievementsByEarnedDateComponents;
	NSMutableDictionary* _filteredAchievementsByTemplateUniqueName;
	NSMutableDictionary* _achievementsByTemplateUniqueName;
	NSMutableDictionary* _achievementsByEarnedDateComponents;
	NSObject*<OS_dispatch_queue> _queue;
	long long _overrideDisplayState;
	double _queryRetryDelay;
	long long _queryRetryCount;

}

@property (nonatomic,retain) HKHealthStore * healthStore;                                                                   //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) ACHQuery * query;                                                                              //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) ACHVisibilityEvaluator * visibilityEvaluator;                                                  //@synthesize visibilityEvaluator=_visibilityEvaluator - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * achievementsBySection;                                                   //@synthesize achievementsBySection=_achievementsBySection - In the implementation block
@property (nonatomic,retain) NSMutableArray * recentAchievements;                                                           //@synthesize recentAchievements=_recentAchievements - In the implementation block
@property (nonatomic,retain) NSMutableArray * relevantAchievements;                                                         //@synthesize relevantAchievements=_relevantAchievements - In the implementation block
@property (nonatomic,retain) NSArray * orderedSections;                                                                     //@synthesize orderedSections=_orderedSections - In the implementation block
@property (nonatomic,retain) NSArray * orderedMainSectionHeaderStrings;                                                     //@synthesize orderedMainSectionHeaderStrings=_orderedMainSectionHeaderStrings - In the implementation block
@property (nonatomic,retain) NSArray * orderedRecentAndRelevantHeaderStrings;                                               //@synthesize orderedRecentAndRelevantHeaderStrings=_orderedRecentAndRelevantHeaderStrings - In the implementation block
@property (nonatomic,retain) NSDictionary * clientAchievementsBySection;                                                    //@synthesize clientAchievementsBySection=_clientAchievementsBySection - In the implementation block
@property (nonatomic,retain) NSArray * clientRecentAchievements;                                                            //@synthesize clientRecentAchievements=_clientRecentAchievements - In the implementation block
@property (nonatomic,retain) NSArray * clientRelevantAchievements;                                                          //@synthesize clientRelevantAchievements=_clientRelevantAchievements - In the implementation block
@property (nonatomic,retain) NSDictionary * clientAchievementsByEarnedDateComponents;                                       //@synthesize clientAchievementsByEarnedDateComponents=_clientAchievementsByEarnedDateComponents - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * filteredAchievementsByTemplateUniqueName;                                //@synthesize filteredAchievementsByTemplateUniqueName=_filteredAchievementsByTemplateUniqueName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * achievementsByTemplateUniqueName;                                        //@synthesize achievementsByTemplateUniqueName=_achievementsByTemplateUniqueName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * achievementsByEarnedDateComponents;                                      //@synthesize achievementsByEarnedDateComponents=_achievementsByEarnedDateComponents - In the implementation block
@property (assign,nonatomic) BOOL didFinishInitialLoad;                                                                     //@synthesize didFinishInitialLoad=_didFinishInitialLoad - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                            //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) long long overrideDisplayState;                                                                //@synthesize overrideDisplayState=_overrideDisplayState - In the implementation block
@property (assign,nonatomic) double queryRetryDelay;                                                                        //@synthesize queryRetryDelay=_queryRetryDelay - In the implementation block
@property (assign,nonatomic) long long queryRetryCount;                                                                     //@synthesize queryRetryCount=_queryRetryCount - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s modelLock;                                                                    //@synthesize modelLock=_modelLock - In the implementation block
@property (assign,nonatomic,__weak) id<AAUIAchievementsDataProviderDelegate> recentAndRelevantSectionDelegate;              //@synthesize recentAndRelevantSectionDelegate=_recentAndRelevantSectionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<AAUIAchievementsDataProviderDelegate> mainSectionDelegate;                           //@synthesize mainSectionDelegate=_mainSectionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<AAUIAchievementsDataProviderInitialLoadListener> initialLoadListener;                //@synthesize initialLoadListener=_initialLoadListener - In the implementation block
@property (nonatomic,readonly) long long numberOfRecentAndRelevantSections; 
@property (nonatomic,readonly) long long numberOfSections; 
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(ACHQuery *)query;
-(void)setQuery:(ACHQuery *)arg1 ;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
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
-(id<AAUIAchievementsDataProviderInitialLoadListener>)initialLoadListener;
-(NSArray *)orderedMainSectionHeaderStrings;
-(NSArray *)orderedRecentAndRelevantHeaderStrings;
-(NSArray *)clientRecentAchievements;
-(NSArray *)orderedSections;
-(NSDictionary *)clientAchievementsBySection;
-(NSMutableDictionary *)filteredAchievementsByTemplateUniqueName;
-(NSDictionary *)clientAchievementsByEarnedDateComponents;
-(NSMutableArray *)recentAchievements;
-(NSMutableArray *)relevantAchievements;
-(NSMutableDictionary *)achievementsBySection;
-(void)setClientRecentAchievements:(NSArray *)arg1 ;
-(void)setClientRelevantAchievements:(NSArray *)arg1 ;
-(void)setClientAchievementsBySection:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)achievementsByEarnedDateComponents;
-(void)setClientAchievementsByEarnedDateComponents:(NSDictionary *)arg1 ;
-(long long)overrideDisplayState;
-(void)setDidFinishInitialLoad:(BOOL)arg1 ;
-(id)_achievementsRespectingOverrideDisplayState:(id)arg1 ;
-(long long)_updateAchievement:(id)arg1 ;
-(long long)_deleteAchievement:(id)arg1 fromUnfiltered:(BOOL)arg2 ;
-(void)_deepCopyClientFacingModel;
-(id<AAUIAchievementsDataProviderDelegate>)recentAndRelevantSectionDelegate;
-(id<AAUIAchievementsDataProviderDelegate>)mainSectionDelegate;
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
-(void)stopFetching;
-(void)setInitialLoadListener:(id<AAUIAchievementsDataProviderInitialLoadListener>)arg1 ;
-(id)headerStringForSection:(long long)arg1 isRecentAndRelevant:(BOOL)arg2 ;
-(long long)numberOfRecentAndRelevantSections;
-(long long)numberOfItemsInRecentAndRelevantSection:(long long)arg1 ;
-(id)recentAndRelevantAchievementAtIndexPath:(id)arg1 ;
-(id)achievementAtIndexPath:(id)arg1 ;
-(id)trophyCaseAchievementForTemplateUniqueName:(id)arg1 ;
-(id)achievementForTemplateUniqueName:(id)arg1 ;
-(id)achievementsForDateComponents:(id)arg1 ;
-(BOOL)_shouldShowPerfectWeekAchievement:(double)arg1 ;
-(id)_recentAndRelevantSectionIndexPathForAchievement:(id)arg1 ;
-(id)_mainSectionIndexPathForAchievement:(id)arg1 ;
-(void)setRecentAndRelevantSectionDelegate:(id<AAUIAchievementsDataProviderDelegate>)arg1 ;
-(void)setMainSectionDelegate:(id<AAUIAchievementsDataProviderDelegate>)arg1 ;
-(void)setVisibilityEvaluator:(ACHVisibilityEvaluator *)arg1 ;
-(void)setAchievementsBySection:(NSMutableDictionary *)arg1 ;
-(void)setRecentAchievements:(NSMutableArray *)arg1 ;
-(void)setRelevantAchievements:(NSMutableArray *)arg1 ;
-(void)setOrderedSections:(NSArray *)arg1 ;
-(void)setOrderedMainSectionHeaderStrings:(NSArray *)arg1 ;
-(void)setOrderedRecentAndRelevantHeaderStrings:(NSArray *)arg1 ;
-(NSArray *)clientRelevantAchievements;
-(void)setFilteredAchievementsByTemplateUniqueName:(NSMutableDictionary *)arg1 ;
-(void)setAchievementsByEarnedDateComponents:(NSMutableDictionary *)arg1 ;
-(void)setOverrideDisplayState:(long long)arg1 ;
-(void)setQueryRetryDelay:(double)arg1 ;
-(os_unfair_lock_s)modelLock;
-(void)setModelLock:(os_unfair_lock_s)arg1 ;
@end

