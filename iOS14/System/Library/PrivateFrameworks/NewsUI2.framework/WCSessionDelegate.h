/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/


@protocol WCSessionDelegate <NSObject>
@optional
-(void)sessionWatchStateDidChange:(id)arg1;
-(void)sessionCompanionAppInstalledDidChange:(id)arg1;
-(void)sessionReachabilityDidChange:(id)arg1;
-(void)session:(id)arg1 didReceiveMessage:(id)arg2;
-(void)session:(id)arg1 didReceiveMessage:(id)arg2 replyHandler:(/*^block*/id)arg3;
-(void)session:(id)arg1 didReceiveMessageData:(id)arg2;
-(void)session:(id)arg1 didReceiveMessageData:(id)arg2 replyHandler:(/*^block*/id)arg3;
-(void)session:(id)arg1 didReceiveApplicationContext:(id)arg2;
-(void)session:(id)arg1 didFinishUserInfoTransfer:(id)arg2 error:(id)arg3;
-(void)session:(id)arg1 didFinishUserInfoTransfer:(id)arg2 error:(id)arg3;
-(void)session:(id)arg1 didReceiveUserInfo:(id)arg2;
-(void)session:(id)arg1 didFinishFileTransfer:(id)arg2 error:(id)arg3;
-(void)session:(id)arg1 didFinishFileTransfer:(id)arg2 error:(id)arg3;
-(void)session:(id)arg1 didReceiveFile:(id)arg2;
-(void)session:(id)arg1 didReceiveFile:(id)arg2;

@required
-(void)session:(id)arg1 activationDidCompleteWithState:(long long)arg2 error:(id)arg3;
-(void)session:(id)arg1 activationDidCompleteWithState:(long long)arg2 error:(id)arg3;
-(void)sessionDidBecomeInactive:(id)arg1;
-(void)sessionDidDeactivate:(id)arg1;

@end

