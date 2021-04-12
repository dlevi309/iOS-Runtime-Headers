/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol TITypingSessionAggregatedEventObserver <NSObject>
@optional
-(void)candidateEntered:(id)arg1 sessionID:(id)arg2 timeStamp:(double)arg3 action:(unsigned long long)arg4;
-(void)candidateRevised:(id)arg1 newCandidate:(id)arg2 sessionID:(id)arg3 timeStamp:(double)arg4 revisionAction:(unsigned long long)arg5;

@required
-(void)sessionDidEnd:(id)arg1 aligned:(id)arg2;

@end

