/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

