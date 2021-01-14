/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext, FCCoreConfiguration;
@class FCFeedDatabase, NSArray, FCEdgeCacheHint, NSMutableArray, NSDictionary, NSMutableDictionary, FCHeldRecords;

@interface FCFeedRequestOperation : FCOperation {

	id<FCContentContext> _context;
	id<FCCoreConfiguration> _configuration;
	FCFeedDatabase* _feedDatabase;
	NSArray* _feedRequests;
	unsigned long long _maxCount;
	long long _options;
	NSArray* _feedTransformations;
	FCEdgeCacheHint* _edgeCacheHint;
	unsigned long long _expectedNetworkEventCount;
	/*^block*/id _requestCompletionHandler;
	/*^block*/id _requestCompletionHandlerWithHeldRecords;
	NSMutableArray* _mutableNetworkEvents;
	NSDictionary* _feedRequestsByFeedID;
	NSDictionary* _databaseLookupsByFeedID;
	NSMutableDictionary* _resultFeedResponses;
	FCHeldRecords* _resultHeldArticleRecords;
	FCHeldRecords* _resultHeldTagRecords;
	FCHeldRecords* _resultHeldIssueRecords;

}

@property (nonatomic,retain) NSMutableArray * mutableNetworkEvents;                     //@synthesize mutableNetworkEvents=_mutableNetworkEvents - In the implementation block
@property (nonatomic,retain) NSDictionary * feedRequestsByFeedID;                       //@synthesize feedRequestsByFeedID=_feedRequestsByFeedID - In the implementation block
@property (nonatomic,retain) NSDictionary * databaseLookupsByFeedID;                    //@synthesize databaseLookupsByFeedID=_databaseLookupsByFeedID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * resultFeedResponses;                 //@synthesize resultFeedResponses=_resultFeedResponses - In the implementation block
@property (nonatomic,retain) FCHeldRecords * resultHeldArticleRecords;                  //@synthesize resultHeldArticleRecords=_resultHeldArticleRecords - In the implementation block
@property (nonatomic,retain) FCHeldRecords * resultHeldTagRecords;                      //@synthesize resultHeldTagRecords=_resultHeldTagRecords - In the implementation block
@property (nonatomic,retain) FCHeldRecords * resultHeldIssueRecords;                    //@synthesize resultHeldIssueRecords=_resultHeldIssueRecords - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<FCCoreConfiguration> configuration;                     //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCFeedDatabase * feedDatabase;                             //@synthesize feedDatabase=_feedDatabase - In the implementation block
@property (nonatomic,copy) NSArray * feedRequests;                                      //@synthesize feedRequests=_feedRequests - In the implementation block
@property (assign,nonatomic) unsigned long long maxCount;                               //@synthesize maxCount=_maxCount - In the implementation block
@property (assign,nonatomic) long long options;                                         //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSArray * feedTransformations;                               //@synthesize feedTransformations=_feedTransformations - In the implementation block
@property (nonatomic,copy) FCEdgeCacheHint * edgeCacheHint;                             //@synthesize edgeCacheHint=_edgeCacheHint - In the implementation block
@property (assign,nonatomic) unsigned long long expectedNetworkEventCount;              //@synthesize expectedNetworkEventCount=_expectedNetworkEventCount - In the implementation block
@property (nonatomic,readonly) NSArray * networkEvents; 
@property (nonatomic,copy) id requestCompletionHandler;                                 //@synthesize requestCompletionHandler=_requestCompletionHandler - In the implementation block
@property (nonatomic,copy) id requestCompletionHandlerWithHeldRecords;                  //@synthesize requestCompletionHandlerWithHeldRecords=_requestCompletionHandlerWithHeldRecords - In the implementation block
+(void)prewarm;
+(void)initialize;
+(id)feedRequestContentEnvironmentTokenWithContext:(id)arg1 ;
+(BOOL)_orderFeedTopKEnabled;
-(BOOL)validateOperation;
-(void)setFeedDatabase:(FCFeedDatabase *)arg1 ;
-(void)setMaxCount:(unsigned long long)arg1 ;
-(BOOL)canRetryWithError:(id)arg1 retryAfter:(id*)arg2 ;
-(unsigned long long)maxCount;
-(unsigned long long)maxRetries;
-(void)resetForRetry;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)prepareOperation;
-(void)_gatherAllOrderFeedResponsesWithCompletionHandler:(/*^block*/id)arg1 ;
-(FCFeedDatabase *)feedDatabase;
-(FCEdgeCacheHint *)edgeCacheHint;
-(id)init;
-(void)setFeedTransformations:(NSArray *)arg1 ;
-(void)setDatabaseLookupsByFeedID:(NSDictionary *)arg1 ;
-(NSArray *)feedRequests;
-(void)setMutableNetworkEvents:(NSMutableArray *)arg1 ;
-(long long)options;
-(BOOL)_shouldReturnItemsFromDroppedFeedResponse:(id)arg1 ;
-(id)requestCompletionHandlerWithHeldRecords;
-(void)setResultHeldTagRecords:(FCHeldRecords *)arg1 ;
-(id<FCContentContext>)context;
-(void)setFeedRequestsByFeedID:(NSDictionary *)arg1 ;
-(void)setOptions:(long long)arg1 ;
-(void)setResultHeldArticleRecords:(FCHeldRecords *)arg1 ;
-(id)_additionalHTTPHeadersForOrderFeedRequest;
-(NSDictionary *)feedRequestsByFeedID;
-(void)_gatherEdgeCachedFeedResponsesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setRequestCompletionHandler:(id)arg1 ;
-(FCHeldRecords *)resultHeldIssueRecords;
-(FCHeldRecords *)resultHeldTagRecords;
-(id<FCCoreConfiguration>)configuration;
-(unsigned long long)_orderFeedTopKFromBin:(long long)arg1 timeInterval:(double)arg2 ;
-(NSDictionary *)databaseLookupsByFeedID;
-(void)setExpectedNetworkEventCount:(unsigned long long)arg1 ;
-(void)setFeedRequests:(NSArray *)arg1 ;
-(NSArray *)feedTransformations;
-(void)setResultHeldIssueRecords:(FCHeldRecords *)arg1 ;
-(NSMutableArray *)mutableNetworkEvents;
-(void)_gatherAllFeedResponsesWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)_networkEventCount;
-(id)_orderFeedIDFromFeedID:(id)arg1 ;
-(void)setResultFeedResponses:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)resultFeedResponses;
-(FCHeldRecords *)resultHeldArticleRecords;
-(id)requestCompletionHandler;
-(NSArray *)networkEvents;
-(id)_normalizedFeedRange:(id)arg1 ;
-(unsigned long long)expectedNetworkEventCount;
-(void)setEdgeCacheHint:(FCEdgeCacheHint *)arg1 ;
-(id)_failureResponseForRequest:(id)arg1 error:(id)arg2 ;
-(void)setRequestCompletionHandlerWithHeldRecords:(id)arg1 ;
-(BOOL)_countOfDroppedFeeds;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(void)setContext:(id<FCContentContext>)arg1 ;
@end

