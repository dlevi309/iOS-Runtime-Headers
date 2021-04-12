/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MailServices/IMAP.framework/IMAP
*/

#import <Message/SMTPAccount.h>
#import <libobjc.A.dylib/MFOAuth2TokenAuthProtocol.h>

@class AOLAccount, NSString;

@interface MFAOLSMTPAccount : SMTPAccount <MFOAuth2TokenAuthProtocol> {

	AOLAccount* _account;

}

@property (getter=mailAccountIfAvailable,nonatomic,retain) AOLAccount * mailAccount;              //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)accountTypeIdentifier;
-(id)password;
-(id)username;
-(BOOL)usesSSL;
-(id)hostname;
-(id)preferredAuthScheme;
-(id)accountForRenewingCredentials;
-(unsigned)portNumber;
-(id)oauth2Token;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg1 ;
-(BOOL)shouldUseAuthentication;
-(id)mailAccountIfAvailable;
-(void)setMailAccount:(AOLAccount *)arg1 ;
-(id)displayHostname;
@end

