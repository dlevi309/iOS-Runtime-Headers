/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(unsigned long long)category;
-(void)setCategory:(unsigned long long)arg1 ;
-(void)_setupConnection;
-(void)handleDaemonStart;
-(id)initWithCategory:(unsigned long long)arg1 consumerType:(unsigned long long)arg2 ;
-(id)initWithCategory:(unsigned long long)arg1 consumerType:(unsigned long long)arg2 queue:(id)arg3 ;
-(void)fetchPredictionsWithLimit:(unsigned long long)arg1 providesFeedback:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchPredictionsWithLimit:(unsigned long long)arg1 providesFeedback:(BOOL)arg2 criteria:(id)arg3 timeout:(unsigned long long)arg4 handler:(/*^block*/id)arg5 ;
-(void)fetchPredictionsWithLimit:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(unsigned long long)consumerType;
-(void)setConsumerType:(unsigned long long)arg1 ;
-(void)fetchPredictionsWithLimit:(unsigned long long)arg1 criteria:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchPredictionsWithLimit:(unsigned long long)arg1 providesFeedback:(BOOL)arg2 criteria:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)fetchPredictionsWithLimit:(unsigned long long)arg1 criteria:(id)arg2 timeout:(unsigned long long)arg3 handler:(/*^block*/id)arg4 ;
-(void)startMonitoringForPredictionsWithLimit:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopMonitoringForPredictions;
-(void)receivePrediction:(id)arg1 consumer:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
@end

