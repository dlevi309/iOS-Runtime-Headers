/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
*/

#import <Message/SMTPAccount.h>

@class CastleIMAPAccount;

@interface MFNewcastleSMTPAccount : SMTPAccount {

	CastleIMAPAccount* _castleAccount;

}

@property (nonatomic,retain) CastleIMAPAccount * castleAccount;              //@synthesize castleAccount=_castleAccount - In the implementation block
+(id)accountTypeIdentifier;
-(id)accountForRenewingCredentials;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg1 ;
-(BOOL)shouldUseAuthentication;
-(id)mailAccountIfAvailable;
-(id)displayHostname;
-(void)setCastleAccount:(CastleIMAPAccount *)arg1 ;
-(CastleIMAPAccount *)castleAccount;
@end

