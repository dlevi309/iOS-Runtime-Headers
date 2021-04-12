/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)start;
-(void)setDatabase:(id<ACDDatabaseProtocol>)arg1 ;
-(id<ACDDatabaseProtocol>)database;
-(void)shutdown;
-(id<ACDClientProviderProtocol>)clientProvider;
-(void)credentialsDidChangeForAccount:(id)arg1 ;
-(ACDAccountNotifier *)accountNotifier;
-(ACDDataclassOwnersManager *)dataclassOwnersManager;
-(void)accountStore:(id)arg1 didSaveAccount:(id)arg2 ;
-(ACDAuthenticationDialogManager *)authenticationDialogManager;
-(ACDDatabaseBackupActivity *)databaseBackupActivity;
-(ACRemoteDeviceProxy *)remoteDeviceProxy;
-(void)setRemoteDeviceProxy:(ACRemoteDeviceProxy *)arg1 ;
-(ACDAuthenticationPluginManager *)authenticationPluginManager;
-(void)setAuthenticationPluginManager:(ACDAuthenticationPluginManager *)arg1 ;
-(ACDAccessPluginManager *)accessPluginManager;
-(void)setAccessPluginManager:(ACDAccessPluginManager *)arg1 ;
-(void)setDataclassOwnersManager:(ACDDataclassOwnersManager *)arg1 ;
-(void)setAuthenticationDialogManager:(ACDAuthenticationDialogManager *)arg1 ;
-(void)setAccountNotifier:(ACDAccountNotifier *)arg1 ;
-(void)setDatabaseBackupActivity:(ACDDatabaseBackupActivity *)arg1 ;
-(id)initWithAccountStoreListener:(id)arg1 oauthSignerListener:(id)arg2 authenticationDialogListener:(id)arg3 ;
-(void)_beginObservingMigrationDidFinishDarwinNotifications;
-(void)_signalDeferredConnectionResumeQueueSemaphore;
-(void)_beginObservingIDSProxyNotifications;
-(void)_beginObservingLanguageChangeNotfication;
-(void)_endObservingLanguageChangeNotification;
-(void)_endObservingMigrationDidFinishDarwinNotifications;
-(id)createClientForConnection:(id)arg1 ;
-(id)_keyForConnection:(id)arg1 ;
-(id)createDatabaseConnection;
-(id)_newDaemonAccountStoreFilterForClient:(id)arg1 ;
-(id)_newOAuthSignerForClient:(id)arg1 ;
-(id)clientForConnection:(id)arg1 ;
-(void)_handleLanguageChangedDarwinNotification;
-(NSXPCListener *)accountStoreListener;
-(NSXPCListener *)oauthSignerListener;
-(NSXPCListener *)authenticationDialogListener;
-(void)setClientProvider:(id<ACDClientProviderProtocol>)arg1 ;
@end

