/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HKObjectType : NSObject <NSSecureCoding, NSCopying> {

	short _code;
	HKObjectType* _parentType;

}

@property (getter=_definition,nonatomic,readonly) SCD_Struct_HK22* definition; 
@property (nonatomic,readonly) long long code; 
@property (nonatomic,retain) HKObjectType * parentType;                                     //@synthesize parentType=_parentType - In the implementation block
@property (nonatomic,readonly) Class dataObjectClass; 
@property (nonatomic,readonly) BOOL isClinicalType; 
@property (nonatomic,readonly) BOOL supportsExport; 
@property (readonly) NSString * identifier; 
+(BOOL)supportsSecureCoding;
+(id)accountOwnerTypeForIdentifier:(id)arg1 ;
+(id)dataTypeWithCode:(long long)arg1 ;
+(id)quantityTypeForIdentifier:(id)arg1 ;
+(id)objectTypeForWorkoutMetric:(unsigned long long)arg1 ;
+(id)documentTypeForIdentifier:(id)arg1 ;
+(id)clinicalTypeForIdentifier:(id)arg1 ;
+(id)vaccinationRecordTypeForIdentifier:(id)arg1 ;
+(id)fitnessFriendActivitySnapshotType;
+(id)categoryTypeForIdentifier:(id)arg1 ;
+(id)procedureRecordTypeForIdentifier:(id)arg1 ;
+(id)diagnosticTestResultTypeForIdentifier:(id)arg1 ;
+(id)medicationRecordTypeForIdentifier:(id)arg1 ;
+(id)activitySummaryType;
+(id)conditionRecordTypeForIdentifier:(id)arg1 ;
+(id)electrocardiogramType;
+(id)diagnosticTestReportTypeForIdentifier:(id)arg1 ;
+(id)medicationDispenseRecordTypeForIdentifier:(id)arg1 ;
+(id)coverageRecordTypeForIdentifier:(id)arg1 ;
+(id)standGoal;
+(id)calorieGoal;
+(id)workoutType;
+(void)_enumerateDataTypeCodesWithHandler:(/*^block*/id)arg1 ;
+(id)_dataTypeWithCode:(long long)arg1 expectedClass:(Class)arg2 ;
+(void)_enumerateObjectTypesWithHandler:(/*^block*/id)arg1 ;
+(long long)_typeCodeForIdentifier:(id)arg1 ;
+(id)heartStudyEventType;
+(id)_allDataTypeIdentifiers;
+(id)_allTypesOfClass:(Class)arg1 ;
+(id)_allBinarySampleTypes;
+(id)_typesIncludingParentTypes:(id)arg1 ;
+(id)exerciseGoal;
+(id)dataTypeWithNumber:(id)arg1 ;
+(id)correlationTypeForIdentifier:(id)arg1 ;
+(id)seriesTypeForIdentifier:(id)arg1 ;
+(id)audiogramSampleType;
+(id)moveMinuteGoal;
+(id)_objectTypesFromIdentifierArray:(id)arg1 error:(id*)arg2 ;
+(id)briskMinuteDataType;
+(id)coachingEventType;
+(id)deepBreathingSessionType;
+(id)watchActivationType;
+(id)heartRateType;
+(id)tachycardiaType;
+(id)bradycardiaType;
+(id)irregularlyIrregularPulseType;
+(id)atrialFibrillationEventType;
+(id)fitnessFriendAchievementType;
+(id)fitnessFriendWorkoutType;
+(id)activityMoveModeChangeType;
+(id)environmentalAudioExposureEventType;
+(id)headphoneAudioExposureEventType;
+(id)menstrualFlowType;
+(id)sleepDurationGoalType;
+(id)handwashingEventType;
+(id)medicalTypeForIdentifier:(id)arg1 ;
+(BOOL)_allowAuthorizationForSharing:(BOOL)arg1 types:(id)arg2 entitlements:(id)arg3 disallowedTypes:(id)arg4 ;
+(id)_clinicalTypesFromTypes:(id)arg1 ;
+(id)_nonClinicalTypesFromTypes:(id)arg1 ;
+(BOOL)_allowAuthorizationForSharingWithTypes:(id)arg1 entitlements:(id)arg2 disallowedTypes:(id)arg3 ;
+(BOOL)_allowAuthorizationForReadingWithTypes:(id)arg1 entitlements:(id)arg2 disallowedTypes:(id)arg3 ;
+(id)characteristicTypeForIdentifier:(id)arg1 ;
+(id)_typeWithIdentifier:(id)arg1 expectedClass:(Class)arg2 ;
+(id)unknownRecordTypeForIdentifier:(id)arg1 ;
+(id)medicationOrderTypeForIdentifier:(id)arg1 ;
+(id)allergyRecordTypeForIdentifier:(id)arg1 ;
+(id)sleepScheduleType;
+(id)activityCacheType;
+(id)_typeWithIdentifier:(id)arg1 ;
-(id)init;
-(id)_predicateForSDKVersion:(unsigned)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(Class)dataObjectClass;
-(BOOL)_requiresAuthorization;
-(id)description;
-(SCD_Struct_HK22*)_definition;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithCode:(long long)arg1 ;
-(long long)code;
-(void)setParentType:(HKObjectType *)arg1 ;
-(BOOL)isClinicalType;
-(BOOL)supportsExport;
-(BOOL)isHealthRecordsType;
-(NSString *)identifier;
-(id)_hk_localizedNameKey;
-(id)hk_localizedName;
-(id)hk_localizedNameForLocale:(id)arg1 ;
-(id)hk_localizedNameForAuthSheet;
-(HKObjectType *)parentType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

