/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface ASDInGameAnalytics : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
+(id)_sharedInstance;
+(id)interface;
+(void)gamePlayDidBeginWithCompletion:(/*^block*/id)arg1 ;
+(void)sendHeartbeatForSessionWithID:(id)arg1 ;
+(void)gamePlayDidEndWithReason:(long long)arg1 andSessionID:(id)arg2 ;
-(void)_connect;
-(id)init;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
@end

