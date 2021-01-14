/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/SleepHealthAppPlugin.healthplugin/SleepHealthAppPlugin
*/

#import <libobjc.A.dylib/HKSPSleepStorePrivateObserver.h>
#import <libobjc.A.dylib/HKFeatureAvailabilityProvidingObserver.h>

@interface SleepHealthAppPlugin.SleepOnboardingChangeDetector : NSObject <HKSPSleepStorePrivateObserver, HKFeatureAvailabilityProvidingObserver> {

	 sleepStore;
	 sleepEventRecord;
	 watchFeatureAvailability;
	 isAgeGatedObserver;
	 ageGatingDidChange;
	 onboardingCapability;

}
-(void)sleepStore:(id)arg1 sleepEventRecordDidChange:(id)arg2 ;
-(void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1 ;
-(void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

