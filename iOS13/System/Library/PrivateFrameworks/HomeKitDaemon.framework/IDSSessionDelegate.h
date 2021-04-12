/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol IDSSessionDelegate <NSObject>
@optional
-(void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2;
-(void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2;
-(void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2;
-(void)sessionStarted:(id)arg1;
-(void)sessionEnded:(id)arg1;
-(void)sessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3;
-(void)session:(id)arg1 didReceiveData:(id)arg2;
-(void)session:(id)arg1 didReceiveReport:(id)arg2;

@end

