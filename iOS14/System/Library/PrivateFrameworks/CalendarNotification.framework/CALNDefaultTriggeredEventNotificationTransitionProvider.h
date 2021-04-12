/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNTriggeredEventNotificationTransitionProvider.h>

@protocol CALNTravelAdvisoryAuthority, CalDateProvider;
@class NSString;

@interface CALNDefaultTriggeredEventNotificationTransitionProvider : NSObject <CALNTriggeredEventNotificationTransitionProvider> {

	id<CALNTravelAdvisoryAuthority> _travelAdvisoryAuthority;
	id<CalDateProvider> _dateProvider;

}

@property (nonatomic,readonly) id<CALNTravelAdvisoryAuthority> travelAdvisoryAuthority;              //@synthesize travelAdvisoryAuthority=_travelAdvisoryAuthority - In the implementation block
@property (nonatomic,readonly) id<CalDateProvider> dateProvider;                                     //@synthesize dateProvider=_dateProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CALNTravelAdvisoryAuthority>)travelAdvisoryAuthority;
-(unsigned long long)_transitionForTimeToLeaveRefreshTimerFiredForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3 ;
-(BOOL)_shouldAddNotificationForTravelAdviceReceivedForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3 ;
-(id)initWithTravelAdvisoryAuthority:(id)arg1 dateProvider:(id)arg2 ;
-(unsigned long long)_transitionForTravelAdviceReceivedForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3 ;
-(BOOL)_shouldModifyForAlarmFiredForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3 ;
-(id<CalDateProvider>)dateProvider;
-(BOOL)_shouldRemoveNotificationForTravelAdviceReceivedForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3 ;
-(BOOL)_timeToLeaveStateAlreadyDisplayedBasedOnSourceNotificationInfo:(id)arg1 oldNotificationData:(id)arg2 ;
-(unsigned long long)_transitionForAlarmFiredForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3 ;
-(unsigned long long)transitionForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3 trigger:(unsigned long long)arg4 ;
@end

