/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNSharedCalendarInvitationResponseNotificationDataSource.h>

@protocol EKEventStoreProvider, CALNInboxNotificationProvider, CALNEKCalendarNotificationReferenceProvider;
@class NSString;

@interface CALNSharedCalendarInvitationResponseNotificationEKDataSource : NSObject <CALNSharedCalendarInvitationResponseNotificationDataSource> {

	id<EKEventStoreProvider> _eventStoreProvider;
	id<CALNInboxNotificationProvider> _inboxNotificationProvider;
	id<CALNEKCalendarNotificationReferenceProvider> _notificationReferenceProvider;

}

@property (nonatomic,readonly) id<EKEventStoreProvider> eventStoreProvider;                                                //@synthesize eventStoreProvider=_eventStoreProvider - In the implementation block
@property (nonatomic,readonly) id<CALNInboxNotificationProvider> inboxNotificationProvider;                                //@synthesize inboxNotificationProvider=_inboxNotificationProvider - In the implementation block
@property (nonatomic,readonly) id<CALNEKCalendarNotificationReferenceProvider> notificationReferenceProvider;              //@synthesize notificationReferenceProvider=_notificationReferenceProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<EKEventStoreProvider>)eventStoreProvider;
-(id)fetchSharedCalendarInvitationResponseNotificationSourceClientIdentifiers:(id)arg1 ;
-(id)fetchSharedCalendarInvitationResponseNotificationWithSourceClientIdentifier:(id)arg1 ;
-(void)clearSharedCalendarInvitationResponseWithSourceClientIdentifier:(id)arg1 ;
-(id<CALNInboxNotificationProvider>)inboxNotificationProvider;
-(id<CALNEKCalendarNotificationReferenceProvider>)notificationReferenceProvider;
-(id)initWithEventStoreProvider:(id)arg1 inboxNotificationProvider:(id)arg2 notificationReferenceProvider:(id)arg3 ;
-(id)_notificationInfoFromNotificationReference:(id)arg1 ;
-(id)_notificationInfoFromNotification:(id)arg1 ;
-(id)fetchSharedCalendarInvitationResponseNotifications;
@end

