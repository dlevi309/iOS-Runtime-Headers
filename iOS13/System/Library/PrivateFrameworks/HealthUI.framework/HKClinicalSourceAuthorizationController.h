/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class HKSource, NSArray, NSError, NSDate, HKHealthStore, HKHealthRecordsStore, NSSet, NSMutableSet;

@interface HKClinicalSourceAuthorizationController : NSObject {

	BOOL _anyDeterminedTypeAllowsReading;
	HKSource* _source;
	NSArray* _orderedTypesForReading;
	NSError* _fetchError;
	long long _authorizationModeForSource;
	NSDate* _displayReadAuthorizationAnchorDate;
	HKHealthStore* _healthStore;
	HKHealthRecordsStore* _healthRecordsStore;
	NSSet* _typesForReading;
	NSSet* _typesRequestedForReading;
	NSMutableSet* _typesEnabledForReading;
	/*^block*/id __unitTesting_reminderRegistryCompletion;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;                                                                            //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) HKHealthRecordsStore * healthRecordsStore;                                                              //@synthesize healthRecordsStore=_healthRecordsStore - In the implementation block
@property (nonatomic,copy) NSSet * typesForReading;                                                                                    //@synthesize typesForReading=_typesForReading - In the implementation block
@property (nonatomic,copy) NSError * fetchError;                                                                                       //@synthesize fetchError=_fetchError - In the implementation block
@property (nonatomic,copy,readonly) NSSet * typesRequestedForReading;                                                                  //@synthesize typesRequestedForReading=_typesRequestedForReading - In the implementation block
@property (nonatomic,readonly) NSMutableSet * typesEnabledForReading;                                                                  //@synthesize typesEnabledForReading=_typesEnabledForReading - In the implementation block
@property (assign,nonatomic) BOOL anyDeterminedTypeAllowsReading;                                                                      //@synthesize anyDeterminedTypeAllowsReading=_anyDeterminedTypeAllowsReading - In the implementation block
@property (assign,nonatomic) long long authorizationModeForSource;                                                                     //@synthesize authorizationModeForSource=_authorizationModeForSource - In the implementation block
@property (nonatomic,copy) NSDate * displayReadAuthorizationAnchorDate;                                                                //@synthesize displayReadAuthorizationAnchorDate=_displayReadAuthorizationAnchorDate - In the implementation block
@property (setter=_unitTesting_setReminderRegistryCompletion:,nonatomic,copy) id _unitTesting_reminderRegistryCompletion;              //@synthesize _unitTesting_reminderRegistryCompletion=__unitTesting_reminderRegistryCompletion - In the implementation block
@property (nonatomic,copy,readonly) HKSource * source;                                                                                 //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSArray * orderedTypesForReading;                                                                  //@synthesize orderedTypesForReading=_orderedTypesForReading - In the implementation block
@property (nonatomic,readonly) BOOL anyTypeRequested; 
-(HKSource *)source;
-(HKHealthStore *)healthStore;
-(void)reload;
-(void)setFetchError:(NSError *)arg1 ;
-(NSError *)fetchError;
-(HKHealthRecordsStore *)healthRecordsStore;
-(id)initWithHealthStore:(id)arg1 healthRecordsStore:(id)arg2 source:(id)arg3 typesRequestedForReading:(id)arg4 ;
-(BOOL)anyTypeRequested;
-(BOOL)anyTypeEnabled;
-(void)setAnyDeterminedTypeAllowsReading:(BOOL)arg1 ;
-(void)setAuthorizationModeForSource:(long long)arg1 ;
-(void)setDisplayReadAuthorizationAnchorDate:(NSDate *)arg1 ;
-(id)_fetchAllClinicalAuthorizationRecordsWithError:(id*)arg1 ;
-(NSSet *)typesRequestedForReading;
-(id)_orderTypes:(id)arg1 ;
-(NSSet *)typesForReading;
-(NSMutableSet *)typesEnabledForReading;
-(id)_authorizationStatusesWithTypes:(id)arg1 ;
-(long long)authorizationModeForSource;
-(id)_authorizationModesWithMode:(long long)arg1 types:(id)arg2 ;
-(void)_setAuthorizationStatuses:(id)arg1 modes:(id)arg2 shouldUpdateAnchor:(BOOL)arg3 ;
-(void)setEnabled:(BOOL)arg1 forType:(id)arg2 commit:(BOOL)arg3 ;
-(BOOL)_shouldUpdateDisplayReadAuthorizationAnchorDateWhenCommittingWithMode:(long long)arg1 ;
-(void)_commitModeConfirmationAlertRegistrationShouldDisplay:(BOOL)arg1 ;
-(id)_unitTesting_reminderRegistryCompletion;
-(long long)_authorizationStatusWithType:(id)arg1 ;
-(void)_updateReminderRegistrationIfNeededForCommittingModes:(id)arg1 anyTypeEnabled:(BOOL)arg2 ;
-(void)_updateDisplayReadAuthorizationAnchorDateIfNeededForCommittingModes:(id)arg1 ;
-(BOOL)isTypeEnabled:(id)arg1 ;
-(void)setEnabledForAllTypes:(BOOL)arg1 ;
-(void)commitAllTypesAndUpdateAuthorizationAnchorWithMode:(long long)arg1 ;
-(BOOL)allTypesEnabled;
-(NSArray *)orderedTypesForReading;
-(BOOL)anyDeterminedTypeAllowsReading;
-(NSDate *)displayReadAuthorizationAnchorDate;
-(void)setTypesForReading:(NSSet *)arg1 ;
-(void)_unitTesting_setReminderRegistryCompletion:(/*^block*/id)arg1 ;
@end

