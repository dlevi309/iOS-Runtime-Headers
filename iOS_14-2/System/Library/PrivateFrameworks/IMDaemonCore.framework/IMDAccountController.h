/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)load;
-(NSArray *)accounts;
-(void)_daemonWillShutdown:(id)arg1 ;
-(id)activeAliases;
-(void)_rebuildOperationalAccountsCache;
-(NSArray *)connectedAccounts;
-(void)account:(id)arg1 isActiveChanged:(BOOL)arg2 ;
-(id)init;
-(BOOL)isLoading;
-(NSArray *)activeAccounts;
-(void)save;
-(id)connectingAccountsForService:(id)arg1 ;
-(BOOL)hasActivePhoneAccount;
-(void)removeAccount:(id)arg1 ;
-(void)deactivateAccounts:(id)arg1 ;
-(id)_superFormatFromAIML:(id)arg1 ;
-(void)setupAccount:(id)arg1 ;
-(id)accountsForLoginID:(id)arg1 onService:(id)arg2 ;
-(void)activateAccount:(id)arg1 ;
-(void)setNetworkDataAvailable:(BOOL)arg1 ;
-(id)accountForIDSAccountUniqueID:(id)arg1 ;
-(BOOL)activeAccountsAreEligibleForHawking;
-(id)accountForHandle:(id)arg1 ;
-(id)sessionForAccount:(id)arg1 ;
-(BOOL)_isAccountActive:(id)arg1 forService:(id)arg2 ;
-(void)deactivateAccounts:(id)arg1 force:(BOOL)arg2 ;
-(id)connectedAccountsForService:(id)arg1 ;
-(void)deferredSave;
-(id)_nicknameController;
-(id)_operationalAccounts;
-(id)accountForAccountID:(id)arg1 ;
-(NSDictionary *)loadOldStatusStore;
-(void)deactivateAccount:(id)arg1 ;
-(void)activateAccounts:(id)arg1 ;
-(NSArray *)activeSessions;
-(id)anySessionForServiceName:(id)arg1 ;
-(id)accountsForService:(id)arg1 ;
-(NSArray *)connectingAccounts;
-(void)deactivateAccount:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)receiverIsCandidateForHawking:(id)arg1 ;
-(void)addAccount:(id)arg1 ;
-(BOOL)isAccountActive:(id)arg1 ;
-(id)activeAccountsForService:(id)arg1 ;
-(BOOL)networkDataAvailable;
-(void)dealloc;
-(BOOL)_isOperationalForAccount:(id)arg1 ;
-(void)_checkPowerAssertion;
@end

