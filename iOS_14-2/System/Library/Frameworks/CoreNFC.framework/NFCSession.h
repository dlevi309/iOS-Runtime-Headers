/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
*/


@protocol OS_dispatch_queue, NFCSessionCallbacks;
@class NSLock, NSXPCConnection, NSObject, NSXPCInterface, NSString;

@interface NFCSession : NSObject {

	NSLock* _connectionLock;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	NSXPCInterface* _remoteObjectInterface;
	NSXPCInterface* _exportedObjectInterface;
	NSString* _machServiceName;
	id _exportedObject;
	id<NFCSessionCallbacks> _delegate;

}
-(void)_invalidate;
-(id)_connectionLock;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)_connectIfNeeded;
-(void)_setConnection:(id)arg1 ;
-(id)_connection;
-(void)dealloc;
-(id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 delegate:(id)arg5 ;
-(id)_exportedObjectClassName;
@end

