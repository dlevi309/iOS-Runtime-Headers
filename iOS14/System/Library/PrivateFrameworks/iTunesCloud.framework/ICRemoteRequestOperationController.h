/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSXPCConnection;

@interface ICRemoteRequestOperationController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _numberOfActiveRequests;
	NSXPCConnection* _clientConnection;
	NSObject*<OS_dispatch_source> _clientConnectionInvalidationTimer;

}
+(id)sharedRemoteRequestOperationController;
-(void)_cancelClientConnectionInvalidationTimer;
-(void)_didEndExecutingRemoteRequestOperation;
-(void)_invalidateClientConnection;
-(void)_willBeginExecutingRemoteRequestOperation;
-(void)_scheduleInvalidationOfClientConnection;
-(void)performRemoteRequestOperationWithExecutionContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_clientConnection;
-(id)_init;
-(void)_clientConnectionInvalidationTimerDidExpire;
@end

