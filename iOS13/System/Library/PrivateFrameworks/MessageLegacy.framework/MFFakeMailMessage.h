/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
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
-(id)init;
-(MailAccount *)account;
-(void)setAccount:(MailAccount *)arg1 ;
-(id)persistentID;
-(void)setHeaders:(MFMessageHeaders *)arg1 ;
-(MFMessageHeaders *)headers;
-(MFMailboxUid *)mailbox;
-(void)setMailbox:(MFMailboxUid *)arg1 ;
-(long long)mailboxID;
-(MFMessageHeaders *)fakeHeaders;
-(void)setFakeHeaders:(MFMessageHeaders *)arg1 ;
@end

