/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/


@protocol CATTaskSessionDelegate <NSObject>
@optional
-(void)sessionDidDisconnect:(id)arg1;
-(void)sessionDidConnect:(id)arg1;
-(void)sessionDidInvalidate:(id)arg1;
-(void)session:(id)arg1 enqueueOperation:(id)arg2;
-(void)session:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
-(void)session:(id)arg1 didInterruptWithError:(id)arg2;
-(void)sessionWillInvalidate:(id)arg1;

@required
-(BOOL)session:(id)arg1 shouldAcceptConnectionFromTransport:(id)arg2;
-(id)session:(id)arg1 prepareOperationForRequest:(id)arg2 error:(id*)arg3;

@end

