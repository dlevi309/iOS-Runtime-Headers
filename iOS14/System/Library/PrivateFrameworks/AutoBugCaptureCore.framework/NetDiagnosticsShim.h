/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/


@protocol OS_xpc_object, OS_dispatch_queue, NetDiagnosticsShimDelegate;
@class NSObject, NSString;

@interface NetDiagnosticsShim : NSObject {

	NSObject*<OS_xpc_object> _netDiagServiceConnection;
	NSObject*<OS_xpc_object> _netDiagNotificationListener;
	NSObject*<OS_xpc_object> _netDiagNotificationConnection;
	NSObject*<OS_dispatch_queue> _netDiagConnQueue;
	NSObject*<OS_dispatch_queue> _netDiagMsgQueue;
	id<NetDiagnosticsShimDelegate> _delegate;
	NSString* _taskName;

}

@property (nonatomic,retain) NSString * taskName;                                  //@synthesize taskName=_taskName - In the implementation block
@property (nonatomic,retain) id<NetDiagnosticsShimDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<NetDiagnosticsShimDelegate>)delegate;
-(void)setDelegate:(id<NetDiagnosticsShimDelegate>)arg1 ;
-(NSString *)taskName;
-(void)setTaskName:(NSString *)arg1 ;
-(void)dealloc;
-(id)initWithTaskName:(id)arg1 queue:(id)arg2 ;
-(BOOL)startNetDiagnosticTaskWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)invalidateConnections;
-(BOOL)stopNetDiagnosticTaskWithReply:(/*^block*/id)arg1 ;
-(BOOL)netDiagnosticTaskStatusWithReply:(/*^block*/id)arg1 ;
-(id)_connectionForServiceNamed:(const char*)arg1 queue:(id)arg2 connectionInvalidHandler:(/*^block*/id)arg3 ;
-(id)createNotificationListener;
-(void)sendNotificationListener;
-(void)connectToNetDiagnosticsd;
@end

