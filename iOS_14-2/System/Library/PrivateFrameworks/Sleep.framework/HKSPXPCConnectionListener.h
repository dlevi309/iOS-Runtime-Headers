/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <Sleep/Sleep-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class HKSPXPCConnectionInfo, NSXPCListener, NSMutableSet, NSArray, HKSPXPCClient, NSString;

@interface HKSPXPCConnectionListener : NSObject <NSXPCListenerDelegate, BSDescriptionProviding> {

	os_unfair_lock_s _clientLock;
	HKSPXPCConnectionInfo* _connectionInfo;
	NSXPCListener* _connectionListener;
	NSMutableSet* _connectedClientSet;

}

@property (nonatomic,readonly) HKSPXPCConnectionInfo * connectionInfo;              //@synthesize connectionInfo=_connectionInfo - In the implementation block
@property (nonatomic,readonly) NSXPCListener * connectionListener;                  //@synthesize connectionListener=_connectionListener - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s clientLock;                         //@synthesize clientLock=_clientLock - In the implementation block
@property (nonatomic,readonly) NSMutableSet * connectedClientSet;                   //@synthesize connectedClientSet=_connectedClientSet - In the implementation block
@property (nonatomic,readonly) NSArray * connectedClients; 
@property (nonatomic,readonly) HKSPXPCClient * currentClient; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)listenerWithConnectionInfo:(id)arg1 ;
-(id)succinctDescription;
-(void)startListening;
-(void)_didInvalidateConnection:(id)arg1 ;
-(void)addClientConnection:(id)arg1 clientLink:(id)arg2 ;
-(void)removeClientConnection:(id)arg1 ;
-(void)_withLock:(/*^block*/id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSXPCListener *)connectionListener;
-(void)performRemoteBlockOnClients:(/*^block*/id)arg1 ;
-(HKSPXPCClient *)currentClient;
-(NSString *)description;
-(id)initWithConnectionInfo:(id)arg1 connectionListener:(id)arg2 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_didInterruptConnection;
-(void)performRemoteBlock:(/*^block*/id)arg1 onClient:(id)arg2 ;
-(id)_currentClientForConnection:(id)arg1 ;
-(os_unfair_lock_s)clientLock;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)_clientWithConnection:(id)arg1 clientLink:(id)arg2 ;
-(id)succinctDescriptionBuilder;
-(NSArray *)connectedClients;
-(HKSPXPCConnectionInfo *)connectionInfo;
-(id)_clientIdentifierProviderForClientLink:(id)arg1 ;
-(id)initWithConnectionInfo:(id)arg1 ;
-(NSMutableSet *)connectedClientSet;
-(void)dealloc;
-(void)_lock_logConnectedClients;
@end

