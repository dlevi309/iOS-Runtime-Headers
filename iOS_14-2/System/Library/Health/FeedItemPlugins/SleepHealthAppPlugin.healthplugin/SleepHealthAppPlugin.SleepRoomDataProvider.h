/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/SleepHealthAppPlugin.healthplugin/SleepHealthAppPlugin
*/

#import <libobjc.A.dylib/HKFeatureAvailabilityProvidingObserver.h>

@interface SleepHealthAppPlugin.SleepRoomDataProvider : _UKNOWN_SUPERCLASS_ <HKFeatureAvailabilityProvidingObserver> {

	 dataType;
	 sleepScheduleProvider;
	 gregorianCalendarCache;
	 currentSleepEnabledSubscriber;
	 sleepStore;
	 featureAvailability;
	 onboardingDataSource;
	 sleepScheduleOffDataSource;
	 nextOccurrenceDataSource;
	 scheduleDataSource;
	 optionsDataSource;

}
-(void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1 ;
-(void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1 ;
@end

