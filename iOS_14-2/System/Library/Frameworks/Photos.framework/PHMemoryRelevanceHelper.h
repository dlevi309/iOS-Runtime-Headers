/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@interface PHMemoryRelevanceHelper : NSObject
+(double)relevanceScoreForMemory:(id)arg1 atDate:(id)arg2 ;
+(BOOL)_isMemoryTemporal:(id)arg1 ;
+(BOOL)isMemory:(id)arg1 relevantAtDate:(id)arg2 ;
+(BOOL)isMemory:(id)arg1 proactiveWorthyAtDate:(id)arg2 ;
+(BOOL)_isMemoryCategoryTemporal:(unsigned long long)arg1 ;
+(BOOL)_isMemorySubcategoryTemporal:(unsigned long long)arg1 ;
+(BOOL)_isDate:(id)arg1 inSameDayAndMonthAsDate:(id)arg2 ;
+(double)_notificationLevelWeightForMemory:(id)arg1 ;
+(double)_categoryWeightForMemory:(id)arg1 ;
+(double)_subcategoryWeightForMemory:(id)arg1 ;
@end

