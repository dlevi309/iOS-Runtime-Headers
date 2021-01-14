/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/


@protocol CARSessionObserving <NSObject>
@optional
-(void)sessionDidDisconnect:(id)arg1;
-(void)sessionDidConnect:(id)arg1;
-(void)startedConnectionAttemptOnTransport:(unsigned long long)arg1;
-(void)cancelledConnectionAttemptOnTransport:(unsigned long long)arg1;
-(void)session:(id)arg1 didUpdateConfiguration:(id)arg2;

@end

