/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNCommuteDestinationObserver <NSObject>
@optional
-(void)commuteDestination:(id)arg1 didChangeInvalid:(BOOL)arg2;
-(void)commuteDestination:(id)arg1 didChangeRoute:(id)arg2;
-(void)commuteDestination:(id)arg1 didUpdateTrafficForRoute:(id)arg2;
-(void)commuteDestination:(id)arg1 didChangeLastMatchedLocation:(id)arg2;
-(void)commuteDestination:(id)arg1 didChangeRemainingTime:(double)arg2;
-(void)commuteDestination:(id)arg1 didChangeRemainingDistance:(double)arg2;
-(void)commuteDestination:(id)arg1 didChangeRerouting:(BOOL)arg2;
-(void)commuteDestination:(id)arg1 didChangeLastLocation:(id)arg2;
-(void)commuteDestination:(id)arg1 didChangeScore:(long long)arg2;
-(void)commuteDestination:(id)arg1 didChangeScores:(id)arg2;

@end

