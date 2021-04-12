/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDProcessStateObserver <NSObject>
@optional
-(void)processWithBundleIdentifier:(id)arg1 didTransitionFromState:(unsigned)arg2 toState:(unsigned)arg3;
-(void)processSuspended:(id)arg1;
-(void)processResumed:(id)arg1;
-(void)processTerminated:(id)arg1;
-(void)processDidEnterBackground:(id)arg1;
-(void)processDidEnterForeground:(id)arg1;

@end

