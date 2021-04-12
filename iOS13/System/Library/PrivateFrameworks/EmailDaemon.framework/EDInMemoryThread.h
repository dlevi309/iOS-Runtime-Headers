/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol EMMailboxTypeResolver;
@class NSMutableArray, EMThread, EMThreadScope, EFQuery, EMMessage, NSArray;

@interface EDInMemoryThread : NSObject <NSCopying> {

	NSMutableArray* _messages;
	NSMutableArray* _dateSortedMessages;
	EMThread* _thread;
	EMThreadScope* _threadScope;
	EFQuery* _originatingQuery;
	id<EMMailboxTypeResolver> _mailboxTypeResolver;
	EMMessage* _displayMessage;

}

@property (nonatomic,readonly) EMThreadScope * threadScope;                                //@synthesize threadScope=_threadScope - In the implementation block
@property (nonatomic,retain) EMThread * thread;                                            //@synthesize thread=_thread - In the implementation block
@property (nonatomic,readonly) EFQuery * originatingQuery;                                 //@synthesize originatingQuery=_originatingQuery - In the implementation block
@property (nonatomic,readonly) id<EMMailboxTypeResolver> mailboxTypeResolver;              //@synthesize mailboxTypeResolver=_mailboxTypeResolver - In the implementation block
@property (nonatomic,readonly) EMMessage * newestMessage; 
@property (nonatomic,retain) EMMessage * displayMessage;                                   //@synthesize displayMessage=_displayMessage - In the implementation block
@property (nonatomic,copy,readonly) NSArray * messages; 
+(id)_dateSortDescriptors;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)messages;
-(EMMessage *)displayMessage;
-(void)setDisplayMessage:(EMMessage *)arg1 ;
-(EMThread *)thread;
-(id)addMessages:(id)arg1 ;
-(EMThreadScope *)threadScope;
-(EFQuery *)originatingQuery;
-(id<EMMailboxTypeResolver>)mailboxTypeResolver;
-(void)setThread:(EMThread *)arg1 ;
-(BOOL)_isSortedByDate:(id)arg1 ;
-(void)_recalculateDisplayMessage;
-(id)_createThreadWithObjectID:(id)arg1 ;
-(EMMessage *)newestMessage;
-(id)_combinedSenderList;
-(id)_combinedToList;
-(id)_combinedCCList;
-(id)_combinedFlags;
-(BOOL)_combinedHasUnflagged;
-(id)_combinedFlagColors;
-(BOOL)_combinedIsVIP;
-(BOOL)_combinedIsBlocked;
-(BOOL)_combinedHasAttachments;
-(id)_combinedMailboxes;
-(id)initWithMessages:(id)arg1 originatingQuery:(id)arg2 mailboxTypeResolver:(id)arg3 ;
-(void)_addMessagesToThread:(id)arg1 ;
-(id)_calculateAndApplyChange;
-(id)_calculateChangesAfterRemovingMessages:(id)arg1 applyingChanges:(id)arg2 threadIsEmpty:(BOOL*)arg3 ;
-(id)removeMessages:(id)arg1 threadIsEmpty:(BOOL*)arg2 ;
-(id)_dateSortedMessages;
-(id)changeMessages:(id)arg1 forKeyPaths:(id)arg2 threadIsEmpty:(BOOL*)arg3 ;
-(id)updateMessage:(id)arg1 fromOldObjectID:(id)arg2 ;
@end

