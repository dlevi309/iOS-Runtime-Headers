/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/


#import <SpotlightDaemon/SpotlightDaemon-Structs.h>
@class NSString, SPQueryResultsQueue, CSSearchQueryContext, NSMutableArray;

@interface SPCoreSpotlightTask : NSObject {

	BOOL _canceled;
	BOOL _finished;
	BOOL _hasPausedResults;
	BOOL _willAsyncStart;
	NSString* _queryString;
	SIQueryRef _siQuery;
	SPQueryResultsQueue* _resultsQueue;
	CSSearchQueryContext* _queryContext;
	long long _queryID;
	/*^block*/id _scheduleBlock;
	/*^block*/id _completionBlock;
	NSMutableArray* _jobs;
	double _startTime;

}

@property (nonatomic,retain) NSMutableArray * jobs;                            //@synthesize jobs=_jobs - In the implementation block
@property (assign,nonatomic) double startTime;                                 //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSString * queryString;                           //@synthesize queryString=_queryString - In the implementation block
@property (assign,nonatomic) SIQueryRef siQuery;                               //@synthesize siQuery=_siQuery - In the implementation block
@property (nonatomic,retain) SPQueryResultsQueue * resultsQueue;               //@synthesize resultsQueue=_resultsQueue - In the implementation block
@property (nonatomic,retain) CSSearchQueryContext * queryContext;              //@synthesize queryContext=_queryContext - In the implementation block
@property (assign,nonatomic) long long queryID;                                //@synthesize queryID=_queryID - In the implementation block
@property (assign) BOOL canceled;                                              //@synthesize canceled=_canceled - In the implementation block
@property (assign,nonatomic) BOOL finished;                                    //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) BOOL hasPausedResults;                            //@synthesize hasPausedResults=_hasPausedResults - In the implementation block
@property (readonly) NSString * clientBundleID; 
@property (assign,nonatomic) BOOL willAsyncStart;                              //@synthesize willAsyncStart=_willAsyncStart - In the implementation block
@property (nonatomic,copy) id scheduleBlock;                                   //@synthesize scheduleBlock=_scheduleBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                                 //@synthesize completionBlock=_completionBlock - In the implementation block
+(id)_makeBundleQueryStringForField:(id)arg1 withBundleIDs:(id)arg2 ;
+(id)_makePrefsQueryStringWithBundleIDs:(id)arg1 ;
+(id)_makeFilterQueryStringForQueryContext:(id)arg1 ;
+(id)_makeBundleQueryStringForQueryContext:(id)arg1 ;
+(id)_makeDisabledBundlesQueryStringForQueryContext:(id)arg1 ;
+(SIQueryRef)_makeSIQueryWithQueryString:(id)arg1 queryContext:(id)arg2 ;
-(void)dealloc;
-(void)cancel;
-(void)start;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)finished;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(BOOL)canceled;
-(void)setCanceled:(BOOL)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)schedule;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(NSMutableArray *)jobs;
-(CSSearchQueryContext *)queryContext;
-(long long)queryID;
-(NSString *)clientBundleID;
-(void)setQueryID:(long long)arg1 ;
-(void)setQueryContext:(CSSearchQueryContext *)arg1 ;
-(void)setJobs:(NSMutableArray *)arg1 ;
-(SPQueryResultsQueue *)resultsQueue;
-(void)setResultsQueue:(SPQueryResultsQueue *)arg1 ;
-(BOOL)hasPausedResults;
-(BOOL)addJob:(id)arg1 ;
-(void)pauseResults;
-(void)resumeResults;
-(void)setHasPausedResults:(BOOL)arg1 ;
-(id)initWithQueryString:(id)arg1 queryContext:(id)arg2 ;
-(void)removeJob:(id)arg1 ;
-(SIQueryRef)siQuery;
-(void)setSiQuery:(SIQueryRef)arg1 ;
-(BOOL)willAsyncStart;
-(void)setWillAsyncStart:(BOOL)arg1 ;
-(id)scheduleBlock;
-(void)setScheduleBlock:(id)arg1 ;
@end

