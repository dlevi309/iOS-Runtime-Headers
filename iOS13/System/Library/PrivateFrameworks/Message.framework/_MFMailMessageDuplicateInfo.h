/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class MFMailboxProvider, NSMutableSet, NSMutableArray;

@interface _MFMailMessageDuplicateInfo : NSObject {

	MFMailboxProvider* _mailboxProvider;
	NSMutableSet* _mailboxes;
	NSMutableArray* _flags;
	NSMutableArray* _dates;

}

@property (nonatomic,retain) MFMailboxProvider * mailboxProvider;              //@synthesize mailboxProvider=_mailboxProvider - In the implementation block
@property (nonatomic,retain) NSMutableSet * mailboxes;                         //@synthesize mailboxes=_mailboxes - In the implementation block
@property (nonatomic,retain) NSMutableArray * flags;                           //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSMutableArray * dates;                           //@synthesize dates=_dates - In the implementation block
-(NSMutableArray *)flags;
-(void)setFlags:(NSMutableArray *)arg1 ;
-(void)addMessage:(id)arg1 ;
-(NSMutableArray *)dates;
-(void)setDates:(NSMutableArray *)arg1 ;
-(NSMutableSet *)mailboxes;
-(id)initWithMailboxProvider:(id)arg1 ;
-(MFMailboxProvider *)mailboxProvider;
-(id)combinedMailboxes;
-(id)combinedMessageFlags;
-(id)combinedDate;
-(void)setMailboxProvider:(MFMailboxProvider *)arg1 ;
-(void)setMailboxes:(NSMutableSet *)arg1 ;
@end

