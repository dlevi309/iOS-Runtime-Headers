/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol ICMPPingProbeDelegate <NSObject>
@optional
-(void)icmpPingProbe:(id)arg1 completedIterations:(unsigned long long)arg2 successfulCount:(unsigned long long)arg3 withError:(id)arg4;
-(void)icmpPingProbe:(id)arg1 echoRequestSent:(id)arg2 success:(BOOL)arg3;
-(void)icmpPingProbe:(id)arg1 echoResponseReceived:(id)arg2 success:(BOOL)arg3;

@end

