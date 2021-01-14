/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableArray *)dates;
-(NSMutableSet *)mailboxes;
-(id)combinedMailboxes;
-(id)combinedMessageFlags;
-(id)combinedDate;
-(void)setMailboxProvider:(MFMailboxProvider *)arg1 ;
-(NSMutableArray *)flags;
-(void)setDates:(NSMutableArray *)arg1 ;
-(void)setFlags:(NSMutableArray *)arg1 ;
-(void)addMessage:(id)arg1 ;
-(void)setMailboxes:(NSMutableSet *)arg1 ;
-(id)initWithMailboxProvider:(id)arg1 ;
-(MFMailboxProvider *)mailboxProvider;
@end

