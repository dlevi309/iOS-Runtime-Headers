/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
*/

#import <EmailCore/ECSASLAuthenticator.h>

@class CastleIMAPAccount;

@interface _MFNewcastleAuthenticator : ECSASLAuthenticator {

	BOOL _sentResponse;
	CastleIMAPAccount* _castleAccount;

}

@property (nonatomic,retain) CastleIMAPAccount * castleAccount;              //@synthesize castleAccount=_castleAccount - In the implementation block
-(BOOL)justSentPlainTextPassword;
-(id)initWithAuthenticationScheme:(id)arg1 account:(id)arg2 connection:(id)arg3 ;
-(id)responseForServerData:(id)arg1 ;
-(id)saslName;
-(BOOL)supportsInitialClientResponse;
-(void)setCastleAccount:(CastleIMAPAccount *)arg1 ;
-(CastleIMAPAccount *)castleAccount;
@end

