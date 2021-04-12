/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MailServices/IMAP.framework/IMAP
*/

#import <IMAP/IMAPAccount.h>
#import <libobjc.A.dylib/MFOAuth2TokenAuthProtocol.h>
#import <libobjc.A.dylib/MFClientTokenAuthProtocol.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class EFPromise, NSURLCredential, NSString;

@interface GmailAccount : IMAPAccount <MFOAuth2TokenAuthProtocol, MFClientTokenAuthProtocol, NSURLSessionDataDelegate> {

	EFPromise* _enablingPromise;
	NSURLCredential* _credential;
	NSString* _clientToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)usernameIsEmailAddress;
+(id)hostname;
+(id)displayedAccountTypeString;
+(id)accountTypeIdentifier;
+(id)authSchemesForAccountClass;
+(BOOL)isPredefinedAccountType;
+(id)deliveryAccountHostname;
+(BOOL)deliveryAccountUsesSSL;
+(unsigned)deliveryAccountPortNumber;
+(id)emailAddressHostPart;
+(id)imapNotEnabledPrefix;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_childOfMailbox:(id)arg1 withComponentName:(id)arg2 ;
-(BOOL)archiveSentMessages;
-(id)displayNameUsingSpecialNamesForMailboxUid:(id)arg1 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)persistentNameForMailbox:(id)arg1 ;
-(int)archiveDestinationForMailbox:(id)arg1 ;
-(BOOL)supportsFastRemoteBodySearch;
-(id)clientToken;
-(id)accountStore;
-(id)errorForResponse:(id)arg1 ;
-(void)_removeCredential:(id)arg1 ;
-(id)hostname;
-(void)setPassword:(id)arg1 ;
-(void)persistentAccountDidChange:(id)arg1 previousAccount:(id)arg2 ;
-(id)preferredAuthScheme;
-(unsigned long long)credentialAccessibility;
-(id)emailAddressStrings;
-(id)statisticsKind;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg1 ;
-(BOOL)enableAccount;
-(BOOL)shouldEnableAfterError:(id)arg1 ;
-(id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2 ;
-(int)emptyFrequencyForMailboxType:(int)arg1 ;
-(id)allMailMailboxUid;
-(BOOL)shouldArchiveByDefault;
-(id)iconString;
-(BOOL)derivesDeliveryAccountInfoFromMailAccount;
-(BOOL)supportsArchiving;
-(void)_deleteHook;
-(id)_deliveryAccountCreateIfNeeded:(BOOL)arg1 ;
-(id)_consumeExistingPreAuthToken;
-(id)_URLFromUncleanString:(id)arg1 ;
-(id)_webLoginErrorWithURL:(id)arg1 ;
-(id)specialUseAttributeForType:(int)arg1 ;
-(id)specialUseAttributesForMailbox:(id)arg1 ;
-(BOOL)xListSupportedOnConnection:(id)arg1 ;
@end

