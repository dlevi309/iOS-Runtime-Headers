/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface VCStatisticsCollectorQueue : NSObject {

	OpaqueFigThreadRef _thread;
	BOOL _isThreadRunning;
	BOOL _shouldBlockWhenFull;
	SCD_Struct_VC123 _messageQueue[100];
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
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)setMessageHandler:(id)arg1 ;
-(id)messageHandler;
-(BOOL)enqueue:(SCD_Struct_AV29)arg1 ;
-(int)queueSize;
-(id)initWithQueueSize:(int)arg1 shouldBlockWhenFull:(BOOL)arg2 queueWaitTimeMs:(unsigned)arg3 useExternalThread:(BOOL)arg4 ;
-(BOOL)addStatisticsMessage:(SCD_Struct_AV29)arg1 ;
-(void)drainAndProcessAllStatistics;
-(void)stopThread;
-(BOOL)dequeue:(SCD_Struct_AV29*)arg1 ;
-(void)processMessage:(SCD_Struct_AV29)arg1 ;
-(BOOL)isQueueFull;
-(void)cancelWait;
-(void)waitBeforeProcessingQueue;
-(BOOL)isThreadRunning;
@end

