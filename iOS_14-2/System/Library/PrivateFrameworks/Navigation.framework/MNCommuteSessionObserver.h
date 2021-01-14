/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNCommuteSessionObserver <NSObject>
@optional
-(void)commuteSessionDidArrive:(id)arg1;
-(void)commuteSession:(id)arg1 didChangeToState:(unsigned long long)arg2;

@required
-(void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2;

@end

