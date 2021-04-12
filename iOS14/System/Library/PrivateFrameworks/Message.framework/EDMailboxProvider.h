/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@protocol EDMailboxProvider <EMMailboxTypeResolver>
@property (assign,nonatomic,__weak) id<EDMailboxProviderDelegate> delegate; 
@required
-(id<EDMailboxProviderDelegate>)delegate;
-(id)legacyMailboxForObjectID:(id)arg1;
-(void)fetchMailboxes;
-(void)setDelegate:(id)arg1;
-(id)mailboxForObjectID:(id)arg1;
-(id)allMailboxes;

@end

