/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (getter=_definition,nonatomic,readonly) SCD_Struct_HK19* definition; 
@property (nonatomic,readonly) long long code; 
@property (nonatomic,retain) HKObjectType * parentType;                                     //@synthesize parentType=_parentType - In the implementation block
@property (nonatomic,readonly) Class dataObjectClass; 
@property (nonatomic,readonly) BOOL isClinicalType; 
@property (readonly) NSString * identifier; 
+(BOOL)supportsSecureCoding;
+(id)workoutType;
+(id)_clinicalTypesFromTypes:(id)arg1 ;
+(id)_nonClinicalTypesFromTypes:(id)arg1 ;
+(BOOL)_allowAuthorizationForSharingWithTypes:(id)arg1 entitlements:(id)arg2 disallowedTypes:(id)arg3 ;
+(BOOL)_allowAuthorizationForReadingWithTypes:(id)arg1 entitlements:(id)arg2 disallowedTypes:(id)arg3 ;
+(id)characteristicTypeForIdentifier:(id)arg1 ;
+(id)dataTypeWithCode:(long long)arg1 ;
+(id)_objectTypeWithIdentifier:(id)arg1 class:(Class)arg2 lookupTable:(id)arg3 ;
+(id)unknownRecordTypeForIdentifier:(id)arg1 ;
+(id)medicationOrderTypeForIdentifier:(id)arg1 ;
+(id)allergyRecordTypeForIdentifier:(id)arg1 ;
+(id)activityCacheType;
+(id)_typeWithIdentifier:(id)arg1 ;
+(id)accountOwnerTypeForIdentifier:(id)arg1 ;
+(id)quantityTypeForIdentifier:(id)arg1 ;
+(id)objectTypeForWorkoutMetric:(unsigned long long)arg1 ;
+(id)documentTypeForIdentifier:(id)arg1 ;
+(id)fitnessFriendActivitySnapshotType;
+(id)categoryTypeForIdentifier:(id)arg1 ;
+(id)procedureRecordTypeForIdentifier:(id)arg1 ;
+(id)diagnosticTestResultTypeForIdentifier:(id)arg1 ;
+(id)activitySummaryType;
+(id)conditionRecordTypeForIdentifier:(id)arg1 ;
+(id)medicationDispenseRecordTypeForIdentifier:(id)arg1 ;
+(id)diagnosticTestReportTypeForIdentifier:(id)arg1 ;
+(id)_allTypesWithIdentifierTable:(id)arg1 ;
+(id)clinicalTypeForIdentifier:(id)arg1 ;
+(id)correlationTypeForIdentifier:(id)arg1 ;
+(id)seriesTypeForIdentifier:(id)arg1 ;
+(id)audiogramSampleType;
+(id)heartStudyEventType;
+(void)_enumerateObjectTypesWithHandler:(/*^block*/id)arg1 ;
+(id)_allDataTypeIdentifiers;
+(id)_allTypesOfClass:(Class)arg1 ;
+(id)_typesIncludingParentTypes:(id)arg1 ;
+(id)_allCategoryTypes;
+(id)_allCharacteristicTypes;
+(id)_allCorrelationTypes;
+(id)_allQuantityTypes;
+(id)dataTypeWithNumber:(id)arg1 ;
+(id)_objectTypesFromIdentifierArray:(id)arg1 error:(id*)arg2 ;
+(id)calorieGoal;
+(id)exerciseGoal;
+(id)standGoal;
+(id)briskMinuteDataType;
+(id)coachingEventType;
+(id)deepBreathingSessionType;
+(id)watchActivationType;
+(id)menstrualFlowType;
+(id)heartRateType;
+(id)tachycardiaType;
+(id)bradycardiaType;
+(id)irregularlyIrregularPulseType;
+(id)atrialFibrillationEventType;
+(id)fitnessFriendAchievementType;
+(id)fitnessFriendWorkoutType;
+(id)audioExposureEventType;
+(id)activityMoveModeChangeType;
+(id)medicalTypeForIdentifier:(id)arg1 ;
+(BOOL)_allowAuthorizationForSharing:(BOOL)arg1 types:(id)arg2 entitlements:(id)arg3 disallowedTypes:(id)arg4 ;
+(id)vaccinationRecordTypeForIdentifier:(id)arg1 ;
+(id)medicationRecordTypeForIdentifier:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)code;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(SCD_Struct_HK19*)_definition;
-(BOOL)_requiresAuthorization;
-(id)_hk_localizedNameKey;
-(id)hk_localizedName;
-(id)hk_localizedNameForLocale:(id)arg1 ;
-(id)hk_localizedNameForAuthSheet;
-(HKObjectType *)parentType;
-(id)_predicateForSDKVersion:(unsigned)arg1 ;
-(id)_initWithCode:(long long)arg1 ;
-(void)setParentType:(HKObjectType *)arg1 ;
-(BOOL)isClinicalType;
-(BOOL)isHealthRecordsType;
-(Class)dataObjectClass;
@end

