/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDInteractionEventLog
@required
-(void)persistEvent:(id)arg1 date:(id)arg2 message:(id)arg3 data:(id)arg4;
-(void)persistEvent:(id)arg1 date:(id)arg2 conversationID:(long long)arg3 data:(id)arg4;
-(void)persistEvent:(id)arg1 dataFromMessage:(id)arg2;
-(void)persistEvent:(id)arg1 dataFromMessage:(id)arg2 account:(id)arg3;
-(void)persistEvent:(id)arg1 date:(id)arg2 message:(id)arg3 mailbox:(id)arg4;
-(void)persistEvent:(id)arg1 date:(id)arg2 message:(id)arg3 mailboxType:(long long)arg4;

@end

