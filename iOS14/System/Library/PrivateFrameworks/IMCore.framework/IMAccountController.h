/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAccounts:(NSArray *)arg1 ;
-(NSArray *)accounts;
-(id)bestAccountForStatus;
-(id)accountForUniqueID:(id)arg1 ;
-(BOOL)_deactivateAccounts:(id)arg1 ;
-(BOOL)metionedHandleMatchesMeCard:(id)arg1 ;
-(BOOL)receiverIsMyMention:(id)arg1 ;
-(void)setReadOnly:(BOOL)arg1 ;
-(BOOL)addAccount:(id)arg1 locally:(BOOL)arg2 ;
-(id)_bestOperationalAccountForSendingForService:(id)arg1 ;
-(NSArray *)connectedAccounts;
-(id)bestAccountWithCapability:(unsigned long long)arg1 ;
-(id)init;
-(NSArray *)activeAccounts;
-(BOOL)readOnly;
-(BOOL)canActivateAccount:(id)arg1 ;
-(id)operationalAccountsWithCapability:(unsigned long long)arg1 ;
-(BOOL)deactivateAccounts:(id)arg1 ;
-(id)accountAtIndex:(int)arg1 ;
-(IMAccount *)activeIMessageAccount;
-(void)_rebuildOperationalAccountsCache:(BOOL)arg1 ;
-(id)bestConnectedAccountForService:(id)arg1 withLogin:(id)arg2 ;
-(id)bestOperationalAccountForService:(id)arg1 withLogin:(id)arg2 ;
-(id)_bestAccountForAddresses:(id)arg1 ;
-(BOOL)addAccount:(id)arg1 atIndex:(int)arg2 locally:(BOOL)arg3 ;
-(id)bestActiveAccountForService:(id)arg1 withLogin:(id)arg2 ;
-(id)aimAccount;
-(BOOL)activateAccount:(id)arg1 ;
-(void)setNetworkDataAvailable:(BOOL)arg1 ;
-(BOOL)deactivateAccounts:(id)arg1 withDisable:(BOOL)arg2 ;
-(id)jabberAccount;
-(int)numberOfAccounts;
-(long long)activeAccountsAreEligibleForHawking;
-(BOOL)_deactivateAccount:(id)arg1 ;
-(id)connectedAccountsWithCapability:(unsigned long long)arg1 ;
-(BOOL)activateAccount:(id)arg1 force:(BOOL)arg2 ;
-(id)iMessageAccountForLastAddressedHandle:(id)arg1 simID:(id)arg2 ;
-(void)_disableCache;
-(void)deferredSetup;
-(id)bestAccountForService:(id)arg1 ;
-(id)bestOperationalAccountForService:(id)arg1 ;
-(long long)activeAccountsAreEligibleForAppleSMSFilter;
-(id)connectedAccountsForService:(id)arg1 ;
-(id)mostLoggedInAccount;
-(void)autoLogin;
-(NSArray *)operationalAccounts;
-(void)_activeAccountChanged:(id)arg1 ;
-(BOOL)canDeleteAccount:(id)arg1 ;
-(BOOL)activateAndHandleReconnectAccount:(id)arg1 ;
-(BOOL)accountConnecting:(id)arg1 ;
-(BOOL)deleteAccount:(id)arg1 ;
-(id)operationalAccountsForService:(id)arg1 ;
-(id)bestActiveAccountForService:(id)arg1 ;
-(id)__iCloudSystemAccountForService:(id)arg1 ;
-(id)bestAccountForService:(id)arg1 login:(id)arg2 guid:(id)arg3 ;
-(BOOL)deactivateAccount:(id)arg1 ;
-(id)accountsWithCapability:(unsigned long long)arg1 ;
-(id)bestAccountForService:(id)arg1 withLogin:(id)arg2 ;
-(BOOL)canActivateAccounts:(id)arg1 ;
-(BOOL)activateAccounts:(id)arg1 force:(BOOL)arg2 locally:(BOOL)arg3 ;
-(long long)activeAccountsAreEligibleForUnknownSendersFiltering;
-(BOOL)deleteAccount:(id)arg1 locally:(BOOL)arg2 ;
-(BOOL)activateAccount:(id)arg1 force:(BOOL)arg2 locally:(BOOL)arg3 ;
-(BOOL)activateAccounts:(id)arg1 ;
-(void)_enableCache;
-(BOOL)_shouldPerformDeferredSetup;
-(id)accountsForService:(id)arg1 ;
-(BOOL)accountActive:(id)arg1 ;
-(BOOL)addAccount:(id)arg1 ;
-(IMAccount *)activeSMSAccount;
-(BOOL)deactivateAccount:(id)arg1 withDisable:(BOOL)arg2 ;
-(void)_requestNetworkDataAvailability;
-(void)_accountRegistrationStatusChanged:(id)arg1 ;
-(id)activeAccountsForService:(id)arg1 ;
-(BOOL)networkDataAvailable;
-(BOOL)accountConnected:(id)arg1 ;
-(BOOL)addAccount:(id)arg1 atIndex:(int)arg2 ;
-(BOOL)activateAndHandleReconnectAccounts:(id)arg1 ;
-(void)dealloc;
-(BOOL)activateAccount:(id)arg1 locally:(BOOL)arg2 ;
-(id)bestConnectedAccountForService:(id)arg1 ;
@end

