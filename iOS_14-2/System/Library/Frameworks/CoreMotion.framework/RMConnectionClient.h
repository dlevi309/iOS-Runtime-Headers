/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <libobjc.A.dylib/RMConnectionLifecycleDelegate.h>
#import <libobjc.A.dylib/RMConnectionStreamConsumingDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class RMConnectionEndpoint, NSString, NSObject, NSMutableArray;

@interface RMConnectionClient : NSObject <RMConnectionLifecycleDelegate, RMConnectionStreamConsumingDelegate> {

	BOOL _valid;
	RMConnectionEndpoint* _endpoint;
	NSString* _serviceName;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _streamingDataCallback;
	/*^block*/id _messageHandler;
	NSMutableArray* _messageCache;
	NSObject*<OS_dispatch_source> _connectionTimer;
	unsigned long long _connectionTimerDelay;

}

@property (nonatomic,retain) RMConnectionEndpoint * endpoint;                            //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                                     //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id streamingDataCallback;                                     //@synthesize streamingDataCallback=_streamingDataCallback - In the implementation block
@property (nonatomic,copy) id messageHandler;                                            //@synthesize messageHandler=_messageHandler - In the implementation block
@property (nonatomic,retain) NSMutableArray * messageCache;                              //@synthesize messageCache=_messageCache - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> connectionTimer;              //@synthesize connectionTimer=_connectionTimer - In the implementation block
@property (assign,nonatomic) unsigned long long connectionTimerDelay;                    //@synthesize connectionTimerDelay=_connectionTimerDelay - In the implementation block
@property (assign,getter=isValid,nonatomic) BOOL valid;                                  //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setValid:(BOOL)arg1 ;
-(NSMutableArray *)messageCache;
-(void)setMessageCache:(NSMutableArray *)arg1 ;
-(void)requestStreamingWithMessage:(id)arg1 data:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)streamingDataCallback;
-(void)replayCache;
-(void)setStreamingDataCallback:(id)arg1 ;
-(void)stopStreamingInternal;
-(void)stopStreaming;
-(unsigned long long)connectionTimerDelay;
-(void)setConnectionTimerDelay:(unsigned long long)arg1 ;
-(id)initWithQueue:(id)arg1 serviceName:(id)arg2 messageHandler:(/*^block*/id)arg3 ;
-(void)sendCachedMessage:(id)arg1 withData:(id)arg2 ;
-(void)handleDaemonStart;
-(id)messageHandler;
-(void)setEndpoint:(RMConnectionEndpoint *)arg1 ;
-(void)connect;
-(RMConnectionEndpoint *)endpoint;
-(NSObject*<OS_dispatch_source>)connectionTimer;
-(BOOL)isValid;
-(NSString *)serviceName;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setConnectionTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMessageHandler:(id)arg1 ;
-(void)endpoint:(id)arg1 didReceiveMessage:(id)arg2 withData:(id)arg3 replyBlock:(/*^block*/id)arg4 ;
-(void)endpoint:(id)arg1 didReceiveStreamedData:(id)arg2 ;
-(void)endpointWasInvalidated:(id)arg1 ;
-(void)endpointWasInterrupted:(id)arg1 ;
-(void)sendMessage:(id)arg1 withData:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

