/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
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
-(void)dealloc;
-(id<NetDiagnosticsShimDelegate>)delegate;
-(void)setDelegate:(id<NetDiagnosticsShimDelegate>)arg1 ;
-(NSString *)taskName;
-(void)setTaskName:(NSString *)arg1 ;
-(void)invalidateConnections;
-(id)initWithTaskName:(id)arg1 queue:(id)arg2 ;
-(BOOL)startNetDiagnosticTaskWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)stopNetDiagnosticTaskWithReply:(/*^block*/id)arg1 ;
-(BOOL)netDiagnosticTaskStatusWithReply:(/*^block*/id)arg1 ;
-(id)_connectionForServiceNamed:(const char*)arg1 queue:(id)arg2 connectionInvalidHandler:(/*^block*/id)arg3 ;
-(id)createNotificationListener;
-(void)sendNotificationListener;
-(void)connectToNetDiagnosticsd;
@end

