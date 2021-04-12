/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol _HKXPCExportable;
@class NSXPCConnection, NSString;

@interface _HKXPCConnection : NSObject {

	NSXPCConnection* _underlyingConnection;
	id<_HKXPCExportable> _exportedObject;
	NSString* _debugIdentifier;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}

@property (assign,nonatomic,__weak) id<_HKXPCExportable> exportedObject;              //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,copy) NSString * debugIdentifier;                                //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(void)resume;
-(void)setExportedObject:(id<_HKXPCExportable>)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)initWithListenerEndpoint:(id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(id<_HKXPCExportable>)exportedObject;
-(NSString *)debugIdentifier;
-(void)setDebugIdentifier:(NSString *)arg1 ;
-(id)_loggingPrefix;
-(id)initWithUnderlyingConnection:(id)arg1 ;
-(void)unitTest_interrupt;
@end

