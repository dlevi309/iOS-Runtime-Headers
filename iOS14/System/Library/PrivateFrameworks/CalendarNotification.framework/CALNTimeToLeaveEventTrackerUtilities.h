/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@interface CALNTimeToLeaveEventTrackerUtilities : NSObject
+(id)ttlEventTrackerAlertTypeForTravelAdvisoryTimelinessPeriod:(unsigned long long)arg1 ;
+(unsigned long long)ttlEventTrackerTransportTypeForGEOTransportType:(int)arg1 ;
+(unsigned long long)ttlEventTrackerETATypeForHypothesis:(id)arg1 ;
+(unsigned long long)ttlEventTrackerTravelStateForHypothesisTravelState:(long long)arg1 ;
+(unsigned long long)ttlEventTrackerAlertTypeForDate:(id)arg1 hypothesis:(id)arg2 ;
+(void)trackDirectionsEngagedForNotificationUsingTTLEventTracker:(id)arg1 hypothesis:(id)arg2 hasSuggestedLocation:(BOOL)arg3 isOnSharedCalendar:(BOOL)arg4 ;
+(void)trackEmailEngagedForNotificationUsingTTLEventTracker:(id)arg1 hypothesis:(id)arg2 hasSuggestedLocation:(BOOL)arg3 isOnSharedCalendar:(BOOL)arg4 ;
@end

