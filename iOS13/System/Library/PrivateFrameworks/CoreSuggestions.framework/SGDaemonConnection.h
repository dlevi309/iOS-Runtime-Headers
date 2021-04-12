/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


@protocol OS_dispatch_queue;
#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class NSString, NSXPCInterface, NSObject, NSMutableArray, NSXPCConnection;

@interface SGDaemonConnection : NSObject {

	NSString* _machServiceName;
	NSXPCInterface* _xpcInterface;
	NSObject*<OS_dispatch_queue> _connectLock;
	NSMutableArray* _abortBlocks;
	opaque_pthread_mutex_t _abortLock;
	NSXPCConnection* _xpcConnection;

}
+(void)_useSyncXPCWithBlock:(/*^block*/id)arg1 ;
+(BOOL)usingSyncXPC;
-(void)dealloc;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(void)disconnect;
-(id)xpcConnection;
-(void)_connectToServer;
-(id)initWithMachServiceName:(id)arg1 xpcInterface:(id)arg2 ;
-(void)_callAbortBlocks;
-(id)waitUntilReturn:(/*^block*/id)arg1 withTimeout:(double)arg2 error:(id*)arg3 ;
-(void)addConnectionInterruptedHandler:(/*^block*/id)arg1 ;
@end

