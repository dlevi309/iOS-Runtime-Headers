/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
*/


@protocol OS_dispatch_queue;
@class NSLock, NSXPCConnection, NSObject, NSXPCInterface, NSString, NFWeakReference;

@interface NFCSession : NSObject {

	NSLock* _connectionLock;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	NSXPCInterface* _remoteObjectInterface;
	NSXPCInterface* _exportedObjectInterface;
	NSString* _machServiceName;
	NFWeakReference* _exportedObject;
	NFWeakReference* _delegate;

}
-(void)dealloc;
-(void)_invalidate;
-(id)_connection;
-(id)_connectionLock;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_setConnection:(id)arg1 ;
-(BOOL)_connectIfNeeded;
-(id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 delegate:(id)arg5 ;
-(id)_exportedObjectClassName;
@end

