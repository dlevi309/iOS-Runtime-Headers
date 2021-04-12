/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration;
@class FCCloudContext, FCDateRange, NSArray, NSMapTable, NSDictionary, NSError;

@interface FCMyArticlesOperation : FCOperation {

	BOOL _streamFeedItems;
	BOOL _includeEvergreenFeedItems;
	BOOL _isStreamingFinished;
	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _context;
	FCDateRange* _dateRange;
	long long _streamFeedItemsCount;
	/*^block*/id _feedItemsChangedHandler;
	NSArray* _feedItems;
	NSArray* _sortedNonEditorialFeedItems;
	NSMapTable* _nonEditorialScoreProfiles;
	NSDictionary* _feedContextByFeedID;
	NSError* _error;
	long long _binOverride;
	/*^block*/id _feedItemCompletionBlock;
	unsigned long long _maxNumberOfFeedsToQuery;
	unsigned long long _perFeedLimit;

}

@property (copy) NSArray * feedItems;                                                 //@synthesize feedItems=_feedItems - In the implementation block
@property (copy) NSDictionary * feedContextByFeedID;                                  //@synthesize feedContextByFeedID=_feedContextByFeedID - In the implementation block
@property (copy) NSError * error;                                                     //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL isStreamingFinished;                                //@synthesize isStreamingFinished=_isStreamingFinished - In the implementation block
@property (copy) NSArray * sortedNonEditorialFeedItems;                               //@synthesize sortedNonEditorialFeedItems=_sortedNonEditorialFeedItems - In the implementation block
@property (retain) NSMapTable * nonEditorialScoreProfiles;                            //@synthesize nonEditorialScoreProfiles=_nonEditorialScoreProfiles - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;                     //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                                //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) FCDateRange * dateRange;                                   //@synthesize dateRange=_dateRange - In the implementation block
@property (assign,nonatomic) BOOL streamFeedItems;                                    //@synthesize streamFeedItems=_streamFeedItems - In the implementation block
@property (assign,nonatomic) long long streamFeedItemsCount;                          //@synthesize streamFeedItemsCount=_streamFeedItemsCount - In the implementation block
@property (assign,nonatomic) BOOL includeEvergreenFeedItems;                          //@synthesize includeEvergreenFeedItems=_includeEvergreenFeedItems - In the implementation block
@property (nonatomic,copy) id feedItemsChangedHandler;                                //@synthesize feedItemsChangedHandler=_feedItemsChangedHandler - In the implementation block
@property (assign,nonatomic) long long binOverride;                                   //@synthesize binOverride=_binOverride - In the implementation block
@property (nonatomic,copy) id feedItemCompletionBlock;                                //@synthesize feedItemCompletionBlock=_feedItemCompletionBlock - In the implementation block
@property (assign,nonatomic) unsigned long long maxNumberOfFeedsToQuery;              //@synthesize maxNumberOfFeedsToQuery=_maxNumberOfFeedsToQuery - In the implementation block
@property (assign,nonatomic) unsigned long long perFeedLimit;                         //@synthesize perFeedLimit=_perFeedLimit - In the implementation block
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)setIsStreamingFinished:(BOOL)arg1 ;
-(long long)binOverride;
-(void)setFeedContextByFeedID:(NSDictionary *)arg1 ;
-(FCDateRange *)dateRange;
-(id)init;
-(void)setStreamFeedItemsCount:(long long)arg1 ;
-(id)feedItemsChangedHandler;
-(BOOL)streamFeedItems;
-(void)setSortedNonEditorialFeedItems:(NSArray *)arg1 ;
-(void)setStreamFeedItems:(BOOL)arg1 ;
-(long long)streamFeedItemsCount;
-(void)setFeedItemCompletionBlock:(id)arg1 ;
-(BOOL)includeEvergreenFeedItems;
-(void)_fetchTagsForQueryingWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)sortedNonEditorialFeedItems;
-(FCCloudContext *)context;
-(void)setError:(NSError *)arg1 ;
-(void)setFeedItems:(NSArray *)arg1 ;
-(unsigned long long)maxNumberOfFeedsToQuery;
-(NSError *)error;
-(unsigned long long)perFeedLimit;
-(void)setBinOverride:(long long)arg1 ;
-(void)_appendFeedItems:(id)arg1 forceChangeNotification:(BOOL)arg2 ;
-(id<FCCoreConfiguration>)configuration;
-(void)setPerFeedLimit:(unsigned long long)arg1 ;
-(NSDictionary *)feedContextByFeedID;
-(NSMapTable *)nonEditorialScoreProfiles;
-(NSArray *)feedItems;
-(id)feedItemCompletionBlock;
-(BOOL)isStreamingFinished;
-(void)setMaxNumberOfFeedsToQuery:(unsigned long long)arg1 ;
-(void)setFeedItemsChangedHandler:(id)arg1 ;
-(void)setIncludeEvergreenFeedItems:(BOOL)arg1 ;
-(void)setDateRange:(FCDateRange *)arg1 ;
-(void)setNonEditorialScoreProfiles:(NSMapTable *)arg1 ;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(void)setContext:(FCCloudContext *)arg1 ;
@end

