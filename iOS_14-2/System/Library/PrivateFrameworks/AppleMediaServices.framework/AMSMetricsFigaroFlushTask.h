/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSMetricsFlushStrategy.h>

@protocol AMSBagProtocol, AMSMetricsDataSource;
@class AMSURLSession, NSString, AMSPromise;

@interface AMSMetricsFigaroFlushTask : AMSTask <AMSMetricsFlushStrategy> {

	BOOL _cancelled;
	int _requestCount;
	AMSURLSession* _URLSession;
	id<AMSBagProtocol> _bag;
	id<AMSMetricsDataSource> _dataSource;
	long long _maxRequestCount;
	long long _maxBatchSize;
	NSString* _topic;
	AMSPromise* _currentCancellablePromise;

}

@property (nonatomic,retain) AMSPromise * currentCancellablePromise;              //@synthesize currentCancellablePromise=_currentCancellablePromise - In the implementation block
@property (assign,nonatomic) int requestCount;                                    //@synthesize requestCount=_requestCount - In the implementation block
@property (nonatomic,readonly) AMSURLSession * URLSession;                        //@synthesize URLSession=_URLSession - In the implementation block
@property (nonatomic,retain) id<AMSBagProtocol> bag;                              //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) id<AMSMetricsDataSource> dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) long long maxRequestCount;                           //@synthesize maxRequestCount=_maxRequestCount - In the implementation block
@property (assign,nonatomic) long long maxBatchSize;                              //@synthesize maxBatchSize=_maxBatchSize - In the implementation block
@property (nonatomic,retain) NSString * topic;                                    //@synthesize topic=_topic - In the implementation block
@property (nonatomic,readonly) BOOL cancelled;                                    //@synthesize cancelled=_cancelled - In the implementation block
-(void)setMaxBatchSize:(long long)arg1 ;
-(void)setRequestCount:(int)arg1 ;
-(long long)maxBatchSize;
-(void)setCurrentCancellablePromise:(AMSPromise *)arg1 ;
-(BOOL)cancelled;
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)topic;
-(AMSPromise *)currentCancellablePromise;
-(AMSURLSession *)URLSession;
-(id<AMSMetricsDataSource>)dataSource;
-(id)initWithDataSource:(id)arg1 bag:(id)arg2 ;
-(BOOL)_shouldClearEventsDespiteError:(id)arg1 result:(id)arg2 ;
-(id<AMSBagProtocol>)bag;
-(id)_mescalSignatureWithBodyData:(id)arg1 error:(id*)arg2 ;
-(int)requestCount;
-(void)setDataSource:(id<AMSMetricsDataSource>)arg1 ;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)performFlush;
-(void)setMaxRequestCount:(long long)arg1 ;
-(id)_nextBatchWithConfig:(id)arg1 error:(id*)arg2 ;
-(long long)maxRequestCount;
-(id)_postBatch:(id)arg1 error:(id*)arg2 ;
-(void)cancel;
@end

