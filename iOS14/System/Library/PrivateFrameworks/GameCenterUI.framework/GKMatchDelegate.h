/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/


@protocol GKMatchDelegate <NSObject>
@optional
-(void)match:(id)arg1 didReceiveData:(id)arg2 fromRemotePlayer:(id)arg3;
-(void)match:(id)arg1 didReceiveData:(id)arg2 forRecipient:(id)arg3 fromRemotePlayer:(id)arg4;
-(void)match:(id)arg1 player:(id)arg2 didChangeConnectionState:(long long)arg3;
-(void)match:(id)arg1 didFailWithError:(id)arg2;
-(BOOL)match:(id)arg1 shouldReinviteDisconnectedPlayer:(id)arg2;
-(void)match:(id)arg1 didReceiveData:(id)arg2 fromPlayer:(id)arg3;
-(void)match:(id)arg1 player:(id)arg2 didChangeState:(long long)arg3;
-(BOOL)match:(id)arg1 shouldReinvitePlayer:(id)arg2;

@end

