/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
*/


@protocol MFIMAPConnectionDelegate <NSObject>
@optional
-(BOOL)connection:(id)arg1 shouldHandleUntaggedResponse:(id)arg2 forCommand:(id)arg3;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 forCommand:(id)arg3;
-(void)connectionDidDisconnect:(id)arg1;
-(void)willRemoveDelegation:(id)arg1;
-(void)setServerMessageCount:(unsigned long long)arg1;
-(void)setHighestModSequence:(unsigned long long)arg1;
-(BOOL)shouldStartIdleForConnection:(id)arg1;

@end

