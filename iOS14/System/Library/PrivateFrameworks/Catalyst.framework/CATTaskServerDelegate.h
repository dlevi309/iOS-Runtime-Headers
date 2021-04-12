/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/


@protocol CATTaskServerDelegate <NSObject>
@optional
-(void)serverDidInvalidate:(id)arg1;
-(BOOL)server:(id)arg1 clientSession:(id)arg2 shouldConnectWithTransport:(id)arg3;
-(void)server:(id)arg1 clientSession:(id)arg2 didReceiveNotificationWithName:(id)arg3 userInfo:(id)arg4;
-(void)server:(id)arg1 clientSession:(id)arg2 enqueueOperation:(id)arg3;
-(void)server:(id)arg1 clientSessionDidConnect:(id)arg2;
-(void)server:(id)arg1 clientSessionDidDisconnect:(id)arg2;
-(void)server:(id)arg1 clientSessionDidInvalidate:(id)arg2;

@required
-(id)server:(id)arg1 clientSession:(id)arg2 operationForRequest:(id)arg3 error:(id*)arg4;
-(void)server:(id)arg1 clientSession:(id)arg2 didInterruptWithError:(id)arg3;

@end

