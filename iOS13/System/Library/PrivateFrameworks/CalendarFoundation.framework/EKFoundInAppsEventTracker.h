/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@interface EKFoundInAppsEventTracker : NSObject
+(void)trackPseudoEventDateChanged;
+(void)trackPseudoEventDetailsOpened;
+(id)pseudoEventDateChangedTracker;
+(id)pseudoEventDetailsOpenedTracker;
+(id)pseudoEventExpiredTracker;
+(id)pseudoEventInitialTimeToLeaveFiredTracker;
+(void)trackPseudoEventsExpired:(int)arg1 ;
+(void)trackPseudoEventInitialTimeToLeaveFired;
@end

