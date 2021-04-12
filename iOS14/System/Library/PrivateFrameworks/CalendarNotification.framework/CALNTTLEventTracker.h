/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNTTLEventTracker
@required
-(void)trackEventFiredTTLAlertWithAlertType:(unsigned long long)arg1 transportType:(unsigned long long)arg2 etaType:(unsigned long long)arg3 travelState:(unsigned long long)arg4 hasSuggestedLocation:(BOOL)arg5 isOnSharedCalendar:(BOOL)arg6;
-(void)trackDirectionsEngagedForTTLAlertWithTransportType:(unsigned long long)arg1 etaType:(unsigned long long)arg2 hasSuggestedLocation:(BOOL)arg3 isOnSharedCalendar:(BOOL)arg4;
-(void)trackEmailEngagedForTTLAlertWithTransportType:(unsigned long long)arg1 etaType:(unsigned long long)arg2 hasSuggestedLocation:(BOOL)arg3 isOnSharedCalendar:(BOOL)arg4;

@end

