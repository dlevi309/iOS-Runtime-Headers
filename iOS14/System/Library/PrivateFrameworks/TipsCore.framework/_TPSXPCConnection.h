/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/


@protocol _TPSXPCExportable;
@class NSXPCConnection, NSString;

@interface _TPSXPCConnection : NSObject {

	NSXPCConnection* _underlyingConnection;
	id<_TPSXPCExportable> _exportedObject;
	NSString* _debugIdentifier;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}

@property (assign,nonatomic,__weak) id<_TPSXPCExportable> exportedObject;              //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,copy) NSString * debugIdentifier;                                 //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                     //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                     //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(void)setExportedObject:(id<_TPSXPCExportable>)arg1 ;
-(id)initWithListenerEndpoint:(id)arg1 ;
-(id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2 ;
-(id<_TPSXPCExportable>)exportedObject;
-(NSString *)debugIdentifier;
-(id)initWithServiceName:(id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)invalidate;
-(void)setDebugIdentifier:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)initWithUnderlyingConnection:(id)arg1 ;
-(id)invalidationHandler;
-(void)resume;
-(id)interruptionHandler;
-(void)dealloc;
@end

