/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNTriggeredEventNotificationTriggerHelper.h>

@protocol CALNTravelAdvisoryAuthority, CalDateProvider;
@class NSString;

@interface CALNDefaultTriggeredEventNotificationTriggerHelper : NSObject <CALNTriggeredEventNotificationTriggerHelper> {

	id<CALNTravelAdvisoryAuthority> _travelAdvisoryAuthority;
	id<CalDateProvider> _dateProvider;

}

@property (nonatomic,readonly) id<CALNTravelAdvisoryAuthority> travelAdvisoryAuthority;              //@synthesize travelAdvisoryAuthority=_travelAdvisoryAuthority - In the implementation block
@property (nonatomic,readonly) id<CalDateProvider> dateProvider;                                     //@synthesize dateProvider=_dateProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CalDateProvider>)dateProvider;
-(id<CALNTravelAdvisoryAuthority>)travelAdvisoryAuthority;
-(id)initWithTravelAdvisoryAuthority:(id)arg1 dateProvider:(id)arg2 ;
-(BOOL)shouldTriggerForSourceClientIdentifier:(id)arg1 trigger:(unsigned long long)arg2 sourceNotificationInfo:(id)arg3 oldNotificationData:(id)arg4 ;
-(BOOL)_shouldTriggerForTravelAdviceReceivedForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3 ;
-(BOOL)_shouldTriggerForTimeToLeaveRefreshForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3 ;
-(BOOL)_eventWillEndBeforeUserArrivesForHypothesis:(id)arg1 eventEndDate:(id)arg2 ;
-(BOOL)_exceededMaximumTravelTimeThresholdForHypothesis:(id)arg1 ;
-(BOOL)_shouldTriggerForTravelAdviceReceivedGivenHasExistingNotificationDataForSourceClientIdentifier:(id)arg1 hypothesis:(id)arg2 sourceNotificationInfo:(id)arg3 oldNotificationData:(id)arg4 hasExistingTravelAdvice:(BOOL)arg5 satisfiesMinimumTravelTimeThreshold:(BOOL)arg6 ;
-(BOOL)_shouldTriggerForTimeToLeaveRefreshGivenImmediateDepartureTimelinessStatusForSourceClientIdentifier:(id)arg1 oldNotificationData:(id)arg2 ;
@end

