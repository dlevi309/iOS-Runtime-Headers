/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


#import <SafariShared/SafariShared-Structs.h>
@class WBSHistoryVisit, NSMutableArray, NSURL, NSString, NSDate, NSArray, NSSet, NSData;

@interface WBSHistoryItem : NSObject {

	WBSHistoryVisit* _lastVisit;
	long long _databaseID;
	int _visitCount;
	int _visitCountScore;
	unique_ptr<WBSHistoryItemVisitCountScoresStorage, std::__1::default_delete<WBSHistoryItemVisitCountScoresStorage> >* _visitCountScores;
	NSMutableArray* _redirectSourceItems;
	NSMutableArray* _autocompleteTriggers;
	NSMutableArray* _visits;
	BOOL _shouldRecomputeDerivedVisitCountScores;
	float _cachedTopSitesURLPenalty;
	float _cachedTopSitesVisitScore;
	NSURL* _url;
	NSString* _userVisibleURLString;
	NSString* _urlString;
	double _lastTimeTopSitesScoreWasComputed;

}

@property (nonatomic,readonly) unsigned long long dailyVisitCountScoresCountOnSynchronizationQueue; 
@property (nonatomic,readonly) const int* dailyVisitCountScoresPtrOnSynchronizationQueue; 
@property (nonatomic,readonly) unsigned long long weeklyVisitCountScoresCountOnSynchronizationQueue; 
@property (nonatomic,readonly) const int* weeklyVisitCountScoresPtrOnSynchronizationQueue; 
@property (assign,nonatomic) long long databaseID;                                                                //@synthesize databaseID=_databaseID - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) NSString * urlString;                                                              //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) NSString * userVisibleURLString;                                                   //@synthesize userVisibleURLString=_userVisibleURLString - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                                                       //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * stringForUserTypedDomainExpansion; 
@property (nonatomic,readonly) WBSHistoryVisit * lastVisit; 
@property (nonatomic,readonly) double lastVisitedTimeInterval; 
@property (nonatomic,readonly) NSDate * lastVisitedDate; 
@property (nonatomic,readonly) NSArray * visits;                                                                  //@synthesize visits=_visits - In the implementation block
@property (nonatomic,readonly) int visitCount; 
@property (nonatomic,readonly) int visitCountScore;                                                               //@synthesize visitCountScore=_visitCountScore - In the implementation block
@property (nonatomic,readonly) BOOL shouldRecomputeDerivedVisitCountScores;                                       //@synthesize shouldRecomputeDerivedVisitCountScores=_shouldRecomputeDerivedVisitCountScores - In the implementation block
@property (nonatomic,readonly) BOOL lastVisitWasHTTPNonGet; 
@property (assign,nonatomic) BOOL lastVisitWasFailure; 
@property (nonatomic,readonly) WBSHistoryItem * lastVisitRedirectDestinationItem; 
@property (nonatomic,readonly) WBSHistoryItem * endOfLastVisitRedirectChain; 
@property (nonatomic,readonly) NSArray * redirectSourceItems; 
@property (nonatomic,readonly) WBSHistoryVisit * lastVisitOnSynchronizationQueue; 
@property (nonatomic,readonly) double lastVisitedTimeIntervalOnSynchronizationQueue; 
@property (nonatomic,readonly) NSSet * visitsPendingWriteToDataStoreOnSynchronizationQueue; 
@property (nonatomic,readonly) NSData * dailyVisitCountScoresDataOnSynchronizationQueue; 
@property (nonatomic,readonly) NSData * weeklyVisitCountScoresDataOnSynchronizationQueue; 
@property (nonatomic,readonly) NSArray * autocompleteTriggers; 
@property (nonatomic,readonly) NSData * autocompleteTriggersDataOnSynchronizationQueue; 
@property (assign,nonatomic) float cachedTopSitesURLPenalty;                                                      //@synthesize cachedTopSitesURLPenalty=_cachedTopSitesURLPenalty - In the implementation block
@property (assign,nonatomic) float cachedTopSitesVisitScore;                                                      //@synthesize cachedTopSitesVisitScore=_cachedTopSitesVisitScore - In the implementation block
@property (assign,nonatomic) double lastTimeTopSitesScoreWasComputed;                                             //@synthesize lastTimeTopSitesScoreWasComputed=_lastTimeTopSitesScoreWasComputed - In the implementation block
@property (nonatomic,copy,readonly) NSString * userVisibleHostOrFallbackURLString; 
+(void)initialize;
+(id)synchronizationQueue;
+(double)timeIntervalForDailyAndWeeklyVisitCountScores;
-(void)dealloc;
-(NSURL *)url;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(int)visitCount;
-(NSArray *)visits;
-(BOOL)lastVisitWasFailure;
-(NSString *)urlString;
-(id)initWithURLString:(id)arg1 ;
-(double)lastVisitedTimeInterval;
-(long long)databaseID;
-(void)setDatabaseID:(long long)arg1 ;
-(id)initWithSQLiteRow:(id)arg1 ;
-(NSDate *)lastVisitedDate;
-(NSString *)userVisibleURLString;
-(WBSHistoryItem *)endOfLastVisitRedirectChain;
-(int)visitCountScore;
-(double)lastVisitedTimeIntervalOnSynchronizationQueue;
-(float)cachedTopSitesURLPenalty;
-(float)cachedTopSitesVisitScore;
-(const int*)dailyVisitCountScoresPtrOnSynchronizationQueue;
-(unsigned long long)dailyVisitCountScoresCountOnSynchronizationQueue;
-(const int*)weeklyVisitCountScoresPtrOnSynchronizationQueue;
-(unsigned long long)weeklyVisitCountScoresCountOnSynchronizationQueue;
-(void)setCachedTopSitesURLPenalty:(float)arg1 ;
-(void)setCachedTopSitesVisitScore:(float)arg1 ;
-(void)setLastTimeTopSitesScoreWasComputed:(double)arg1 ;
-(BOOL)lastVisitWasHTTPNonGet;
-(WBSHistoryVisit *)lastVisit;
-(double)lastTimeTopSitesScoreWasComputed;
-(BOOL)addAutocompleteTrigger:(id)arg1 ;
-(void)mergeDataFromItem:(id)arg1 ;
-(NSString *)stringForUserTypedDomainExpansion;
-(void)wasVisited:(id)arg1 ;
-(void)wasRedirectedFrom:(id)arg1 to:(id)arg2 ;
-(void)scoreOfVisit:(id)arg1 wasUpdatedFrom:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
-(void)removeVisits:(id)arg1 candidateLastVisit:(id)arg2 ;
-(void)addExistingVisit:(id)arg1 ;
-(WBSHistoryVisit *)lastVisitOnSynchronizationQueue;
-(void)removeVisitsOnSynchronizationQueue:(id)arg1 candidateLastVisit:(id)arg2 ;
-(void)_accessVisitCountScoresStorage:(/*^block*/id)arg1 ;
-(void)_addVisitToPendingWriteSet:(id)arg1 ;
-(id)_autocompleteTriggersFromSynchronizationQueue;
-(BOOL)_addAutocompleteTriggerFromSynchronizationQueue:(id)arg1 ;
-(id)_visitsPendingWriteSetCreatingIfNeeded:(BOOL)arg1 ;
-(void)addRedirectSourceItemFromSynchronizationQueue:(id)arg1 ;
-(void)_wasVisitedOnSynchronizationQueue:(id)arg1 ;
-(void)_addVisit:(id)arg1 ;
-(void)_addExistingVisit:(id)arg1 ;
-(void)clearVisitsPendingWriteToDataStoreFromSynchronizationQueue;
-(NSString *)userVisibleHostOrFallbackURLString;
-(void)setLastVisitWasFailure:(BOOL)arg1 ;
-(NSArray *)redirectSourceItems;
-(WBSHistoryItem *)lastVisitRedirectDestinationItem;
-(NSArray *)autocompleteTriggers;
-(void)visitWasModified:(id)arg1 ;
-(BOOL)_visitsPendingWriteSetContains:(id)arg1 ;
-(NSSet *)visitsPendingWriteToDataStoreOnSynchronizationQueue;
-(NSData *)dailyVisitCountScoresDataOnSynchronizationQueue;
-(NSData *)weeklyVisitCountScoresDataOnSynchronizationQueue;
-(NSData *)autocompleteTriggersDataOnSynchronizationQueue;
-(void)recomputeDerivedVisitCountScoresWithVisits:(id)arg1 ;
-(BOOL)shouldRecomputeDerivedVisitCountScores;
@end

