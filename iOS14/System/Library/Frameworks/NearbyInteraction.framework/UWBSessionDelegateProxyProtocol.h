/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
*/


@protocol UWBSessionDelegateProxyProtocol <NSObject>
@required
-(void)uwbSessionDidFailWithError:(id)arg1;
-(void)uwbSessionDidInvalidateWithError:(id)arg1;
-(void)uwbSystemDidChangeState:(unsigned long long)arg1;
-(void)didUpdateNearbyObjects:(id)arg1;
-(void)didRemoveNearbyObjects:(id)arg1 withReason:(unsigned long long)arg2;
-(void)uwbSessionInterruptedWithReason:(long long)arg1 timestamp:(double)arg2;
-(void)uwbSessionInterruptionReasonEnded:(long long)arg1 timestamp:(double)arg2;
-(void)didDiscoverNearbyObject:(id)arg1;
-(void)objectDidEnter:(id)arg1 region:(id)arg2;
-(void)objectDidExit:(id)arg1 region:(id)arg2;

@end

