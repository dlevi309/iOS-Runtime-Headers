/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOHoursTestHelper : NSObject
+(id)dateWithString:(id)arg1 ;
+(id)_pdHoursFromHour:(long long)arg1 fromMinute:(long long)arg2 toHour:(long long)arg3 toMinute:(long long)arg4 inTimeZone:(id)arg5 onDay:(long long)arg6 month:(long long)arg7 year:(long long)arg8 openingThreshold:(double)arg9 closingThreshold:(double)arg10 shouldGoOverMidnight:(BOOL)arg11 ;
+(GEOPDLocalTimeRange)_rangeWithFromHour:(long long)arg1 fromMinute:(long long)arg2 toHour:(long long)arg3 toMinute:(long long)arg4 ;
+(id)testBusinessHoursForMKLocalizedHoursBuilderTest;
+(id)testBusinessHoursWithPermanentlyClosedHoursTypeForMKLocalizedHoursBuilderTest;
+(id)testBusinessHoursWithTemporaryClosedHoursTypeForMKLocalizedHoursBuilderTest;
+(id)testDateForMKLocalizedHoursBuilderTest;
+(id)testTimeZoneForMKLocalizedHoursBuilderTest;
+(id)testTimeZoneForGEOPlaceDailyHoursTest;
+(id)testingDictionaryForIsWeekdayInRange;
@end

