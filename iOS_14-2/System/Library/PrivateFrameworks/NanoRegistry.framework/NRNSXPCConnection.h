/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <libobjc.A.dylib/NRNSXPCConnectionProtocol.h>

@class NSXPCInterface, NSString, NSXPCConnection;

@interface NRNSXPCConnection : NSObject <NRNSXPCConnectionProtocol> {

	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCInterface * exportedInterface; 
@property (nonatomic,retain) id exportedObject; 
@property (nonatomic,retain) NSXPCInterface * remoteObjectInterface; 
@property (nonatomic,retain,readonly) id remoteObjectProxy; 
@property (nonatomic,copy) id interruptionHandler; 
@property (nonatomic,copy) id invalidationHandler; 
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
-(id)initWithConnection:(id)arg1 ;
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
-(void)setInvalidationHandler:(id)arg1 ;
-(id)valueForEntitlement:(id)arg1 ;
-(id)invalidationHandler;
-(void)resume;
-(id)interruptionHandler;
-(void)runCompletionBlock:(/*^block*/id)arg1 ;
@end

