/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
*/

#import <IMAP/IMAPAccount.h>
#import <libobjc.A.dylib/MFOAuth2TokenAuthProtocol.h>

@class NSString;

@interface YahooAccount : IMAPAccount <MFOAuth2TokenAuthProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)usernameIsEmailAddress;
+(BOOL)getConfigurationFromServerForEmail:(id)arg1 ;
+(BOOL)usesSSL;
+(id)hostname;
+(id)displayedAccountTypeString;
+(id)accountTypeIdentifier;
+(BOOL)isSSLEditable;
+(id)authSchemesForAccountClass;
+(BOOL)isPredefinedAccountType;
+(BOOL)primaryDeliveryAccountIsDynamic;
+(id)emailAddressWithUsername:(id)arg1 ;
+(id)deliveryAccountHostname;
+(BOOL)deliveryAccountUsesSSL;
+(unsigned)deliveryAccountPortNumber;
+(id)emailAddressHostPart;
-(id)_defaultSpecialMailboxNameForType:(int)arg1 ;
-(id)URLForMessage:(id)arg1 ;
-(id)transferDisabledMailboxUids;
-(id)displayUsername;
-(id)saveSentFolder;
-(BOOL)supportsFastRemoteBodySearch;
-(unsigned long long)minUID;
-(id)hostname;
-(id)preferredAuthScheme;
-(unsigned)portNumber;
-(unsigned long long)credentialAccessibility;
-(id)emailAddressStrings;
-(id)statisticsKind;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg1 ;
-(BOOL)shouldDisplayHostnameInErrorMessages;
-(id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2 ;
-(id)iconString;
-(BOOL)derivesDeliveryAccountInfoFromMailAccount;
-(id)_deliveryAccountCreateIfNeeded:(BOOL)arg1 ;
@end

