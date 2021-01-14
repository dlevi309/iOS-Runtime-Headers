/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKFeatureAvailabilityStoreServer.h>
#import <libobjc.A.dylib/HDFeatureAvailabilityExtensionObserver.h>

@protocol HDFeatureAvailabilityExtension, OS_dispatch_queue;
@class NSObject, NSString;

@interface HDFeatureAvailabilityStoreServer : HDStandardTaskServer <HKFeatureAvailabilityStoreServer, HDFeatureAvailabilityExtensionObserver> {

	id<HDFeatureAvailabilityExtension> _extension;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5 ;
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
+(id)taskIdentifier;
+(Class)configurationClass;
-(void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1 ;
-(void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1 ;
-(id)_clientRemoteObjectProxy;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_getIsCurrentOnboardingVersionCompletedWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_canCompleteOnboardingForCountryCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_highestOnboardingVersionCompletedWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_canCompleteOnboardingForCountryCode:(id)arg1 devicePairingID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_onboardedCountryCodeSupportedStateWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_onboardedCountryCodeSupportedStateForDevicePairingID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_resetOnboardingWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_getIsFeatureCapabilitySupportedOnActivePairedDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_stopObservingChanges;
-(void)remote_getIsFeatureCapabilitySupportedOnDeviceWithPairingID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_earliestDateLowestOnboardingVersionCompletedWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_startObservingChangesWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_setCurrentOnboardingVersionCompletedForCountryCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_hasWriteEntitlementWithError:(id*)arg1 ;
-(void)_configureWithExtension:(id)arg1 ;
@end

