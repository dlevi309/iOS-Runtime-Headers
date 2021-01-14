/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
*/


@protocol OS_dispatch_queue, UWBSessionDelegateProxyProtocol;
#import <NearbyInteraction/NearbyInteraction-Structs.h>
@class NSXPCConnection, NSObject, RBSAssertion, NSUUID;

@interface NIServerConnection : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	RBSAssertion* _assertion;
	id<UWBSessionDelegateProxyProtocol> _exportedObject;
	NSUUID* _sessionID;

}

@property (copy) id interruptionHandler; 
@property (copy) id invalidationHandler; 
@property (retain) id<UWBSessionDelegateProxyProtocol> exportedObject;              //@synthesize exportedObject=_exportedObject - In the implementation block
@property (readonly) NSUUID * sessionID;                                            //@synthesize sessionID=_sessionID - In the implementation block
-(void)setExportedObject:(id<UWBSessionDelegateProxyProtocol>)arg1 ;
-(NSUUID *)sessionID;
-(id)remoteObjectProxy;
-(id<UWBSessionDelegateProxyProtocol>)exportedObject;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)synchronousRemoteObjectProxy;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)resume;
-(id)interruptionHandler;
-(void)dealloc;
-(id)initWithSessionID:(id)arg1 queue:(id)arg2 exportedObject:(id)arg3 ;
-(BOOL)isSandboxExtensionRequired;
-(SCD_Struct_NI8)auditTokenForConnection;
-(id)allowTasksToFinishWhileInBackground;
-(void)stopAllowingTasksToFinishWhileInBackground;
@end

