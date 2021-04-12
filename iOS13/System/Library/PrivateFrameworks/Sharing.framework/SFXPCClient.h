/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSString;

@interface SFXPCClient : NSObject <NSXPCConnectionDelegate> {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;                            //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)_activate;
-(void)_invalidate;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(id)exportedInterface;
-(id)remoteObjectInterface;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)machServiceName;
-(void)invalidated;
-(void)interrupted;
-(void)getRemoteObjectProxyOnQueue:(/*^block*/id)arg1 ;
-(BOOL)shouldEscapeXpcTryCatch;
-(void)onqueue_activate;
-(void)onqueue_invalidate;
-(void)onqueue_getRemoteObjectProxyOnQueue:(/*^block*/id)arg1 ;
-(void)onqueue_connectionEstablished;
-(void)onqueue_connectionInterrupted;
-(void)onqueue_connectionInvalidated;
-(void)onqueue_ensureXPCStarted;
-(void)onqueue_invalidated;
-(void)onqueue_interrupted;
-(void)onqueue_ensureConnectionEstablished;
-(void)connectionEstablished;
@end

