/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSMutableArray* _visits;
	BOOL _shouldRecomputeDerivedVisitCountScores;
	NSURL* _url;
	NSString* _urlString;

}

@property (nonatomic,readonly) unsigned long long dailyVisitCountScoresCountOnSynchronizationQueue; 
@property (nonatomic,readonly) const int* dailyVisitCountScoresPtrOnSynchronizationQueue; 
@property (nonatomic,readonly) unsigned long long weeklyVisitCountScoresCountOnSynchronizationQueue; 
@property (nonatomic,readonly) const int* weeklyVisitCountScoresPtrOnSynchronizationQueue; 
@property (assign,nonatomic) long long databaseID;                                                                //@synthesize databaseID=_databaseID - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) NSString * urlString;                                                              //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) NSString * userVisibleURLString; 
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
@property (nonatomic,readonly) WBSHistoryVisit * lastVisitOnSynchronizationQueue; 
@property (nonatomic,readonly) double lastVisitedTimeIntervalOnSynchronizationQueue; 
@property (nonatomic,readonly) NSSet * visitsPendingWriteToDataStoreOnSynchronizationQueue; 
@property (nonatomic,readonly) NSData * dailyVisitCountScoresDataOnSynchronizationQueue; 
@property (nonatomic,readonly) NSData * weeklyVisitCountScoresDataOnSynchronizationQueue; 
@property (nonatomic,copy,readonly) NSString * userVisibleHostOrFallbackURLString; 
+(void)initialize;
+(double)timeIntervalForDailyAndWeeklyVisitCountScores;
+(id)synchronizationQueue;
-(NSString *)urlString;
-(id)initWithURLString:(id)arg1 ;
-(int)visitCountScore;
-(void)_addVisit:(id)arg1 ;
-(BOOL)shouldRecomputeDerivedVisitCountScores;
-(void)mergeDataFromItem:(id)arg1 ;
-(WBSHistoryVisit *)lastVisit;
-(void)scoreOfVisit:(id)arg1 wasUpdatedFrom:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
-(NSString *)userVisibleURLString;
-(double)lastVisitedTimeInterval;
-(void)removeVisits:(id)arg1 candidateLastVisit:(id)arg2 ;
-(void)removeVisitsOnSynchronizationQueue:(id)arg1 candidateLastVisit:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)updateWithStreamedItem:(const HistoryStreamedItem*)arg1 ;
-(void)setLastVisitWasFailure:(BOOL)arg1 ;
-(NSData *)weeklyVisitCountScoresDataOnSynchronizationQueue;
-(int)visitCount;
-(NSURL *)url;
-(BOOL)_visitsPendingWriteSetContains:(id)arg1 ;
-(void)visitWasModified:(id)arg1 ;
-(const int*)dailyVisitCountScoresPtrOnSynchronizationQueue;
-(NSString *)userVisibleHostOrFallbackURLString;
-(NSString *)stringForUserTypedDomainExpansion;
-(void)_addExistingVisit:(id)arg1 ;
-(NSSet *)visitsPendingWriteToDataStoreOnSynchronizationQueue;
-(BOOL)lastVisitWasFailure;
-(void)recomputeDerivedVisitCountScoresWithVisits:(id)arg1 ;
-(id)_visitsPendingWriteSetCreatingIfNeeded:(BOOL)arg1 ;
-(NSData *)dailyVisitCountScoresDataOnSynchronizationQueue;
-(void)wasVisited:(id)arg1 ;
-(void)clearVisitsPendingWriteToDataStoreFromSynchronizationQueue;
-(const int*)weeklyVisitCountScoresPtrOnSynchronizationQueue;
-(WBSHistoryItem *)endOfLastVisitRedirectChain;
-(void)_wasVisitedOnSynchronizationQueue:(id)arg1 ;
-(NSArray *)visits;
-(unsigned long long)dailyVisitCountScoresCountOnSynchronizationQueue;
-(void)addExistingVisit:(id)arg1 ;
-(NSDate *)lastVisitedDate;
-(void)updateLastVisitIfNil:(id)arg1 ;
-(void)setDatabaseID:(long long)arg1 ;
-(long long)databaseID;
-(void)wasRedirectedFrom:(id)arg1 to:(id)arg2 ;
-(void)_accessVisitCountScoresStorage:(/*^block*/id)arg1 ;
-(BOOL)lastVisitWasHTTPNonGet;
-(id)initWithHistoryStreamedItem:(const HistoryStreamedItem*)arg1 ;
-(WBSHistoryVisit *)lastVisitOnSynchronizationQueue;
-(id)initWithSQLiteRow:(id)arg1 ;
-(void)_addVisitToPendingWriteSet:(id)arg1 ;
-(void)updateWithServiceItem:(id)arg1 ;
-(NSString *)title;
-(void)dealloc;
-(unsigned long long)weeklyVisitCountScoresCountOnSynchronizationQueue;
-(WBSHistoryItem *)lastVisitRedirectDestinationItem;
-(double)lastVisitedTimeIntervalOnSynchronizationQueue;
@end

