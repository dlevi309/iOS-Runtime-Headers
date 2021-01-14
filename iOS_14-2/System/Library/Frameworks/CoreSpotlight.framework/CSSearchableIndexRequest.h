/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/


@class NSData, CSSearchableIndex, NSString, CSDataWrapper;

@interface CSSearchableIndexRequest : NSObject {

	BOOL _shouldThrottle;
	BOOL _started;
	BOOL _finished;
	BOOL _throttled;
	AI _requestID;
	unsigned long long _maxRetryCount;
	NSData* _data;
	/*^block*/id _performBlock;
	/*^block*/id _completionDataBlock;
	/*^block*/id _completionBlock;
	CSSearchableIndex* _index;
	NSString* _label;
	CSDataWrapper* _dataWrapper;
	unsigned long long _retryCount;

}

@property (nonatomic,retain) CSSearchableIndex * index;                     //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) NSString * label;                              //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) CSDataWrapper * dataWrapper;                   //@synthesize dataWrapper=_dataWrapper - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;                 //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) AI requestID;                                  //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) BOOL started;                                  //@synthesize started=_started - In the implementation block
@property (assign,nonatomic) BOOL finished;                                 //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) BOOL throttled;                                //@synthesize throttled=_throttled - In the implementation block
@property (assign,nonatomic) unsigned long long maxRetryCount;              //@synthesize maxRetryCount=_maxRetryCount - In the implementation block
@property (assign,nonatomic) BOOL shouldThrottle;                           //@synthesize shouldThrottle=_shouldThrottle - In the implementation block
@property (nonatomic,readonly) NSData * data;                               //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id performBlock;                                 //@synthesize performBlock=_performBlock - In the implementation block
@property (nonatomic,copy) id completionDataBlock;                          //@synthesize completionDataBlock=_completionDataBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                              //@synthesize completionBlock=_completionBlock - In the implementation block
+(void)initialize;
-(CSSearchableIndex *)index;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)_throttleIfNecessary;
-(BOOL)finished;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(unsigned long long)retryCount;
-(BOOL)shouldThrottle;
-(void)_perform;
-(void)start;
-(void)setDataWrapper:(CSDataWrapper *)arg1 ;
-(BOOL)started;
-(void)_finishWithError:(id)arg1 ;
-(void)setIndex:(CSSearchableIndex *)arg1 ;
-(void)retryIfNecessaryWithError:(id)arg1 ;
-(void)setMaxRetryCount:(unsigned long long)arg1 ;
-(void)setCompletionDataBlock:(id)arg1 ;
-(CSDataWrapper *)dataWrapper;
-(AI)requestID;
-(BOOL)throttled;
-(id)description;
-(unsigned long long)maxRetryCount;
-(void)setFinished:(BOOL)arg1 ;
-(id)performBlock;
-(NSData *)data;
-(void)setPerformBlock:(id)arg1 ;
-(id)completionDataBlock;
-(void)finishWithError:(id)arg1 ;
-(void)setRequestID:(AI)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)_unthrottleIfNecessary;
-(void)retryIfNecessaryWithError:(id)arg1 dataWrapper:(id)arg2 ;
-(void)setStarted:(BOOL)arg1 ;
-(NSString *)label;
-(id)initWithSearchableIndex:(id)arg1 label:(id)arg2 ;
-(void)setThrottled:(BOOL)arg1 ;
-(void)dealloc;
-(void)setShouldThrottle:(BOOL)arg1 ;
@end

