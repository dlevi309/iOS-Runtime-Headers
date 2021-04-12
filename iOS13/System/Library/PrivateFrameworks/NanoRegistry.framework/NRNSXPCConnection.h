/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <libobjc.A.dylib/NRNSXPCConnectionProtocol.h>

@class NSXPCInterface, NSString, NSXPCConnection;

@interface NRNSXPCConnection : NSObject <NRNSXPCConnectionProtocol> {

	NSXPCConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSXPCInterface * exportedInterface; 
@property (nonatomic,retain) id exportedObject; 
@property (nonatomic,retain) NSXPCInterface * remoteObjectInterface; 
@property (nonatomic,retain,readonly) id remoteObjectProxy; 
@property (nonatomic,copy) id interruptionHandler; 
@property (nonatomic,copy) id invalidationHandler; 
@property (nonatomic,readonly) int processIdentifier; 
@property (nonatomic,retain,readonly) NSString * processName; 
-(void)invalidate;
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
-(id)initWithConnection:(id)arg1 ;
-(void)runCompletionBlock:(/*^block*/id)arg1 ;
@end

