/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
*/


@protocol ECIMAPLocalActionReplayerDelegate <ECLocalActionReplayerDelegate>
@required
-(id)imapMailboxNameForMailboxURL:(id)arg1;
-(id)flagsForIMAPUIDs:(id)arg1 mailboxURL:(id)arg2;
-(BOOL)checkUIDValidity:(unsigned)arg1 mailboxURL:(id)arg2;
-(id)messageDataForRemoteID:(id)arg1 mailboxURL:(id)arg2;
-(BOOL)errorIsIMAPError:(id)arg1;

@end

