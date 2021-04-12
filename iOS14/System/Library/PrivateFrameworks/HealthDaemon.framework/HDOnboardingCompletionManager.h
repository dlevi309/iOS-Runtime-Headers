/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class HDProfile, NSMutableDictionary;

@interface HDOnboardingCompletionManager : NSObject {

	HDProfile* _profile;
	os_unfair_lock_s _lock;
	NSMutableDictionary* _observersByFeatureIdentifier;

}
-(void)unregisterObserver:(id)arg1 ;
-(void)_notifyObserversOfFeatureIdentifiers:(id)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(BOOL)resetOnboardingCompletionsForFeature:(id)arg1 error:(id*)arg2 ;
-(void)registerObserver:(id)arg1 featureIdentifier:(id)arg2 queue:(id)arg3 ;
-(BOOL)insertCodableOnboardingCompletions:(id)arg1 syncProvenance:(long long)arg2 error:(id*)arg3 ;
-(void)unregisterObserver:(id)arg1 featureIdentifier:(id)arg2 ;
-(BOOL)_insertCodableOnboardingCompletions:(id)arg1 syncProvenance:(long long)arg2 error:(id*)arg3 inaccessabilityHandler:(/*^block*/id)arg4 ;
-(BOOL)_performWriteTransactionAndNotifyObserversWithError:(id*)arg1 block:(/*^block*/id)arg2 inaccessibilityHandler:(/*^block*/id)arg3 ;
-(void)_lock_unregisterObserver:(id)arg1 featureIdentifier:(id)arg2 ;
-(id)onboardingCompletionsForHighestVersionOfFeatureIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)onboardingCompletionsForLowestVersionOfFeatureIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)insertOnboardingCompletion:(id)arg1 error:(id*)arg2 ;
@end

