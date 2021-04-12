/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface ASDInGameAnalytics : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
+(id)interface;
+(id)_sharedInstance;
+(void)sendHeartbeatForSessionWithID:(id)arg1 ;
+(void)gamePlayDidBeginWithCompletion:(/*^block*/id)arg1 ;
+(void)gamePlayDidEndWithReason:(long long)arg1 andSessionID:(id)arg2 ;
-(id)init;
-(void)_connect;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
@end

