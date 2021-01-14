/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/Safety.healthplugin/Safety
*/


@interface Safety.SafetyFeatureStatusAvailability : NSObject {

	 healthStore;
	 emergencySOSFeatureStatusPublisher;
	 fallDetectionFeatureStatusPublisher;
	 callWithSideButtonKey;
	 autoCallKey;
	 countdownAudioKey;
	 sosDefaults;

}
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)pairedDevicesDidUpdate;
-(void)dealloc;
@end

