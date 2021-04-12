/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)migrate;
-(void)sync;
-(void)devices;
-(id)processAdds;
-(void)fixSMTP;
-(id)init;
-(void)kvsChanges:(id)arg1 ;
-(void)accountChanges:(id)arg1 ;
-(void)waitForBuddy;
-(void)deleteAccounts:(id)arg1 ;
-(id)getAccountsOfType:(id)arg1 ;
-(void)createAccounts:(id)arg1 ;
-(id)remoteAccounts;
-(BOOL)isDataclassActionRequired:(id)arg1 ;
-(void)scheduleSync;
-(id)processHostnameAdds;
-(id)remoteHostnameAccounts;
-(id)smtpAccounts;
-(id)processHostnameDeletes;
-(void)setiOSVersion;
-(void)registerForNotifications;
-(id)accountPropertiesFromDictionary:(id)arg1 forType:(id)arg2 ;
-(BOOL)locallyMigrated;
-(id)ldapAccounts;
-(void)setupAccountSync;
-(id)primaryiCloudAccount;
-(void)postNotificationFor:(id)arg1 ;
-(void)queueSync;
-(id)processDeletes;
-(id)localAccounts;
-(id)localHostnameAccounts;
-(id)getiOSVersion;
-(BOOL)supportedType:(id)arg1 ;
-(void)createKeychainItems:(id)arg1 ;
-(BOOL)isMigrated;
-(BOOL)unsupportedType:(id)arg1 ;
-(void)markMigrated;
-(void)fixLDAP;
-(BOOL)detectDuchess;
-(void)dealloc;
-(BOOL)checkCircleState;
@end

