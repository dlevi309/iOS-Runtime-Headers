/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


#import <Message/Message-Structs.h>
@class NSString, MFMailboxUid;

@interface MFDbJournal : NSObject {

	NSString* _path;
	MFMailboxUid* _mailbox;
	opaque_pthread_mutex_t _lock;
	int _fd;

}
+(void)initialize;
+(id)legacyJournal;
+(id)_journalForMailbox:(id)arg1 ;
+(long long)mergeAllJournalsUsingConnection:(id)arg1 ;
-(void)dealloc;
-(id)initWithMailbox:(id)arg1 ;
-(long long)mergeUsingConnection:(id)arg1 ;
-(int)_processJournalFile:(id)arg1 connection:(id)arg2 ;
-(BOOL)_markMailboxForReconciliation:(BOOL)arg1 connection:(id)arg2 ;
@end

