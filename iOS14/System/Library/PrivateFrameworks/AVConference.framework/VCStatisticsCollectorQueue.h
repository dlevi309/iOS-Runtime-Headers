/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface VCStatisticsCollectorQueue : NSObject {

	OpaqueFigThreadRef _thread;
	BOOL _isThreadRunning;
	BOOL _shouldBlockWhenFull;
	SCD_Struct_VC147 _messageQueue[300];
	int _firstMessageIndex;
	int _nextMessageIndex;
	int _maxQueueSize;
	int _almostFullQueueSize;
	/*^block*/id _messageHandler;
	opaque_pthread_mutex_t _queueMutex;
	opaque_pthread_cond_t _queueNotFullCondition;
	opaque_pthread_cond_t _queueNotEmptyCondition;
	opaque_pthread_mutex_t _waitMutex;
	opaque_pthread_cond_t _waitCondition;
	BOOL _shouldProcessMessageOnExternalThread;
	BOOL _shouldProcessMessageImmediately;
	unsigned _queueProcessWaitTimeMs;

}

@property (readonly) BOOL isThreadRunning;              //@synthesize isThreadRunning=_isThreadRunning - In the implementation block
@property (copy) id messageHandler;                     //@synthesize messageHandler=_messageHandler - In the implementation block
-(void)processMessage:(SCD_Struct_AV33)arg1 ;
-(void)start;
-(id)messageHandler;
-(void)stop;
-(BOOL)enqueue:(SCD_Struct_AV33)arg1 ;
-(int)queueSize;
-(void)setMessageHandler:(id)arg1 ;
-(void)dealloc;
-(id)initWithQueueSize:(int)arg1 shouldBlockWhenFull:(BOOL)arg2 queueWaitTimeMs:(unsigned)arg3 useExternalThread:(BOOL)arg4 ;
-(void)drainAndProcessAllStatistics;
-(BOOL)addStatisticsMessage:(SCD_Struct_AV33)arg1 ;
-(void)stopThread;
-(BOOL)dequeue:(SCD_Struct_AV33*)arg1 ;
-(BOOL)isQueueFull;
-(void)cancelWait;
-(void)waitBeforeProcessingQueue;
-(BOOL)isThreadRunning;
@end

