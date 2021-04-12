/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKSampleType.h>

@interface HKClinicalType : HKSampleType
+(id)allTypes;
+(id)allergyRecordType;
+(id)procedureRecordType;
+(id)conditionRecordType;
+(id)medicationRecordType;
+(id)immunizationRecordType;
+(id)labResultRecordType;
+(id)vitalSignRecordType;
-(BOOL)isClinicalType;
@end

