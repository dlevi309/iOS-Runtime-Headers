/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
*/


@protocol MCSessionPrivateDelegate <NSObject>
@optional
-(void)session:(id)arg1 didReceiveCertificate:(id)arg2 fromPeer:(id)arg3 certificateHandler:(/*^block*/id)arg4 propagate:(BOOL*)arg5;

@required
-(void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3 propagate:(BOOL*)arg4;
-(void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4 propagate:(BOOL*)arg5;
-(void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5 propagate:(BOOL*)arg6;
-(void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4 propagate:(BOOL*)arg5;
-(void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3 propagate:(BOOL*)arg4;

@end

