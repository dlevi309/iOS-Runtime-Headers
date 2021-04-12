/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@interface CALNTimeToLeaveEventTrackerUtilities : NSObject
+(id)ttlEventTrackerAlertTypeForTravelAdvisoryTimelinessPeriod:(unsigned long long)arg1 ;
+(unsigned long long)ttlEventTrackerTransportTypeForGEOTransportType:(int)arg1 ;
+(unsigned long long)ttlEventTrackerETATypeForHypothesis:(id)arg1 ;
+(unsigned long long)ttlEventTrackerTravelStateForHypothesisTravelState:(long long)arg1 ;
+(unsigned long long)ttlEventTrackerAlertTypeForDate:(id)arg1 hypothesis:(id)arg2 ;
+(void)trackDirectionsEngagedForNotificationUsingTTLEventTracker:(id)arg1 hypothesis:(id)arg2 lastFireTimeOfAlertOffsetFromTravelTime:(id)arg3 hasSuggestedLocation:(BOOL)arg4 isOnSharedCalendar:(BOOL)arg5 ;
@end

