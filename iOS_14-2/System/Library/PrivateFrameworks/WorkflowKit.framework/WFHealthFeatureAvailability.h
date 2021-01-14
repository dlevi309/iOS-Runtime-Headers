/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/HKFeatureAvailabilityProvidingObserver.h>

@protocol WFHealthFeatureObserver, OS_dispatch_queue;
@class HKSPFeatureAvailabilityStore, NSObject, NSString;

@interface WFHealthFeatureAvailability : NSObject <HKFeatureAvailabilityProvidingObserver> {

	id<WFHealthFeatureObserver> _observer;
	HKSPFeatureAvailabilityStore* _store;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _onboardingCompletedKey;

}

@property (nonatomic,retain) HKSPFeatureAvailabilityStore * store;                     //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) unsigned long long sleepOnboardingStatus; 
@property (nonatomic,readonly) NSString * onboardingCompletedKey;                      //@synthesize onboardingCompletedKey=_onboardingCompletedKey - In the implementation block
@property (assign,nonatomic,__weak) id<WFHealthFeatureObserver> observer;              //@synthesize observer=_observer - In the implementation block
-(void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1 ;
-(void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1 ;
-(void)setStore:(HKSPFeatureAvailabilityStore *)arg1 ;
-(void)setObserver:(id<WFHealthFeatureObserver>)arg1 ;
-(id<WFHealthFeatureObserver>)observer;
-(HKSPFeatureAvailabilityStore *)store;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
-(unsigned long long)sleepOnboardingStatus;
-(id)initWithSleepFeature:(unsigned long long)arg1 ;
-(void)setSleepOnboardingStatus:(unsigned long long)arg1 ;
-(void)getSleepOnboardingStatus:(/*^block*/id)arg1 ;
-(NSString *)onboardingCompletedKey;
@end

