/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)usingSyncXPC;
+(void)_useSyncXPCWithBlock:(/*^block*/id)arg1 ;
-(void)disconnect;
-(id)xpcConnection;
-(id)waitUntilReturn:(/*^block*/id)arg1 withTimeout:(double)arg2 error:(id*)arg3 ;
-(id)remoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)addConnectionInterruptedHandler:(/*^block*/id)arg1 ;
-(void)_connectToServer;
-(id)initWithMachServiceName:(id)arg1 xpcInterface:(id)arg2 ;
-(void)_callAbortBlocks;
-(void)dealloc;
@end

