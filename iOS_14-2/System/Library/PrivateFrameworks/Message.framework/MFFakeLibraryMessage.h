/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/MFLibraryMessage.h>

@class MFMailboxUid, MFMailMessageLibrary, MailAccount;

@interface MFFakeLibraryMessage : MFLibraryMessage {

	MFMailboxUid* _mailboxUid;
	MFMailMessageLibrary* _library;
	MailAccount* _account;

}
+(id)messageWithRFC822Data:(id)arg1 mailboxUid:(id)arg2 library:(id)arg3 account:(id)arg4 ;
+(id)messageWithRFC822Data:(id)arg1 mailboxUid:(id)arg2 library:(id)arg3 ;
-(id)library;
-(id)account;
-(id)mailbox;
-(id)initWithMailboxUid:(id)arg1 library:(id)arg2 account:(id)arg3 ;
@end

