/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@protocol EDIndexableMessage <ECMessage>
@property (nonatomic,readonly) id<EDIndexableAccount> account; 
@property (nonatomic,readonly) id<EDIndexableMailbox> mailbox; 
@property (nonatomic,readonly) unsigned long long fileSize; 
@required
-(unsigned long long)fileSize;
-(id<EDIndexableAccount>)account;
-(id<EDIndexableMailbox>)mailbox;

@end

