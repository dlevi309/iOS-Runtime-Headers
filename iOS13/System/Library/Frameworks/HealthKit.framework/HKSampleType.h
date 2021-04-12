/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKObjectType.h>

@interface HKSampleType : HKObjectType

@property (nonatomic,readonly) BOOL isMaximumDurationRestricted; 
@property (nonatomic,readonly) double maximumAllowedDuration; 
@property (nonatomic,readonly) BOOL isMinimumDurationRestricted; 
@property (nonatomic,readonly) double minimumAllowedDuration; 
+(id)medicalRecordTypes;
-(BOOL)isMaximumDurationRestricted;
-(double)maximumAllowedDuration;
-(BOOL)isMinimumDurationRestricted;
-(double)minimumAllowedDuration;
-(id)_earliestAllowedStartDateForSampleOverlappingDate:(id)arg1 ;
-(BOOL)_validateMetadata:(id)arg1 sample:(id)arg2 error:(id*)arg3 ;
-(double)_maximumAllowedDuration;
-(double)_minimumAllowedDuration;
@end

