/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/


@protocol OS_dispatch_queue;
@class _DECResult, NSXPCConnection, NSObject, PETScalarEventTracker;

@interface _DECConsumer : NSObject {

	/*^block*/id _handler;
	_DECResult* _cachedResult;
	AQ _category;
	AQ _consumerType;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _startedMonitoring;
	unsigned long long _limit;
	PETScalarEventTracker* _consumerInitTracker;

}

@property (assign) unsigned long long category; 
@property (assign) unsigned long long consumerType; 
-(void)_setupConnection;
-(void)stopMonitoringForPredictions;
-(void)setCategory:(unsigned long long)arg1 ;
-(id)init;
-(void)fetchPredictionsWithLimit:(unsigned long long)arg1 providesFeedback:(BOOL)arg2 criteria:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)handleDaemonStart;
-(void)receivePrediction:(id)arg1 consumer:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)fetchPredictionsWithLimit:(unsigned long long)arg1 providesFeedback:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(unsigned long long)category;
-(void)fetchPredictionsWithLimit:(unsigned long long)arg1 providesFeedback:(BOOL)arg2 criteria:(id)arg3 timeout:(unsigned long long)arg4 handler:(/*^block*/id)arg5 ;
-(id)initWithCategory:(unsigned long long)arg1 consumerType:(unsigned long long)arg2 queue:(id)arg3 ;
-(unsigned long long)consumerType;
-(id)initWithCategory:(unsigned long long)arg1 consumerType:(unsigned long long)arg2 ;
-(void)fetchPredictionsWithLimit:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)invalidate;
-(void)startMonitoringForPredictionsWithLimit:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchPredictionsWithLimit:(unsigned long long)arg1 criteria:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setConsumerType:(unsigned long long)arg1 ;
-(void)fetchPredictionsWithLimit:(unsigned long long)arg1 criteria:(id)arg2 timeout:(unsigned long long)arg3 handler:(/*^block*/id)arg4 ;
-(void)dealloc;
@end

