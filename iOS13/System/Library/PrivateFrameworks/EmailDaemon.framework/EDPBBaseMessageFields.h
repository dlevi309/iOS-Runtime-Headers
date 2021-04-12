/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDPBBaseMessageFields
@property (assign,nonatomic) long long accountId; 
@property (assign,nonatomic) long long mailboxId; 
@property (assign,nonatomic) int mailboxType; 
@property (assign,nonatomic) long long conversationId; 
@property (assign,nonatomic) long long messageId; 
@required
-(long long)messageId;
-(void)setMessageId:(long long)arg1;
-(long long)accountId;
-(void)setAccountId:(long long)arg1;
-(int)mailboxType;
-(void)setMailboxType:(int)arg1;
-(long long)conversationId;
-(long long)mailboxId;
-(void)setMailboxId:(long long)arg1;
-(void)setConversationId:(long long)arg1;

@end

