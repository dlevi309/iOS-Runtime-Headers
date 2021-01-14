/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDPBBaseMessageFields
@property (assign,nonatomic) long long accountId; 
@property (assign,nonatomic) long long mailboxId; 
@property (assign,nonatomic) int mailboxType; 
@property (assign,nonatomic) long long conversationId; 
@property (assign,nonatomic) long long messageId; 
@required
-(void)setMessageId:(long long)arg1;
-(void)setAccountId:(long long)arg1;
-(int)mailboxType;
-(long long)conversationId;
-(long long)accountId;
-(void)setMailboxType:(int)arg1;
-(long long)messageId;
-(long long)mailboxId;
-(void)setMailboxId:(long long)arg1;
-(void)setConversationId:(long long)arg1;

@end

