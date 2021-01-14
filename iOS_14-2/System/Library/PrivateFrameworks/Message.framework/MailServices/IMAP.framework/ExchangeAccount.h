/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
*/

#import <IMAP/IMAPAccount.h>

@interface ExchangeAccount : IMAPAccount
+(id)accountTypeString;
-(id)_defaultSpecialMailboxNameForType:(int)arg1 ;
-(BOOL)shouldExpungeMessagesOnDelete;
-(Class)connectionClass;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg1 ;
-(void)_filterMailboxList:(id)arg1 forMailboxWithPath:(id)arg2 iisServer:(id)arg3 ;
-(BOOL)_syncOnly_defaultValueForShouldStoreJunkOnServer;
-(BOOL)storeDraftsOnServer;
-(BOOL)storeSentMessagesOnServer;
-(void)filterMailboxList:(id)arg1 forMailbox:(id)arg2 options:(int)arg3 ;
@end

