/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol TITypingSessionAggregatedEventObserver <NSObject>
@optional
-(void)candidateEntered:(id)arg1 sessionID:(id)arg2 timeStamp:(double)arg3 action:(unsigned long long)arg4;
-(void)candidateRevised:(id)arg1 newCandidate:(id)arg2 sessionID:(id)arg3 timeStamp:(double)arg4 revisionAction:(unsigned long long)arg5;

@required
-(void)sessionDidEnd:(id)arg1 aligned:(id)arg2;

@end

