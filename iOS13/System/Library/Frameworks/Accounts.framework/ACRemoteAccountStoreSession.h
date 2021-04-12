/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <Accounts/Accounts-Structs.h>
#import <libobjc.A.dylib/NSXPCProxyCreating.h>

@class NSXPCConnection, NSXPCListenerEndpoint, NSString;

@interface ACRemoteAccountStoreSession : NSObject <NSXPCProxyCreating> {

	NSXPCConnection* _connection;
	os_unfair_lock_s _connectionLock;
	BOOL _notificationsEnabled;
	NSXPCListenerEndpoint* _listenerEndpoint;
	NSString* _effectiveBundleID;

}

@property (nonatomic,readonly) NSXPCListenerEndpoint * listenerEndpoint;              //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
@property (nonatomic,copy) NSString * effectiveBundleID;                              //@synthesize effectiveBundleID=_effectiveBundleID - In the implementation block
@property (assign,nonatomic) BOOL notificationsEnabled;                               //@synthesize notificationsEnabled=_notificationsEnabled - In the implementation block
-(id)init;
-(void)dealloc;
-(id)_connection;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)initWithListenerEndpoint:(id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(NSString *)effectiveBundleID;
-(void)setEffectiveBundleID:(NSString *)arg1 ;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(void)_setConnectionInterrupted;
-(void)_setConnectionInvalidated;
-(void)_locked_configureRemoteAccountStoreWithConnection:(id)arg1 ;
-(void)_locked_connection:(id)arg1 setEffectiveBundleID:(id)arg2 ;
-(void)_locked_connection:(id)arg1 setNotificationsEnabled:(BOOL)arg2 ;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(BOOL)notificationsEnabled;
@end

