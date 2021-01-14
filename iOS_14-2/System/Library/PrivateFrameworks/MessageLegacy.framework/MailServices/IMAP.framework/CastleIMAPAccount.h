/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MailServices/IMAP.framework/IMAP
*/

#import <IMAP/IMAPAccount.h>

@protocol OS_dispatch_queue;
@class MFLock, ACAccount, DeliveryAccount, NSMutableDictionary, NSString, NSObject, ACAccountStore, NSURL;

@interface CastleIMAPAccount : IMAPAccount {

	MFLock* _appleAccountLock;
	ACAccount* _appleAccount;
	DeliveryAccount* _deliveryAccount;
	unsigned _readyForPushRegistration : 1;
	NSMutableDictionary* _aliasChanges;
	NSString* _updatedDefaultEmail;
	NSObject*<OS_dispatch_queue> _aliasUpdateQueue;

}

@property (nonatomic,readonly) ACAccount * appleAccount; 
@property (nonatomic,readonly) ACAccountStore * accountStore; 
@property (nonatomic,readonly) NSString * deliveryHostname; 
@property (nonatomic,readonly) unsigned deliveryPortNumber; 
@property (nonatomic,readonly) BOOL deliveryUsesSSL; 
@property (nonatomic,readonly) NSURL * aliasLookupURL; 
@property (nonatomic,retain,readonly) NSString * personID; 
@property (nonatomic,retain,readonly) NSString * authToken; 
@property (nonatomic,retain,readonly) NSString * clientInfo; 
+(void)initialize;
+(BOOL)usernameIsEmailAddress;
+(id)accountTypeString;
+(id)displayedAccountTypeString;
+(id)accountTypeIdentifier;
+(BOOL)isPredefinedAccountType;
+(BOOL)primaryDeliveryAccountIsDynamic;
+(id)emailAddressHostPart;
+(id)defaultPathNameForAccountWithHostname:(id)arg1 username:(id)arg2 ;
+(id)newChildAccountWithParentAccount:(id)arg1 error:(id*)arg2 ;
-(NSString *)authToken;
-(void)setUsername:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 forEmailAddress:(id)arg2 ;
-(void)pushUpdateForAliasData;
-(id)fromEmailAddresses;
-(id)displayUsername;
-(NSString *)clientInfo;
-(ACAccountStore *)accountStore;
-(void)_accountsChanged:(id)arg1 ;
-(id)username;
-(id)anisetteDataWithError:(id*)arg1 ;
-(BOOL)isEnabledForDataclass:(id)arg1 ;
-(BOOL)usesSSL;
-(void)setHostname:(id)arg1 ;
-(id)hostname;
-(void)setDefaultEmailAddress:(id)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(void)persistentAccountDidChange:(id)arg1 previousAccount:(id)arg2 ;
-(id)preferredAuthScheme;
-(unsigned)portNumber;
-(void)setUsesSSL:(BOOL)arg1 ;
-(void)setPortNumber:(unsigned)arg1 ;
-(BOOL)allowsTrustPrompt;
-(unsigned long long)credentialAccessibility;
-(id)emailAddressStrings;
-(id)statisticsKind;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg1 ;
-(BOOL)shouldDisplayHostnameInErrorMessages;
-(ACAccount *)appleAccount;
-(NSString *)personID;
-(id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2 ;
-(void)startListeningForNotifications;
-(BOOL)canReceiveNewMailNotifications;
-(id)uniqueIdForPersistentConnection;
-(id)iconString;
-(BOOL)derivesDeliveryAccountInfoFromMailAccount;
-(id)displayName;
-(BOOL)supportsArchiving;
-(BOOL)isEquivalentTo:(id)arg1 hostname:(id)arg2 username:(id)arg3 ;
-(id)emailAddressesAndAliasesList;
-(id)_deliveryAccountCreateIfNeeded:(BOOL)arg1 ;
-(BOOL)updateEmailAliases;
-(void)dealloc;
-(id)fromEmailAddressesIncludingDisabled;
-(id)firstEmailAddress;
-(void)_resetAppleAccount;
-(BOOL)shouldRegisterForPush;
-(BOOL)canAttemptPushRegistration;
-(id)_mailPropertyFromAppleAccountForKey:(id)arg1 ;
-(id)authTokenWithError:(id*)arg1 ;
-(id)_fromEmailAddressesIncludingDisabled:(BOOL)arg1 ;
-(void)handleOverQuotaResponse:(id)arg1 ;
-(void)handleAlertResponse:(id)arg1 ;
-(NSString *)deliveryHostname;
-(unsigned)deliveryPortNumber;
-(BOOL)deliveryUsesSSL;
-(void)setLocalDefaultEmailAddress:(id)arg1 ;
-(void)setLocallyEnabled:(BOOL)arg1 forEmailAddress:(id)arg2 ;
-(BOOL)_updateEmailAddressAndAliases;
-(NSURL *)aliasLookupURL;
-(id)_aliasAuthorizationHeader;
-(id)_aliasUserAgent;
-(id)_headerStringFromDate:(id)arg1 ;
-(id)_aliasesFromData:(id)arg1 ;
-(id)_emailsFromData:(id)arg1 ;
-(id)_defaultEmailAddressFromData:(id)arg1 ;
-(id)_prepareAliasData;
-(void)setPasswordInKeychain:(id)arg1 ;
-(void)_removePasswordInKeychain;
-(id)passwordFromKeychain;
-(id)_aliasesFromOldData:(id)arg1 ;
@end

