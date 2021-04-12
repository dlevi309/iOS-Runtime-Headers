/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/


@protocol CATTaskSessionDelegate <NSObject>
@optional
-(void)sessionDidConnect:(id)arg1;
-(void)sessionDidDisconnect:(id)arg1;
-(void)session:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
-(void)session:(id)arg1 didInterruptWithError:(id)arg2;
-(void)sessionWillInvalidate:(id)arg1;
-(void)sessionDidInvalidate:(id)arg1;
-(void)session:(id)arg1 enqueueOperation:(id)arg2;

@required
-(id)session:(id)arg1 prepareOperationForRequest:(id)arg2 error:(id*)arg3;
-(BOOL)session:(id)arg1 shouldAcceptConnectionFromTransport:(id)arg2;

@end

