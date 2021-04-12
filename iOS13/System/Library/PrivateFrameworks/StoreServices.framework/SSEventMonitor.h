/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol SSEventMonitorDelegate, OS_dispatch_queue;
@class NSObject, SSXPCConnection;

@interface SSEventMonitor : NSObject {

	id<SSEventMonitorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSXPCConnection* _eventConnection;

}

@property (assign) id<SSEventMonitorDelegate> delegate; 
-(id)init;
-(void)dealloc;
-(id<SSEventMonitorDelegate>)delegate;
-(void)setDelegate:(id<SSEventMonitorDelegate>)arg1 ;
-(void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2 ;
-(void)_connectEventConnection;
@end

