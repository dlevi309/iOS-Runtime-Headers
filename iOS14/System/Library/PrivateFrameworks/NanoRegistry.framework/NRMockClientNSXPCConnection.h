/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) NSXPCInterface * exportedInterface;                            //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (nonatomic,retain) id exportedObject;                                             //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,retain) NSXPCInterface * remoteObjectInterface; 
@property (nonatomic,retain,readonly) id remoteObjectProxy; 
@property (nonatomic,copy) id interruptionHandler;                                          //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                          //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) int processIdentifier; 
@property (nonatomic,retain,readonly) NSString * processName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setExportedObject:(id)arg1 ;
-(void)_invalidate;
-(void)setRemoteObjectInterface:(NSXPCInterface *)arg1 ;
-(NRMockServerNSXPCConnection *)serverConnection;
-(void)suspend;
-(id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2 ;
-(id)remoteObjectProxy;
-(int)processIdentifier;
-(id)exportedObject;
-(BOOL)invalidated;
-(NSXPCInterface *)remoteObjectInterface;
-(NSString *)processName;
-(NSXPCInterface *)exportedInterface;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)_setQueue:(id)arg1 ;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)remoteObjectProxyAsync:(BOOL)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)valueForEntitlement:(id)arg1 ;
-(id)invalidationHandler;
-(void)resume;
-(id)interruptionHandler;
-(void)runCompletionBlock:(/*^block*/id)arg1 ;
@end

