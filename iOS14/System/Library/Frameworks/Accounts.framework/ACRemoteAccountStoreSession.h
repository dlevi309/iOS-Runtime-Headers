/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <Accounts/Accounts-Structs.h>
#import <libobjc.A.dylib/NSXPCProxyCreating.h>

@class NSXPCConnection, ACAccountStoreClientSideListener, NSXPCListenerEndpoint, NSString;

@interface ACRemoteAccountStoreSession : NSObject <NSXPCProxyCreating> {

	NSXPCConnection* _connection;
	os_unfair_lock_s _connectionLock;
	ACAccountStoreClientSideListener* _clientSideListener;
	BOOL _notificationsEnabled;
	NSXPCListenerEndpoint* _listenerEndpoint;
	NSString* _effectiveBundleID;

}

@property (nonatomic,readonly) NSXPCListenerEndpoint * listenerEndpoint;              //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
@property (nonatomic,copy) NSString * effectiveBundleID;                              //@synthesize effectiveBundleID=_effectiveBundleID - In the implementation block
@property (assign,nonatomic) BOOL notificationsEnabled;                               //@synthesize notificationsEnabled=_notificationsEnabled - In the implementation block
-(void)setEffectiveBundleID:(NSString *)arg1 ;
-(void)_locked_configureRemoteAccountStoreWithConnection:(id)arg1 ;
-(id)remoteObjectProxy;
-(id)init;
-(void)_locked_connection:(id)arg1 setNotificationsEnabled:(BOOL)arg2 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)notificationsEnabled;
-(void)_locked_connection:(id)arg1 setEffectiveBundleID:(id)arg2 ;
-(NSString *)effectiveBundleID;
-(void)_setConnectionInvalidated;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(id)initWithListenerEndpoint:(id)arg1 delegate:(id)arg2 ;
-(id)_connection;
-(void)_setConnectionInterrupted;
-(void)dealloc;
@end

