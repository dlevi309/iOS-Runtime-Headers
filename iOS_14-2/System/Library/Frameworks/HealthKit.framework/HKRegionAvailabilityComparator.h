/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@interface HKRegionAvailabilityComparator : NSObject
+(id)_intersectAvailabilityRegions:(id)arg1 withAvailabilityRegions:(id)arg2 ;
+(BOOL)_applyMask:(id)arg1 toAvailableRegions:(id)arg2 ;
+(BOOL)_versionsMatchBetweenAvailabilityRegions:(id)arg1 availabilityRegions:(id)arg2 ;
+(long long)_handleResultWithFound:(BOOL)arg1 versionsMatch:(BOOL)arg2 ;
+(long long)isRegionCodeFound:(id)arg1 availabilityWatch:(id)arg2 availabilityPhone:(id)arg3 ;
+(long long)unitTest_isRegionCodeFound:(id)arg1 availabilityWatch:(id)arg2 availabilityPhone:(id)arg3 ;
@end

