/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMNetworking.framework/FMNetworking
*/


@protocol APSConnectionDelegate <NSObject>
@optional
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
-(void)connectionDidReconnect:(id)arg1;
-(void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
-(void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;
-(void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2;

@required
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2;

@end

