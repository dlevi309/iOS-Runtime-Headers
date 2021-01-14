/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol IDSSessionDelegate <NSObject>
@optional
-(void)session:(id)arg1 didReceiveData:(id)arg2;
-(void)sessionEnded:(id)arg1;
-(void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2;
-(void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2;
-(void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2;
-(void)sessionStarted:(id)arg1;
-(void)session:(id)arg1 didReceiveReport:(id)arg2;
-(void)sessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3;

@end

