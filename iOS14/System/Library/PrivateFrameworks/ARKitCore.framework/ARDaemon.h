/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@class NSTimer, ARDaemonServiceListener, ARServer, NSDictionary;

@interface ARDaemon : NSObject {

	NSTimer* _heartbeatTimer;
	ARDaemonServiceListener* _listener;
	BOOL _anonymousListenerEnabled;
	ARServer* _server;

}

@property (nonatomic,readonly) ARServer * server;                     //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) NSDictionary * listeners; 
+(id)anonymousListenerDaemon;
-(void)shutdown;
-(NSDictionary *)listeners;
-(id)init;
-(void)startup;
-(void)printInfo;
-(ARServer *)server;
-(void)dealloc;
-(id)initWithAnonymousListenerEnabled:(BOOL)arg1 ;
-(void)startWithReplayURL:(id)arg1 onReplayStarted:(/*^block*/id)arg2 onReplayStopped:(/*^block*/id)arg3 onReplayFailed:(/*^block*/id)arg4 ;
-(id)listenerEndPointForServiceNamed:(id)arg1 ;
@end

