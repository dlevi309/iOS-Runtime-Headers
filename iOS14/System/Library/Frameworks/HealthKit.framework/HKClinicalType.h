/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKSampleType.h>

@interface HKClinicalType : HKSampleType
+(id)immunizationRecordType;
+(id)labResultRecordType;
+(id)vitalSignRecordType;
+(id)procedureRecordType;
+(id)conditionRecordType;
+(id)medicationRecordType;
+(id)coverageRecordType;
+(id)allTypes;
+(id)allergyRecordType;
-(BOOL)isClinicalType;
@end

