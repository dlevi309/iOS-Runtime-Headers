/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
*/


@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_source;
@class NSMutableDictionary, NSObject;

@interface PLClientLogAggregator : NSObject {

	unsigned char _numAggregates;
	unsigned char _numAggregations;
	NSMutableDictionary* _aggregatesCache;
	NSObject*<OS_os_log> _logHandle;
	NSObject*<OS_dispatch_queue> _executionQueue;
	NSObject*<OS_dispatch_source> _flushTimer;

}

@property (readonly) NSMutableDictionary * aggregatesCache;                  //@synthesize aggregatesCache=_aggregatesCache - In the implementation block
@property (assign) unsigned char numAggregates;                              //@synthesize numAggregates=_numAggregates - In the implementation block
@property (assign) unsigned char numAggregations;                            //@synthesize numAggregations=_numAggregations - In the implementation block
@property (retain) NSObject*<OS_os_log> logHandle;                           //@synthesize logHandle=_logHandle - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> executionQueue;              //@synthesize executionQueue=_executionQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> flushTimer;                 //@synthesize flushTimer=_flushTimer - In the implementation block
+(id)sharedInstance;
-(void)setExecutionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)setFlushTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)_aggregateForClientID:(id)arg1 eventName:(id)arg2 eventDictionary:(id)arg3 configuration:(id)arg4 ;
-(BOOL)_isEventInputValid:(id)arg1 configuration:(id)arg2 ;
-(unsigned char)numAggregations;
-(id)_eventAggregate:(id)arg1 eventName:(id)arg2 aggregateKey:(id)arg3 valueLabel:(id)arg4 ;
-(BOOL)_setEventAggregate:(id)arg1 eventName:(id)arg2 aggregateKey:(id)arg3 valueLabel:(id)arg4 value:(id)arg5 ;
-(void)setNumAggregations:(unsigned char)arg1 ;
-(void)_scheduleFlushTimer;
-(NSMutableDictionary *)aggregatesCache;
-(void)cleanCache;
-(void)setNumAggregates:(unsigned char)arg1 ;
-(unsigned char)numAggregates;
-(BOOL)aggregateForClientID_async:(short)arg1 eventName:(id)arg2 eventDictionary:(id)arg3 configuration:(id)arg4 ;
-(void)setLogHandle:(NSObject*<OS_os_log>)arg1 ;
-(NSObject*<OS_dispatch_queue>)executionQueue;
-(NSObject*<OS_os_log>)logHandle;
-(NSObject*<OS_dispatch_source>)flushTimer;
-(void)_flushToPowerLog;
@end

