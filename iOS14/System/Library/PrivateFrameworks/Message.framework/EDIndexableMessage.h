/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@protocol EDIndexableMessage <ECMessage>
@property (nonatomic,readonly) id<EDIndexableAccount> account; 
@property (nonatomic,readonly) id<EDIndexableMailbox> mailbox; 
@property (nonatomic,readonly) unsigned long long fileSize; 
@required
-(id<EDIndexableAccount>)account;
-(unsigned long long)fileSize;
-(id<EDIndexableMailbox>)mailbox;

@end

