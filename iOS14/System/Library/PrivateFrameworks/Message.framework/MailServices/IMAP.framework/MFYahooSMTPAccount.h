/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
*/

#import <Message/SMTPAccount.h>
#import <libobjc.A.dylib/MFOAuth2TokenAuthProtocol.h>

@class YahooAccount, NSString;

@interface MFYahooSMTPAccount : SMTPAccount <MFOAuth2TokenAuthProtocol> {

	YahooAccount* _account;

}

@property (getter=mailAccountIfAvailable,nonatomic,retain) YahooAccount * mailAccount;              //@synthesize account=_account - In the implementation block
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
-(void)setMailAccount:(YahooAccount *)arg1 ;
-(id)displayHostname;
@end

