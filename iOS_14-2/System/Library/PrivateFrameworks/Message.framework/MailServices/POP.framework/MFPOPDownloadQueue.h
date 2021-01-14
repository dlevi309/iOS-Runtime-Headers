/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/POP.framework/POP
*/

#import <Message/MFBufferedQueue.h>

@class MFSqliteMessageIDStore, MFMailMessageLibrary, MFMailboxUid, NSDate;

@interface MFPOPDownloadQueue : MFBufferedQueue {

	MFSqliteMessageIDStore* _uidStore;
	MFMailMessageLibrary* _library;
	MFMailboxUid* _mailbox;
	NSDate* startDate;

}
-(BOOL)addItem:(id)arg1 ;
-(id)init;
-(unsigned long long)sizeForItem:(id)arg1 ;
-(BOOL)handleItems:(id)arg1 ;
@end

