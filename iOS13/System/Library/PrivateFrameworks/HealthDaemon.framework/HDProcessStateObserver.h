/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDProcessStateObserver <NSObject>
@optional
-(void)processTerminated:(id)arg1;
-(void)processWithBundleIdentifier:(id)arg1 didTransitionFromState:(unsigned)arg2 toState:(unsigned)arg3;
-(void)processSuspended:(id)arg1;
-(void)processResumed:(id)arg1;
-(void)processDidEnterBackground:(id)arg1;
-(void)processDidEnterForeground:(id)arg1;

@end

