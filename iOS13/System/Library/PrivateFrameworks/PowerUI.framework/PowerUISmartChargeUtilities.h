/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/


@interface PowerUISmartChargeUtilities : NSObject
+(BOOL)isInternalBuild;
+(id)dateForPreferenceKey:(id)arg1 inDomain:(id)arg2 ;
+(id)numberForPreferenceKey:(id)arg1 inDomain:(id)arg2 ;
+(id)eventsAdjustedForTimeZoneOffsets:(id)arg1 ;
+(void)setDate:(id)arg1 forPreferenceKey:(id)arg2 inDomain:(id)arg3 ;
+(void)setNumber:(id)arg1 forPreferenceKey:(id)arg2 inDomain:(id)arg3 ;
+(id)historicalTopOffDurations;
+(id)historicalEngagementsSortedAscending:(BOOL)arg1 ;
+(double)currentBatteryLevelWithContext:(id)arg1 ;
+(BOOL)isPluggedInWithContext:(id)arg1 ;
+(id)lastPluggedInDateWithContext:(id)arg1 ;
+(BOOL)deviceWasActiveWithinSeconds:(double)arg1 withContext:(id)arg2 ;
+(BOOL)deviceWasConnectedToChargerWithinSeconds:(double)arg1 withContext:(id)arg2 ;
+(BOOL)deviceConnectedToWirelessChargerWithContext:(id)arg1 ;
+(id)historicalChargeDurationsFromLevel:(int)arg1 toLevel:(int)arg2 filteredByMinimumPluginDuration:(double)arg3 ;
+(id)predicateForEventsWithinSeconds:(double)arg1 aroundTimeOfDay:(id)arg2 goingDaysBack:(int)arg3 ;
+(id)batteryProperties;
@end

