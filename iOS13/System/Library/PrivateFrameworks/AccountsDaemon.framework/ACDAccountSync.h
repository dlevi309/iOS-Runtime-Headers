/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


@protocol OS_dispatch_queue;
@class NSTimer, NSObject, ACAccountStore;

@interface ACDAccountSync : NSObject {

	int _circleToken;
	int _keychainToken;
	NSTimer* _timer;
	NSObject*<OS_dispatch_queue> _syncQueue;
	BOOL _enabled;
	BOOL _duchessEnabled;
	ACAccountStore* _store;

}
+(id)sharedAccountSyncServer;
+(id)accountSyncUnsupportedTypes;
+(id)accountSyncSupportedTypes;
+(id)accountSyncPropertiesForAccount:(id)arg1 ;
+(id)duchessHostnames;
-(id)init;
-(void)dealloc;
-(void)sync;
-(void)devices;
-(void)registerForNotifications;
-(BOOL)migrate;
-(id)primaryiCloudAccount;
-(void)setupAccountSync;
-(BOOL)checkCircleState;
-(void)scheduleSync;
-(void)markMigrated;
-(id)getiOSVersion;
-(void)waitForBuddy;
-(void)setiOSVersion;
-(void)queueSync;
-(void)accountChanges:(id)arg1 ;
-(BOOL)detectDuchess;
-(id)processAdds;
-(id)processDeletes;
-(void)createKeychainItems:(id)arg1 ;
-(id)processHostnameAdds;
-(id)processHostnameDeletes;
-(void)createAccounts:(id)arg1 ;
-(void)deleteAccounts:(id)arg1 ;
-(id)localAccounts;
-(id)remoteAccounts;
-(id)getAccountsOfType:(id)arg1 ;
-(id)accountPropertiesFromDictionary:(id)arg1 forType:(id)arg2 ;
-(BOOL)unsupportedType:(id)arg1 ;
-(BOOL)supportedType:(id)arg1 ;
-(id)remoteHostnameAccounts;
-(id)localHostnameAccounts;
-(id)smtpAccounts;
-(void)postNotificationFor:(id)arg1 ;
-(BOOL)isDataclassActionRequired:(id)arg1 ;
-(BOOL)locallyMigrated;
-(void)fixSMTP;
-(void)fixLDAP;
-(id)ldapAccounts;
-(BOOL)isMigrated;
-(void)kvsChanges:(id)arg1 ;
@end

