/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <libobjc.A.dylib/NRNSXPCConnectionProtocol.h>

@protocol OS_dispatch_queue;
@class NRMockClientNSXPCConnection, NRMockNSXPCListener, NSObject, NSXPCInterface, NSString;

@interface NRMockServerNSXPCConnection : NSObject <NRNSXPCConnectionProtocol> {

	NRMockClientNSXPCConnection* _clientConnection;
	NRMockNSXPCListener* _listener;
	id _synchronousRemoteObjectProxy;
	id _remoteObjectProxy;
	BOOL _invalidated;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCInterface* _exportedInterface;
	id _exportedObject;
	/*^block*/id _invalidationHandler;
	/*^block*/id _interruptionHandler;

}

@property (nonatomic,retain) NSXPCInterface * exportedInterface;                  //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (nonatomic,retain) id exportedObject;                                   //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,retain) NSXPCInterface * remoteObjectInterface; 
@property (nonatomic,retain,readonly) id remoteObjectProxy; 
@property (nonatomic,copy) id interruptionHandler;                                //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) int processIdentifier; 
@property (nonatomic,retain,readonly) NSString * processName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setExportedObject:(id)arg1 ;
-(void)setRemoteObjectInterface:(NSXPCInterface *)arg1 ;
-(void)suspend;
-(id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2 ;
-(id)remoteObjectProxy;
-(int)processIdentifier;
-(id)exportedObject;
-(NSXPCInterface *)remoteObjectInterface;
-(NSString *)processName;
-(NSXPCInterface *)exportedInterface;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)_setQueue:(id)arg1 ;
-(void)invalidate;
-(id)remoteObjectProxyAsync:(BOOL)arg1 ;
-(id)initWithListener:(id)arg1 clientConnection:(id)arg2 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)valueForEntitlement:(id)arg1 ;
-(id)invalidationHandler;
-(void)resume;
-(id)interruptionHandler;
-(void)dealloc;
-(void)runCompletionBlock:(/*^block*/id)arg1 ;
@end

