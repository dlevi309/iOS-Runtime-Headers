/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@interface EKTTLEventTracker : NSObject
+(id)ttlCandidateEventTracker;
+(id)eventFiredTTLAlertTracker;
+(id)eventFiredTTLAlertSharedCalendarSupportingTracker;
+(id)isTTLEnabledTracker;
+(id)directionsEngagedEventTracker;
+(id)directionsEngagedSharedCalendarSupportingTracker;
+(id)_boolEnumMapping;
+(id)_alertTypeMapping;
+(id)_transportTypeMapping;
+(id)_etaTypeMapping;
+(id)_travelStateMapping;
+(void)trackTTLCandidateEventHasSuggestedLocation:(BOOL)arg1 isOnSharedCalendar:(BOOL)arg2 ;
+(void)trackEventFiredTTLAlertWithAlertType:(unsigned long long)arg1 transportType:(unsigned long long)arg2 etaType:(unsigned long long)arg3 travelState:(unsigned long long)arg4 hasSuggestedLocation:(BOOL)arg5 isOnSharedCalendar:(BOOL)arg6 ;
+(void)trackIsTTLEnabled:(BOOL)arg1 ;
+(void)trackDirectionsEngagedForTTLAlertWithAlertType:(unsigned long long)arg1 transportType:(unsigned long long)arg2 etaType:(unsigned long long)arg3 hasSuggestedLocation:(BOOL)arg4 isOnSharedCalendar:(BOOL)arg5 ;
+(id)significantEventTracker;
@end

