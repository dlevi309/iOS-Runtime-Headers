/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKObjectType.h>

@interface HKSampleType : HKObjectType

@property (nonatomic,readonly) BOOL isMaximumDurationRestricted; 
@property (nonatomic,readonly) double maximumAllowedDuration; 
@property (nonatomic,readonly) BOOL isMinimumDurationRestricted; 
@property (nonatomic,readonly) double minimumAllowedDuration; 
+(id)medicalRecordTypesWithOptions:(unsigned long long)arg1 ;
+(id)medicalRecordTypes;
+(id)_sampleTypeWithCode:(long long)arg1 ;
-(BOOL)_validateMetadata:(id)arg1 sample:(id)arg2 error:(id*)arg3 ;
-(BOOL)isMinimumDurationRestricted;
-(double)minimumAllowedDuration;
-(id)_earliestAllowedStartDateForSampleOverlappingDate:(id)arg1 ;
-(double)maximumAllowedDuration;
-(double)_maximumAllowedDuration;
-(double)_minimumAllowedDuration;
-(BOOL)_validateStartDate:(double)arg1 endDate:(double)arg2 error:(id*)arg3 ;
-(BOOL)isMaximumDurationRestricted;
@end

