/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MailServices/IMAP.framework/IMAP
*/

#import <Message/SMTPAccount.h>

@class MFOSXServerIMAPAccount, NSDictionary;

@interface MFOSXServerSMTPAccount : SMTPAccount {

	MFOSXServerIMAPAccount* _mailAccount;

}

@property (getter=mailAccountIfAvailable,nonatomic,retain) MFOSXServerIMAPAccount * mailAccount;              //@synthesize mailAccount=_mailAccount - In the implementation block
@property (nonatomic,readonly) NSDictionary * parentAccountMailProperties; 
+(id)accountTypeIdentifier;
-(id)password;
-(id)username;
-(BOOL)usesSSL;
-(id)hostname;
-(id)preferredAuthScheme;
-(id)accountForRenewingCredentials;
-(unsigned)portNumber;
-(BOOL)shouldUseAuthentication;
-(id)mailAccountIfAvailable;
-(void)setMailAccount:(MFOSXServerIMAPAccount *)arg1 ;
-(NSDictionary *)parentAccountMailProperties;
@end

