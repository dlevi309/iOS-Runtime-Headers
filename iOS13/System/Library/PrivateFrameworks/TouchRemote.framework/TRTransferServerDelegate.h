/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/


@protocol TRTransferServerDelegate <NSObject>
@optional
-(void)server:(id)arg1 didFailToReceiveData:(id)arg2;
-(void)serverWillReceiveData:(id)arg1;
-(void)server:(id)arg1 didReceiveData:(id)arg2 replyHandler:(/*^block*/id)arg3;

@end

