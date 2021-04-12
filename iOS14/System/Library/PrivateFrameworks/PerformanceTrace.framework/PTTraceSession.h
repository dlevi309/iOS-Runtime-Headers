/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PerformanceTrace.framework/PerformanceTrace
*/


@protocol PTTraceSessionDelegate;
@class PTTraceConfig, NSXPCConnection;

@interface PTTraceSession : NSObject {

	BOOL _isValid;
	PTTraceConfig* _config;
	id<PTTraceSessionDelegate> _delegate;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;                     //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) PTTraceConfig * config;                           //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) id<PTTraceSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isValid;                                   //@synthesize isValid=_isValid - In the implementation block
+(id)initWithConfig:(id)arg1 ;
-(PTTraceConfig *)config;
-(id)init;
-(id<PTTraceSessionDelegate>)delegate;
-(void)setDelegate:(id<PTTraceSessionDelegate>)arg1 ;
-(BOOL)isValid;
-(NSXPCConnection *)connection;
-(void)_ping:(id)arg1 ;
-(void)setConfig:(PTTraceConfig *)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)_invalidateSession;
-(void)_initConnection;
-(id)_getRemoteObjectProxy;
-(void)stopPerformanceTrace;
-(void)performanceTraceDidStart:(id)arg1 ;
-(void)performanceTraceDidStop:(id)arg1 ;
-(void)performanceTraceDidComplete:(id)arg1 withToken:(id)arg2 withError:(id)arg3 ;
-(void)_didPingService:(id)arg1 ;
-(void)startPerformanceTrace;
@end

