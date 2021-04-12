/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNAnnoucementStrategy
@required
-(id)plan;
-(void)planForEvents:(id)arg1 distance:(double)arg2 speed:(double)arg3 previousEvent:(id)arg4 timeSinceLastEvent:(double)arg5;
-(id)nextEvent;

@end

