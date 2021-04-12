/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/


@protocol CARSessionObserving <NSObject>
@optional
-(void)startedConnectionAttemptOnTransport:(unsigned long long)arg1;
-(void)cancelledConnectionAttemptOnTransport:(unsigned long long)arg1;
-(void)sessionDidConnect:(id)arg1;
-(void)sessionDidDisconnect:(id)arg1;
-(void)session:(id)arg1 didUpdateConfiguration:(id)arg2;

@end

