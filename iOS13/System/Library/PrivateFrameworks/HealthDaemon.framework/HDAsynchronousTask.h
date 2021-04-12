/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface HDAsynchronousTask : NSObject {

	BOOL _hasTimeout;
	/*^block*/id _handler;
	NSObject*<OS_dispatch_queue> _queue;
	double _timeout;
	/*^block*/id _checkpointHandler;

}

@property (nonatomic,copy) id handler;                                        //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) double timeout;                                  //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) BOOL hasTimeout;                                 //@synthesize hasTimeout=_hasTimeout - In the implementation block
@property (nonatomic,copy) id checkpointHandler;                              //@synthesize checkpointHandler=_checkpointHandler - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(void)setHasTimeout:(BOOL)arg1 ;
-(BOOL)hasTimeout;
-(void)setCheckpointHandler:(id)arg1 ;
-(id)checkpointHandler;
@end

