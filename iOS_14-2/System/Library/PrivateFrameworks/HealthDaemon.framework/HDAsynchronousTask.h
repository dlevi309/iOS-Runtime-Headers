/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHandler:(id)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)handler;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setHasTimeout:(BOOL)arg1 ;
-(BOOL)hasTimeout;
-(void)setCheckpointHandler:(id)arg1 ;
-(id)checkpointHandler;
@end

