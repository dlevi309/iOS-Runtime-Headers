/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
*/

#import <Foundation/NSXPCConnection.h>

@protocol OS_dispatch_queue;
@class NSLock, NSObject, EFPromise, NSXPCInterface, Protocol;

@interface MSXPCConnection : NSXPCConnection {

	NSLock* _lock;
	NSObject*<OS_dispatch_queue> _queue;
	EFPromise* _connectionPromise;
	NSXPCInterface* _remoteObjectInterface;
	NSXPCInterface* _exportedInterface;
	id _exportedObject;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	long long _resumeCount;
	unsigned _state;
	BOOL _shouldLaunchMobileMail;
	Protocol* _protocol;

}

@property (nonatomic,retain,readonly) Protocol * protocol;              //@synthesize protocol=_protocol - In the implementation block
@property (assign,nonatomic) BOOL shouldLaunchMobileMail;               //@synthesize shouldLaunchMobileMail=_shouldLaunchMobileMail - In the implementation block
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)_connection;
-(void)resume;
-(void)setExportedObject:(id)arg1 ;
-(void)setExportedInterface:(id)arg1 ;
-(void)setInvalidationHandler:(/*^block*/id)arg1 ;
-(int)processIdentifier;
-(void)setRemoteObjectInterface:(id)arg1 ;
-(void)setInterruptionHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(Protocol *)protocol;
-(void)suspend;
-(id)remoteObjectProxy;
-(unsigned)effectiveUserIdentifier;
-(/*^block*/id)interruptionHandler;
-(/*^block*/id)invalidationHandler;
-(id)exportedObject;
-(id)exportedInterface;
-(int)auditSessionIdentifier;
-(unsigned)effectiveGroupIdentifier;
-(id)remoteObjectInterface;
-(id)initWithProtocol:(id)arg1 ;
-(void)setShouldLaunchMobileMail:(BOOL)arg1 ;
-(BOOL)shouldLaunchMobileMail;
-(void)_invalidatePromise:(id)arg1 ;
-(id)_connectionForPromise:(id)arg1 ;
-(void)_invokeInterruptionHandlerForPromise:(id)arg1 ;
-(/*^block*/id)_nts_wrappedInterruptionHandler;
-(void)_queue_invokeInvalidationHandler;
-(void)_finishPromise:(id)arg1 withConnection:(id)arg2 error:(id)arg3 ;
-(void)_sendInvocation:(id)arg1 remoteInterface:(id)arg2 remoteProxy:(id)arg3 errorHandler:(/*^block*/id)arg4 ;
@end

