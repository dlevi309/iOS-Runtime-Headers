/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@interface PFDispatchQueueStatisticsBlockInfo : NSObject {

	BOOL _skippedExecuting;
	unsigned long long _receivedTimestamp;
	unsigned long long _enqueueTimestamp;
	unsigned long long _dequeueTimestamp;
	unsigned long long _executionTimestamp;
	unsigned long long _completionTimestamp;

}

@property (assign) BOOL skippedExecuting;                                 //@synthesize skippedExecuting=_skippedExecuting - In the implementation block
@property (readonly) unsigned long long receivedTimestamp;                //@synthesize receivedTimestamp=_receivedTimestamp - In the implementation block
@property (readonly) unsigned long long enqueueTimestamp;                 //@synthesize enqueueTimestamp=_enqueueTimestamp - In the implementation block
@property (readonly) unsigned long long dequeueTimestamp;                 //@synthesize dequeueTimestamp=_dequeueTimestamp - In the implementation block
@property (readonly) unsigned long long executionTimestamp;               //@synthesize executionTimestamp=_executionTimestamp - In the implementation block
@property (readonly) unsigned long long completionTimestamp;              //@synthesize completionTimestamp=_completionTimestamp - In the implementation block
+(void)initialize;
-(id)init;
-(unsigned long long)currentAbsoluteTime;
-(unsigned long long)nsecBetween:(unsigned long long)arg1 and:(unsigned long long)arg2 ;
-(void)blockEnqueued;
-(void)blockDequeued;
-(void)blockWillStart;
-(void)blockCompleted;
-(unsigned long long)executionLatency;
-(unsigned long long)executionTime;
-(unsigned long long)receivedTimestamp;
-(unsigned long long)enqueueTimestamp;
-(unsigned long long)dequeueTimestamp;
-(unsigned long long)executionTimestamp;
-(unsigned long long)completionTimestamp;
-(BOOL)skippedExecuting;
-(void)setSkippedExecuting:(BOOL)arg1 ;
@end

