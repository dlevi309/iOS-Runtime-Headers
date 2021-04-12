/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNNavigationStateObserver <NSObject>
@optional
-(void)stateManager:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
-(void)stateManager:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
-(void)stateManager:(id)arg1 didUpdatePossibleDestinations:(id)arg2;
-(void)stateManagerPredictingDidArrive:(id)arg1;

@end

