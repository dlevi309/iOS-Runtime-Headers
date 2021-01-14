/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/

#import <AccountsDaemon/AccountsDaemon-Structs.h>
#import <libobjc.A.dylib/ACDAccountStoreDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, ACDClientProviderProtocol, ACDDatabaseProtocol;
@class NSMutableArray, NSMutableDictionary, NSObject, NSXPCListener, ACDAuthenticationPluginManager, ACDAccessPluginManager, ACDDataclassOwnersManager, ACDAuthenticationDialogManager, ACDAccountNotifier, ACRemoteDeviceProxy, ACDDatabaseBackupActivity, NSString;

@interface ACDServer : NSObject <ACDAccountStoreDelegate, NSXPCListenerDelegate> {

	os_unfair_lock_s _propertyLock;
	NSMutableArray* _accountStoreClients;
	NSMutableArray* _oauthSignerClients;
	NSMutableArray* _authenticationDialogManagerClients;
	NSMutableDictionary* _clientsByConnection;
	unsigned _clientCountMaximum;
	NSObject*<OS_dispatch_queue> _deferredConnectionResumeQueue;
	NSObject*<OS_dispatch_semaphore> _deferredConnectionResumeQueueSemaphore;
	NSObject*<OS_dispatch_queue> _performMigrationQueue;
	NSXPCListener* _accountStoreListener;
	NSXPCListener* _oauthSignerListener;
	NSXPCListener* _authenticationDialogListener;
	ACDAuthenticationPluginManager* _authenticationPluginManager;
	ACDAccessPluginManager* _accessPluginManager;
	ACDDataclassOwnersManager* _dataclassOwnersManager;
	ACDAuthenticationDialogManager* _authenticationDialogManager;
	ACDAccountNotifier* _accountNotifier;
	ACRemoteDeviceProxy* _remoteDeviceProxy;
	id<ACDClientProviderProtocol> _clientProvider;
	id<ACDDatabaseProtocol> _database;
	ACDDatabaseBackupActivity* _databaseBackupActivity;

}

@property (nonatomic,retain) ACDAuthenticationPluginManager * authenticationPluginManager;              //@synthesize authenticationPluginManager=_authenticationPluginManager - In the implementation block
@property (nonatomic,retain) ACDAccessPluginManager * accessPluginManager;                              //@synthesize accessPluginManager=_accessPluginManager - In the implementation block
@property (nonatomic,retain) ACDDataclassOwnersManager * dataclassOwnersManager;                        //@synthesize dataclassOwnersManager=_dataclassOwnersManager - In the implementation block
@property (nonatomic,retain) ACDAuthenticationDialogManager * authenticationDialogManager;              //@synthesize authenticationDialogManager=_authenticationDialogManager - In the implementation block
@property (nonatomic,retain) ACDAccountNotifier * accountNotifier;                                      //@synthesize accountNotifier=_accountNotifier - In the implementation block
@property (nonatomic,retain) ACRemoteDeviceProxy * remoteDeviceProxy;                                   //@synthesize remoteDeviceProxy=_remoteDeviceProxy - In the implementation block
@property (nonatomic,retain) id<ACDClientProviderProtocol> clientProvider;                              //@synthesize clientProvider=_clientProvider - In the implementation block
@property (nonatomic,retain) id<ACDDatabaseProtocol> database;                                          //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) ACDDatabaseBackupActivity * databaseBackupActivity;                        //@synthesize databaseBackupActivity=_databaseBackupActivity - In the implementation block
@property (nonatomic,readonly) NSXPCListener * accountStoreListener;                                    //@synthesize accountStoreListener=_accountStoreListener - In the implementation block
@property (nonatomic,readonly) NSXPCListener * oauthSignerListener;                                     //@synthesize oauthSignerListener=_oauthSignerListener - In the implementation block
@property (nonatomic,readonly) NSXPCListener * authenticationDialogListener;                            //@synthesize authenticationDialogListener=_authenticationDialogListener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ACDAccountNotifier *)accountNotifier;
-(void)setAccountNotifier:(ACDAccountNotifier *)arg1 ;
-(ACDAuthenticationDialogManager *)authenticationDialogManager;
-(ACRemoteDeviceProxy *)remoteDeviceProxy;
-(void)setRemoteDeviceProxy:(ACRemoteDeviceProxy *)arg1 ;
-(ACDDatabaseBackupActivity *)databaseBackupActivity;
-(void)_handleLanguageChangedDarwinNotification;
-(id)createClientForConnection:(id)arg1 ;
-(void)shutdown;
-(void)setDatabase:(id<ACDDatabaseProtocol>)arg1 ;
-(id)init;
-(ACDAuthenticationPluginManager *)authenticationPluginManager;
-(NSXPCListener *)authenticationDialogListener;
-(void)start;
-(id)createDatabaseConnection;
-(void)setAccessPluginManager:(ACDAccessPluginManager *)arg1 ;
-(void)_beginObservingLanguageChangeNotfication;
-(void)credentialsDidChangeForAccount:(id)arg1 ;
-(NSXPCListener *)oauthSignerListener;
-(void)setDataclassOwnersManager:(ACDDataclassOwnersManager *)arg1 ;
-(id)clientForConnection:(id)arg1 ;
-(void)setAuthenticationDialogManager:(ACDAuthenticationDialogManager *)arg1 ;
-(void)_signalDeferredConnectionResumeQueueSemaphore;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setAuthenticationPluginManager:(ACDAuthenticationPluginManager *)arg1 ;
-(ACDDataclassOwnersManager *)dataclassOwnersManager;
-(void)setDatabaseBackupActivity:(ACDDatabaseBackupActivity *)arg1 ;
-(void)_beginObservingIDSProxyNotifications;
-(ACDAccessPluginManager *)accessPluginManager;
-(void)_beginObservingMigrationDidFinishDarwinNotifications;
-(void)_endObservingLanguageChangeNotification;
-(id)_newDaemonAccountStoreFilterForClient:(id)arg1 ;
-(id)_newOAuthSignerForClient:(id)arg1 ;
-(BOOL)_shouldNotifyClient:(id)arg1 ofChangesForAccountType:(id)arg2 ;
-(id<ACDDatabaseProtocol>)database;
-(void)accountStore:(id)arg1 didSaveAccount:(id)arg2 changeType:(int)arg3 ;
-(void)_endObservingMigrationDidFinishDarwinNotifications;
-(void)setClientProvider:(id<ACDClientProviderProtocol>)arg1 ;
-(id)_keyForConnection:(id)arg1 ;
-(id)initWithAccountStoreListener:(id)arg1 oauthSignerListener:(id)arg2 authenticationDialogListener:(id)arg3 ;
-(NSXPCListener *)accountStoreListener;
-(id<ACDClientProviderProtocol>)clientProvider;
-(void)dealloc;
@end

