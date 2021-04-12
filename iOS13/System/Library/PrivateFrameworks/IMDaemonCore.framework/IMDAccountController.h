/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <libobjc.A.dylib/IDSAccountDelegate.h>

@class NSMutableDictionary, NSSet, NSDictionary, NSArray, NSString;

@interface IMDAccountController : NSObject <IDSAccountDelegate> {

	NSMutableDictionary* _accounts;
	NSMutableDictionary* _activeAccounts;
	NSSet* _operationalAccountsCache;
	BOOL _isLoading;
	BOOL _isFirstLoad;
	BOOL _networkDataAvailable;

}

@property (nonatomic,readonly) NSDictionary * loadOldStatusStore; 
@property (nonatomic,readonly) BOOL isLoading;                                 //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,readonly) NSArray * accounts; 
@property (nonatomic,readonly) NSArray * activeAccounts; 
@property (nonatomic,readonly) NSArray * connectedAccounts; 
@property (nonatomic,readonly) NSArray * connectingAccounts; 
@property (nonatomic,readonly) NSArray * activeSessions; 
@property (assign,nonatomic) BOOL networkDataAvailable;                        //@synthesize networkDataAvailable=_networkDataAvailable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)sharedAccountController;
-(id)init;
-(void)dealloc;
-(void)load;
-(void)save;
-(NSArray *)accounts;
-(NSArray *)activeAccounts;
-(NSArray *)activeSessions;
-(BOOL)isLoading;
-(void)addAccount:(id)arg1 ;
-(void)removeAccount:(id)arg1 ;
-(void)account:(id)arg1 isActiveChanged:(BOOL)arg2 ;
-(id)accountsForService:(id)arg1 ;
-(BOOL)activeAccountsAreEligibleForSpamFilter;
-(id)_nicknameController;
-(BOOL)networkDataAvailable;
-(id)activeAccountsForService:(id)arg1 ;
-(id)connectedAccountsForService:(id)arg1 ;
-(NSArray *)connectedAccounts;
-(void)setNetworkDataAvailable:(BOOL)arg1 ;
-(void)activateAccounts:(id)arg1 ;
-(void)deactivateAccounts:(id)arg1 ;
-(void)deactivateAccount:(id)arg1 ;
-(void)activateAccount:(id)arg1 ;
-(id)_operationalAccounts;
-(BOOL)isAccountActive:(id)arg1 ;
-(void)_daemonWillShutdown:(id)arg1 ;
-(id)accountForAccountID:(id)arg1 ;
-(NSDictionary *)loadOldStatusStore;
-(void)_checkPowerAssertion;
-(void)_rebuildOperationalAccountsCache;
-(void)deactivateAccounts:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)_isAccountActive:(id)arg1 forService:(id)arg2 ;
-(void)deactivateAccount:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)_isOperationalForAccount:(id)arg1 ;
-(void)deferredSave;
-(void)setupAccount:(id)arg1 ;
-(id)accountsForLoginID:(id)arg1 onService:(id)arg2 ;
-(NSArray *)connectingAccounts;
-(id)connectingAccountsForService:(id)arg1 ;
-(id)accountForIDSAccountUniqueID:(id)arg1 ;
-(id)sessionForAccount:(id)arg1 ;
-(id)anySessionForServiceName:(id)arg1 ;
-(BOOL)hasActivePhoneAccount;
-(id)_superFormatFromAIML:(id)arg1 ;
@end

