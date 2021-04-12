/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/


@protocol TRTransferServerDelegate <NSObject>
@optional
-(void)server:(id)arg1 didFailToReceiveData:(id)arg2;
-(void)serverWillReceiveData:(id)arg1;
-(void)server:(id)arg1 didReceiveData:(id)arg2 replyHandler:(/*^block*/id)arg3;

@end

