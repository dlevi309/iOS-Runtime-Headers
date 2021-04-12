/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_invalidate;
-(void)onqueue_getRemoteObjectProxyOnQueue:(/*^block*/id)arg1 ;
-(void)connectionEstablished;
-(id)init;
-(BOOL)shouldEscapeXpcTryCatch;
-(void)invalidated;
-(id)remoteObjectInterface;
-(void)onqueue_ensureConnectionEstablished;
-(void)onqueue_connectionInvalidated;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)exportedInterface;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(void)getRemoteObjectProxyOnQueue:(/*^block*/id)arg1 ;
-(void)onqueue_invalidate;
-(void)onqueue_interrupted;
-(void)onqueue_activate;
-(void)onqueue_ensureXPCStarted;
-(id)machServiceName;
-(void)onqueue_invalidated;
-(void)_activate;
-(void)onqueue_connectionInterrupted;
-(void)interrupted;
-(NSXPCConnection *)connection;
-(void)onqueue_connectionEstablished;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)dealloc;
@end

