/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@interface ATXGlobalAppScoresUtil : NSObject
+(int)locationTypeIndexFromRTLocationOfInterestType:(long long)arg1 ;
+(int)dayOfWeekIndexFromDate:(id)arg1 ;
+(int)timeOfDayIndexFromDate:(id)arg1 ;
+(id)initializeTrieAtPath:(id)arg1 ;
+(id)loadCoreMLModelWithName:(id)arg1 ;
+(id)normalizeValues:(id)arg1 ;
+(id)getContextKeyForTimeOfDayIndex:(int)arg1 dayOfWeekIndex:(int)arg2 locationIndex:(int)arg3 bundleIdIndex:(int)arg4 ;
@end

