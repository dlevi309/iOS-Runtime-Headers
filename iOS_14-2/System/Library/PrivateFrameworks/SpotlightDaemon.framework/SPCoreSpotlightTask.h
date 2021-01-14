/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_makeDisabledBundlesQueryStringForQueryContext:(id)arg1 ;
+(id)_makeFilterQueryStringForQueryContext:(id)arg1 ;
+(SIQueryRef)_makeSIQueryWithQueryString:(id)arg1 queryContext:(id)arg2 ;
+(id)_makeBundleQueryStringForQueryContext:(id)arg1 ;
-(NSMutableArray *)jobs;
-(NSString *)clientBundleID;
-(void)setCanceled:(BOOL)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(BOOL)finished;
-(CSSearchQueryContext *)queryContext;
-(void)setResultsQueue:(SPQueryResultsQueue *)arg1 ;
-(void)start;
-(void)setQueryContext:(CSSearchQueryContext *)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(NSString *)queryString;
-(BOOL)canceled;
-(void)setQueryString:(NSString *)arg1 ;
-(BOOL)hasPausedResults;
-(void)setJobs:(NSMutableArray *)arg1 ;
-(SPQueryResultsQueue *)resultsQueue;
-(void)setFinished:(BOOL)arg1 ;
-(void)pauseResults;
-(void)schedule;
-(void)resumeResults;
-(void)finishWithError:(id)arg1 ;
-(SIQueryRef)siQuery;
-(void)setQueryID:(long long)arg1 ;
-(BOOL)addJob:(id)arg1 ;
-(void)cancel;
-(long long)queryID;
-(double)startTime;
-(void)dealloc;
-(void)removeJob:(id)arg1 ;
-(void)setHasPausedResults:(BOOL)arg1 ;
-(id)initWithQueryString:(id)arg1 queryContext:(id)arg2 ;
-(void)setSiQuery:(SIQueryRef)arg1 ;
-(BOOL)willAsyncStart;
-(void)setWillAsyncStart:(BOOL)arg1 ;
-(id)scheduleBlock;
-(void)setScheduleBlock:(id)arg1 ;
@end

