/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@protocol EDMailboxProvider <EMMailboxTypeResolver>
@property (assign,nonatomic,__weak) id<EDMailboxProviderDelegate> delegate; 
@required
-(id<EDMailboxProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)legacyMailboxForObjectID:(id)arg1;
-(id)allMailboxes;
-(id)mailboxForObjectID:(id)arg1;
-(void)fetchMailboxes;

@end

