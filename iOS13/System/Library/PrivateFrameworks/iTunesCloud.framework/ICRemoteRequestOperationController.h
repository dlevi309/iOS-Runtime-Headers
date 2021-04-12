/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_init;
-(id)_clientConnection;
-(void)_willBeginExecutingRemoteRequestOperation;
-(void)_didEndExecutingRemoteRequestOperation;
-(void)performRemoteRequestOperationWithExecutionContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_scheduleInvalidationOfClientConnection;
-(void)_cancelClientConnectionInvalidationTimer;
-(void)_invalidateClientConnection;
-(void)_clientConnectionInvalidationTimerDidExpire;
@end

