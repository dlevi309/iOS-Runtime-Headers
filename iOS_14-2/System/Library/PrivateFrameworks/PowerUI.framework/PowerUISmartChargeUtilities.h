/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/


@interface PowerUISmartChargeUtilities : NSObject
+(BOOL)isiPod;
+(BOOL)isiPad;
+(BOOL)isiPhone;
+(id)concatenateEventsPrivate:(id)arg1 ;
+(id)batteryProperties;
+(id)log;
+(id)getEngagementMetricsForDevice:(id)arg1 withKnowledgeStore:(id)arg2 ;
+(id)getEngagementMetricsWithDefaultKnowledgeStoreForDevice:(id)arg1 ;
+(id)lastPluggedInDateWithContext:(id)arg1 withStore:(id)arg2 ;
+(void)setDict:(id)arg1 forPreferenceKey:(id)arg2 inDomain:(id)arg3 ;
+(unsigned long long)decileClassificationWithStore:(id)arg1 withTopBinCutOff:(float*)arg2 withContext:(id)arg3 ;
+(BOOL)deviceHasEnoughPluggedInTimeWithMinimumDays:(double)arg1 withContext:(id)arg2 withKnowledgeStore:(id)arg3 ;
+(id)pluginEvents:(id)arg1 withMinimumDuration:(double)arg2 ;
+(id)historicalTopOffDurationsWithStore:(id)arg1 ;
+(void)recordEngagementEventAt:(id)arg1 withEngagedMinutes:(long long)arg2 withEligibleDurationMins:(long long)arg3 wasUndercharged:(BOOL)arg4 withKnowledgeStore:(id)arg5 ;
+(id)predicateForEventsWithinSeconds:(double)arg1 aroundTimeOfDay:(id)arg2 goingDaysBack:(int)arg3 ;
+(id)historicalEngagementsWithStore:(id)arg1 sortedAscending:(BOOL)arg2 ;
+(id)eventsAdjustedForTimeZoneOffsets:(id)arg1 ;
+(id)percentageOfTimeForBatteryLevels:(double*)arg1 withLog:(id)arg2 ;
+(BOOL)deviceWasConnectedToChargerWithinSeconds:(double)arg1 withContext:(id)arg2 ;
+(void)batteryLevelsWithStore:(id)arg1 withContext:(id)arg2 withBatteryLevelDurations:(double*)arg3 ;
+(BOOL)isInternalBuild;
+(void)recordEngagementEventAt:(id)arg1 withEngagedMinutes:(long long)arg2 withEligibleDurationMins:(long long)arg3 wasUndercharged:(BOOL)arg4 forDevice:(id)arg5 withKnowledgeStore:(id)arg6 ;
+(double)totalPluginDurationAfter:(id)arg1 withMinimumDuration:(double)arg2 withPluginEvents:(id)arg3 ;
+(BOOL)deviceWasActiveWithinSeconds:(double)arg1 withContext:(id)arg2 withStore:(id)arg3 ;
+(double)areaOverEightyWithStore:(id)arg1 withContext:(id)arg2 withBatteryLevelDurations:(double*)arg3 ;
+(id)roundedDateFromDate:(id)arg1 ;
+(void)setNumber:(id)arg1 forPreferenceKey:(id)arg2 inDomain:(id)arg3 ;
+(BOOL)deviceConnectedToWirelessChargerWithContext:(id)arg1 ;
+(id)getEngagementMetricsWithKnowledgeStore:(id)arg1 ;
+(id)getCurrentBootSessionUUID;
+(id)readDictForPreferenceKey:(id)arg1 inDomain:(id)arg2 ;
+(BOOL)isPluggedInWithContext:(id)arg1 ;
+(id)concatenateContinuousEventsOfSameState:(id)arg1 sortedAscending:(BOOL)arg2 ;
+(BOOL)isDesktopDeviceWithDurations:(double*)arg1 withAOEThreshold:(double)arg2 withStore:(id)arg3 withContext:(id)arg4 ;
+(id)pluginEventsBefore:(id)arg1 withMinimumDuration:(double)arg2 withStore:(id)arg3 ;
+(void)setString:(id)arg1 forPreferenceKey:(id)arg2 inDomain:(id)arg3 ;
+(long long)currentBatteryLevelWithContext:(id)arg1 ;
+(double)batteryLevelAtDate:(id)arg1 withCurrentBatteryLevel:(double)arg2 withKnowledgeStore:(id)arg3 withContextStore:(id)arg4 ;
+(id)readStringForPreferenceKey:(id)arg1 inDomain:(id)arg2 ;
+(id)numberForPreferenceKey:(id)arg1 inDomain:(id)arg2 ;
+(id)historicalChargeDurationsFromLevel:(int)arg1 toLevel:(int)arg2 filteredByMinimumPluginDuration:(double)arg3 withStore:(id)arg4 ;
+(id)dateForPreferenceKey:(id)arg1 inDomain:(id)arg2 ;
+(void)setDate:(id)arg1 forPreferenceKey:(id)arg2 inDomain:(id)arg3 ;
+(BOOL)isOBCSupported;
+(double)percentageOfBatteryDurations:(double*)arg1 aboveBatteryLevel:(double)arg2 ;
+(id)getEngagementMetricsWithDefaultKnowledgeStore;
@end

