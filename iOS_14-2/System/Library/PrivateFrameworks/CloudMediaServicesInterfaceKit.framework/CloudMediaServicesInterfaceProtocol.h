/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit
*/


@protocol CloudMediaServicesInterfaceProtocol <NSObject>
@required
-(void)setServerEnvironment:(id)arg1;
-(void)playSample:(id)arg1;
-(void)sendPlaybackQueueToRemoteDestination:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)sendPlaybackQueueWithUserActivityDictionary:(id)arg1 forIntentID:(id)arg2 toDestination:(id)arg3 withIntentData:(id)arg4 prepareQueue:(BOOL)arg5;
-(void)pauseSample;
-(void)setOverrideURL:(id)arg1;
-(void)getCloudExtensionConfigurationFor:(id)arg1 homeUserID:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)submitAnalyticsForType:(id)arg1 andIdentifier:(id)arg2 eventType:(id)arg3 atTime:(id)arg4 withMetadata:(id)arg5;
-(void)stopAnalyticsWithIdentifier:(id)arg1;

@end

