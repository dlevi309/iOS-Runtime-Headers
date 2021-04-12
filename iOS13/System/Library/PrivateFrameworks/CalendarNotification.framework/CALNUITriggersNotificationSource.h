/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNNotificationSource.h>

@protocol CALNNotificationManager, EKEventStoreProvider;
@class CALNTriggeredEventNotificationSource, CALNEventInvitationNotificationSource, CALNEventInvitationResponseNotificationSource, CALNEventCanceledNotificationSource, CALNSharedCalendarInvitationNotificationSource, CALNSharedCalendarInvitationResponseNotificationSource, CALNCalendarResourceChangedNotificationSource, NSString, NSArray;

@interface CALNUITriggersNotificationSource : NSObject <CALNNotificationSource> {

	id<CALNNotificationManager> _notificationManager;
	id<EKEventStoreProvider> _eventStoreProvider;
	CALNTriggeredEventNotificationSource* _triggeredEventNotificationSource;
	CALNEventInvitationNotificationSource* _eventInvitationNotificationSource;
	CALNEventInvitationResponseNotificationSource* _eventInvitationResponseNotificationSource;
	CALNEventCanceledNotificationSource* _eventCanceledNotificationSource;
	CALNSharedCalendarInvitationNotificationSource* _sharedCalendarInvitationNotificationSource;
	CALNSharedCalendarInvitationResponseNotificationSource* _sharedCalendarInvitationResponseNotificationSource;
	CALNCalendarResourceChangedNotificationSource* _calendarResourceChangedNotificationSource;

}

@property (nonatomic,readonly) id<CALNNotificationManager> notificationManager;                                                                          //@synthesize notificationManager=_notificationManager - In the implementation block
@property (nonatomic,readonly) id<EKEventStoreProvider> eventStoreProvider;                                                                              //@synthesize eventStoreProvider=_eventStoreProvider - In the implementation block
@property (nonatomic,readonly) CALNTriggeredEventNotificationSource * triggeredEventNotificationSource;                                                  //@synthesize triggeredEventNotificationSource=_triggeredEventNotificationSource - In the implementation block
@property (nonatomic,readonly) CALNEventInvitationNotificationSource * eventInvitationNotificationSource;                                                //@synthesize eventInvitationNotificationSource=_eventInvitationNotificationSource - In the implementation block
@property (nonatomic,readonly) CALNEventInvitationResponseNotificationSource * eventInvitationResponseNotificationSource;                                //@synthesize eventInvitationResponseNotificationSource=_eventInvitationResponseNotificationSource - In the implementation block
@property (nonatomic,readonly) CALNEventCanceledNotificationSource * eventCanceledNotificationSource;                                                    //@synthesize eventCanceledNotificationSource=_eventCanceledNotificationSource - In the implementation block
@property (nonatomic,readonly) CALNSharedCalendarInvitationNotificationSource * sharedCalendarInvitationNotificationSource;                              //@synthesize sharedCalendarInvitationNotificationSource=_sharedCalendarInvitationNotificationSource - In the implementation block
@property (nonatomic,readonly) CALNSharedCalendarInvitationResponseNotificationSource * sharedCalendarInvitationResponseNotificationSource;              //@synthesize sharedCalendarInvitationResponseNotificationSource=_sharedCalendarInvitationResponseNotificationSource - In the implementation block
@property (nonatomic,readonly) CALNCalendarResourceChangedNotificationSource * calendarResourceChangedNotificationSource;                                //@synthesize calendarResourceChangedNotificationSource=_calendarResourceChangedNotificationSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) NSArray * categories; 
+(id)_launchURL;
-(NSArray *)categories;
-(NSString *)sourceIdentifier;
-(id<CALNNotificationManager>)notificationManager;
-(void)didReceiveResponse:(id)arg1 ;
-(id<EKEventStoreProvider>)eventStoreProvider;
-(id)contentForNotificationWithSourceClientIdentifier:(id)arg1 ;
-(void)refreshNotifications:(id)arg1 ;
-(CALNTriggeredEventNotificationSource *)triggeredEventNotificationSource;
-(id)_fakeInvitationNotificationInfoWithDictionary:(id)arg1 type:(long long)arg2 sourceClientIdentifier:(id)arg3 ;
-(CALNEventInvitationNotificationSource *)eventInvitationNotificationSource;
-(id)_fakeEventCanceledNotificationInfoWithDictionary:(id)arg1 ;
-(CALNEventCanceledNotificationSource *)eventCanceledNotificationSource;
-(id)_fakeAttendeeRepliedNotificationInfoWithDictionary:(id)arg1 ;
-(CALNEventInvitationResponseNotificationSource *)eventInvitationResponseNotificationSource;
-(id)_fakeSharedCalendarInvitationNotificationInfoWithDictionary:(id)arg1 ;
-(CALNSharedCalendarInvitationNotificationSource *)sharedCalendarInvitationNotificationSource;
-(id)_fakeSharedCalendarInviteReplyNotificationInfoWithDictionary:(id)arg1 ;
-(CALNSharedCalendarInvitationResponseNotificationSource *)sharedCalendarInvitationResponseNotificationSource;
-(id)_fakeCalendarResourceChangedNotificationInfoWithDictionary:(id)arg1 sourceClientIdentifier:(id)arg2 notificationType:(long long)arg3 resourceChangeType:(unsigned)arg4 ;
-(CALNCalendarResourceChangedNotificationSource *)calendarResourceChangedNotificationSource;
-(id)_fakeNextEventNotificationInfoNextEvent:(id*)arg1 ;
-(id)_fakeInvitationNotificationWithDictionary:(id)arg1 type:(long long)arg2 ;
-(id)initWithNotificationManager:(id)arg1 eventStoreProvider:(id)arg2 triggeredEventNotificationSource:(id)arg3 eventInvitationNotificationSource:(id)arg4 eventInvitationResponseNotificationSource:(id)arg5 eventCanceledNotificationSource:(id)arg6 sharedCalendarInvitationNotificationSource:(id)arg7 sharedCalendarInvitationResponseNotificationSource:(id)arg8 calendarResourceChangedNotificationSource:(id)arg9 ;
-(id)_fakeTriggeredEventNotificationContentWithSourceClientIdentifier:(id)arg1 ;
-(id)_fakeEventInvitationNotificationContentWithDictionary:(id)arg1 ;
-(id)_fakeInviteModifiedNotificationContentWithDictionary:(id)arg1 ;
-(id)_fakeInviteCanceledNotificationContentWithDictionary:(id)arg1 ;
-(id)_fakeAttendeeRepliedNotificationContentWithDictionary:(id)arg1 ;
-(id)_fakeSharedCalendarInvitationNotificationContentWithDictionary:(id)arg1 ;
-(id)_fakeSharedCalendarInviteReplyNotificationContentWithDictionary:(id)arg1 ;
-(id)_fakeSharedCalendarEventAddedNotificationContentWithDictionary:(id)arg1 ;
-(id)_fakeSharedCalendarEventUpdatedNotificationContentWithDictionary:(id)arg1 ;
-(id)_fakeSharedCalendarEventDeletedNotificationContentWithDictionary:(id)arg1 ;
-(id)_fakeNextEventNotificationContentWithSourceClientIdentifier:(id)arg1 ;
@end

