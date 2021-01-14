/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setExportedObject:(id)arg1 ;
-(unsigned)effectiveUserIdentifier;
-(/*^block*/id)_nts_wrappedInterruptionHandler;
-(void)setRemoteObjectInterface:(id)arg1 ;
-(void)suspend;
-(void)_invokeInterruptionHandlerForPromise:(id)arg1 ;
-(id)remoteObjectProxy;
-(int)processIdentifier;
-(id)exportedObject;
-(id)_connectionForPromise:(id)arg1 ;
-(Protocol *)protocol;
-(id)remoteObjectInterface;
-(id)exportedInterface;
-(void)_sendInvocation:(id)arg1 remoteInterface:(id)arg2 remoteProxy:(id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(void)setShouldLaunchMobileMail:(BOOL)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setExportedInterface:(id)arg1 ;
-(void)setInterruptionHandler:(/*^block*/id)arg1 ;
-(void)_finishPromise:(id)arg1 withConnection:(id)arg2 error:(id)arg3 ;
-(id)description;
-(id)initWithProtocol:(id)arg1 ;
-(void)_queue_invokeInvalidationHandler;
-(int)auditSessionIdentifier;
-(void)invalidate;
-(unsigned)effectiveGroupIdentifier;
-(void)setInvalidationHandler:(/*^block*/id)arg1 ;
-(id)_connection;
-(BOOL)shouldLaunchMobileMail;
-(/*^block*/id)invalidationHandler;
-(void)resume;
-(void)_invalidatePromise:(id)arg1 ;
-(/*^block*/id)interruptionHandler;
-(void)dealloc;
@end

