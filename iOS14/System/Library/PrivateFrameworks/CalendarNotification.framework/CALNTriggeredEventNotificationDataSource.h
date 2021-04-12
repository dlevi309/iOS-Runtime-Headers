/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNTriggeredEventNotificationDataSource
@property (assign,nonatomic,__weak) id<CALNTriggeredEventNotificationDataSourceDelegate> delegate; 
@required
-(void)sendFeedbackForAddedTravelAdvisoryNotificationWithSourceClientIdentifier:(id)arg1 hypothesis:(id)arg2 travelAdvisoryTimelinessPeriod:(unsigned long long)arg3;
-(BOOL)shouldRemoveTimeToLeaveRefreshTimerWithRefreshDate:(id)arg1 eventID:(id)arg2;
-(void)handleDirectionsActionWithSourceClientIdentifier:(id)arg1 hypothesis:(id)arg2 lastFireTimeOfAlertOffsetFromTravelTime:(id)arg3;
-(id<CALNTriggeredEventNotificationDataSourceDelegate>)delegate;
-(void)sendFeedbackForAddedLeaveNowNotificationWithSourceClientIdentifier:(id)arg1;
-(void)ceaseRouteMonitoringEventWithEventID:(id)arg1;
-(id)notificationExpirationDateForEventID:(id)arg1 alarmID:(id)arg2;
-(void)removeTimeToLeaveRefreshTimerForSourceClientIdentifier:(id)arg1;
-(void)didDismissUINotification:(unsigned long long)arg1 forPlannedDestination:(id)arg2 dismissalType:(unsigned long long)arg3;
-(BOOL)shouldRemoveNotificationMetaDataWithEventID:(id)arg1;
-(void)snoozeEventWithSourceClientIdentifier:(id)arg1;
-(BOOL)shouldWithdrawNotificationWithSourceClientIdentifier:(id)arg1;
-(void)setDelegate:(id)arg1;
-(void)ceaseRouteMonitoringEventForSourceClientIdentifier:(id)arg1;
-(void)acknowledgeEventWithSourceClientIdentifier:(id)arg1 shouldMarkAsHavingReceivedLocation:(BOOL)arg2;
-(void)setUpTimeToLeaveRefreshTimerWithTriggerDate:(id)arg1 sourceClientIdentifier:(id)arg2;
-(id)eventObjectIDForEventID:(id)arg1;
-(void)removeTimeToLeaveRefreshTimerForEventID:(id)arg1;
-(void)handleConferenceCallActionWithSourceClientIdentifier:(id)arg1;
-(id)fetchTriggeredEventNotificationInfoWithSourceClientIdentifier:(id)arg1 isProtectedDataAvailable:(BOOL)arg2;
-(void)handleMailOrganizerActionWithSourceClientIdentifier:(id)arg1 hypothesis:(id)arg2;
-(void)setUpTimeToLeaveRefreshTimerWithTriggerDate:(id)arg1 eventID:(id)arg2;

@end

