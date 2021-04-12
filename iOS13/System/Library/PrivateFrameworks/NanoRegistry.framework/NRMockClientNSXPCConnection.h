/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <libobjc.A.dylib/NRNSXPCConnectionProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, NRMockServerNSXPCConnection, NSXPCInterface, NSObject;

@interface NRMockClientNSXPCConnection : NSObject <NRNSXPCConnectionProtocol> {

	NSString* _name;
	NRMockServerNSXPCConnection* _serverConnection;
	id _synchronousRemoteObjectProxy;
	id _remoteObjectProxy;
	BOOL _invalidated;
	NSXPCInterface* _exportedInterface;
	id _exportedObject;
	/*^block*/id _invalidationHandler;
	/*^block*/id _interruptionHandler;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NRMockServerNSXPCConnection * serverConnection; 
@property (nonatomic,readonly) BOOL invalidated;                                            //@synthesize invalidated=_invalidated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSXPCInterface * exportedInterface;                            //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (nonatomic,retain) id exportedObject;                                             //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,retain) NSXPCInterface * remoteObjectInterface; 
@property (nonatomic,retain,readonly) id remoteObjectProxy; 
@property (nonatomic,copy) id interruptionHandler;                                          //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                          //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) int processIdentifier; 
@property (nonatomic,retain,readonly) NSString * processName; 
-(void)invalidate;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)resume;
-(void)setExportedObject:(id)arg1 ;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(void)_setQueue:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(int)processIdentifier;
-(void)setRemoteObjectInterface:(NSXPCInterface *)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(NSString *)processName;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)suspend;
-(id)remoteObjectProxy;
-(id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2 ;
-(id)valueForEntitlement:(id)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(id)exportedObject;
-(NSXPCInterface *)exportedInterface;
-(NSXPCInterface *)remoteObjectInterface;
-(BOOL)invalidated;
-(NRMockServerNSXPCConnection *)serverConnection;
-(void)runCompletionBlock:(/*^block*/id)arg1 ;
-(id)remoteObjectProxyAsync:(BOOL)arg1 ;
@end

