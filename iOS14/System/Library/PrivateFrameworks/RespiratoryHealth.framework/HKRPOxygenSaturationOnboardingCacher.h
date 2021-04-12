/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealth.framework/RespiratoryHealth
*/

#import <libobjc.A.dylib/HKFeatureAvailabilityProvidingObserver.h>

@protocol HKFeatureAvailabilityProviding, HKRPUserDefaultsSyncProviding, OS_dispatch_queue;
@class NSUserDefaults, NSObject;

@interface HKRPOxygenSaturationOnboardingCacher : NSObject <HKFeatureAvailabilityProvidingObserver> {

	id<HKFeatureAvailabilityProviding> _featureAvailabilityProvider;
	NSUserDefaults* _userDefaults;
	id<HKRPUserDefaultsSyncProviding> _userDefaultsSyncProvider;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1 ;
-(void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1 ;
-(void)dealloc;
-(id)initWithFeatureAvailabilityProviding:(id)arg1 userDefaults:(id)arg2 userDefaultsSyncProvider:(id)arg3 didStart:(/*^block*/id)arg4 ;
-(void)_queue_featureAvailabilityDidChange;
-(id)initWithFeatureAvailabilityProviding:(id)arg1 userDefaults:(id)arg2 userDefaultsSyncProvider:(id)arg3 ;
@end

