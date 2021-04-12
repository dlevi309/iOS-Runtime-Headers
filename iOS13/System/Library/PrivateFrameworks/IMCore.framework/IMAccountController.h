/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class NSMutableDictionary, NSArray, IMAccount;

@interface IMAccountController : NSObject {

	NSMutableDictionary* _accountMap;
	BOOL _isReadOnly;
	BOOL _cachesEnabled;
	NSArray* _operationalAccountsCache;
	NSMutableDictionary* _serviceToActiveAccountsMap;
	NSMutableDictionary* _serviceToAccountsMap;
	NSMutableDictionary* _serviceToConnectedAccountsMap;
	NSMutableDictionary* _serviceToOperationalAccountsMap;
	BOOL _networkDataAvailable;
	NSArray* _accounts;

}

@property (copy) NSArray * accounts;                                           //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,readonly) id bestAccountForStatus; 
@property (nonatomic,readonly) int numberOfAccounts; 
@property (nonatomic,readonly) IMAccount * activeIMessageAccount; 
@property (nonatomic,readonly) IMAccount * activeSMSAccount; 
@property (nonatomic,readonly) NSArray * activeAccounts; 
@property (nonatomic,readonly) NSArray * connectedAccounts; 
@property (nonatomic,readonly) NSArray * operationalAccounts; 
@property (assign,nonatomic) BOOL networkDataAvailable;                        //@synthesize networkDataAvailable=_networkDataAvailable - In the implementation block
+(id)sharedInstance;
+(id)bestAccountFromAccounts:(id)arg1 ;
-(id)__ck_defaultAccountForService:(id)arg1 ;
-(id)__ck_bestAccountForAddresses:(id)arg1 ;
-(id)__ck_bestAccountForAddress:(id)arg1 ;
-(id)__ck_bestAccountForAddresses:(id)arg1 withFallbackService:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)readOnly;
-(NSArray *)accounts;
-(NSArray *)activeAccounts;
-(void)setReadOnly:(BOOL)arg1 ;
-(BOOL)addAccount:(id)arg1 ;
-(void)setAccounts:(NSArray *)arg1 ;
-(BOOL)deleteAccount:(id)arg1 ;
-(id)accountsForService:(id)arg1 ;
-(void)deferredSetup;
-(long long)activeAccountsAreEligibleForSpamFilter;
-(id)bestAccountForService:(id)arg1 ;
-(id)bestActiveAccountForService:(id)arg1 ;
-(id)iMessageAccountForLastAddressedHandle:(id)arg1 simID:(id)arg2 ;
-(IMAccount *)activeIMessageAccount;
-(int)numberOfAccounts;
-(id)accountForUniqueID:(id)arg1 ;
-(id)_bestAccountForAddresses:(id)arg1 ;
-(BOOL)networkDataAvailable;
-(id)_bestOperationalAccountForSendingForService:(id)arg1 ;
-(id)activeAccountsForService:(id)arg1 ;
-(id)connectedAccountsForService:(id)arg1 ;
-(id)accountsWithCapability:(unsigned long long)arg1 ;
-(id)connectedAccountsWithCapability:(unsigned long long)arg1 ;
-(id)operationalAccountsWithCapability:(unsigned long long)arg1 ;
-(void)autoLogin;
-(id)bestAccountForStatus;
-(NSArray *)connectedAccounts;
-(BOOL)activateAccount:(id)arg1 locally:(BOOL)arg2 ;
-(BOOL)_deactivateAccount:(id)arg1 ;
-(BOOL)addAccount:(id)arg1 locally:(BOOL)arg2 ;
-(BOOL)deleteAccount:(id)arg1 locally:(BOOL)arg2 ;
-(void)setNetworkDataAvailable:(BOOL)arg1 ;
-(void)setNetworkDataAvailable:(BOOL)arg1 ;
-(BOOL)deactivateAccount:(id)arg1 withDisable:(BOOL)arg2 ;
-(BOOL)activateAccounts:(id)arg1 ;
-(BOOL)deactivateAccounts:(id)arg1 ;
-(void)_activeAccountChanged:(id)arg1 ;
-(void)_accountRegistrationStatusChanged:(id)arg1 ;
-(BOOL)_shouldPerformDeferredSetup;
-(void)_requestNetworkDataAvailability;
-(BOOL)accountActive:(id)arg1 ;
-(NSArray *)operationalAccounts;
-(void)_rebuildOperationalAccountsCache:(BOOL)arg1 ;
-(BOOL)deactivateAccount:(id)arg1 ;
-(BOOL)deactivateAccounts:(id)arg1 withDisable:(BOOL)arg2 ;
-(BOOL)_deactivateAccounts:(id)arg1 ;
-(BOOL)canActivateAccounts:(id)arg1 ;
-(BOOL)activateAccounts:(id)arg1 force:(BOOL)arg2 locally:(BOOL)arg3 ;
-(BOOL)activateAccount:(id)arg1 force:(BOOL)arg2 locally:(BOOL)arg3 ;
-(BOOL)activateAndHandleReconnectAccounts:(id)arg1 ;
-(BOOL)canActivateAccount:(id)arg1 ;
-(id)operationalAccountsForService:(id)arg1 ;
-(IMAccount *)activeSMSAccount;
-(id)accountAtIndex:(int)arg1 ;
-(BOOL)canDeleteAccount:(id)arg1 ;
-(BOOL)addAccount:(id)arg1 atIndex:(int)arg2 ;
-(BOOL)addAccount:(id)arg1 atIndex:(int)arg2 locally:(BOOL)arg3 ;
-(BOOL)activateAccount:(id)arg1 ;
-(BOOL)activateAccount:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)activateAndHandleReconnectAccount:(id)arg1 ;
-(BOOL)accountConnecting:(id)arg1 ;
-(BOOL)accountConnected:(id)arg1 ;
-(id)bestAccountForService:(id)arg1 login:(id)arg2 guid:(id)arg3 ;
-(id)bestAccountForService:(id)arg1 withLogin:(id)arg2 ;
-(id)bestOperationalAccountForService:(id)arg1 withLogin:(id)arg2 ;
-(id)bestActiveAccountForService:(id)arg1 withLogin:(id)arg2 ;
-(id)bestConnectedAccountForService:(id)arg1 withLogin:(id)arg2 ;
-(id)bestOperationalAccountForService:(id)arg1 ;
-(id)bestConnectedAccountForService:(id)arg1 ;
-(id)bestAccountWithCapability:(unsigned long long)arg1 ;
-(id)mostLoggedInAccount;
-(id)aimAccount;
-(id)jabberAccount;
-(void)_enableCache;
-(void)_disableCache;
-(id)__iCloudSystemAccountForService:(id)arg1 ;
@end

