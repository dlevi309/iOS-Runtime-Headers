/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/MFMailMessage.h>

@class NSString, MFMailboxUid, MailAccount, MFMessageHeaders;

@interface MFFakeMailMessage : MFMailMessage {

	NSString* _persistentID;
	MFMailboxUid* _mailbox;
	MailAccount* _account;
	MFMessageHeaders* _fakeHeaders;

}

@property (nonatomic,retain) MFMessageHeaders * fakeHeaders;              //@synthesize fakeHeaders=_fakeHeaders - In the implementation block
@property (nonatomic,retain) MFMessageHeaders * headers; 
@property (nonatomic,retain) MailAccount * account;                       //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) MFMailboxUid * mailbox;                      //@synthesize mailbox=_mailbox - In the implementation block
-(MailAccount *)account;
-(void)setAccount:(MailAccount *)arg1 ;
-(id)init;
-(MFMailboxUid *)mailbox;
-(id)persistentID;
-(void)setMailbox:(MFMailboxUid *)arg1 ;
-(MFMessageHeaders *)fakeHeaders;
-(void)setFakeHeaders:(MFMessageHeaders *)arg1 ;
-(MFMessageHeaders *)headers;
-(void)setHeaders:(MFMessageHeaders *)arg1 ;
-(long long)mailboxID;
@end

