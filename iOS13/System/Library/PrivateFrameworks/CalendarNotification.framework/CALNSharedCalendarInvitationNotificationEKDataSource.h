/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNSharedCalendarInvitationNotificationDataSource.h>

@protocol EKEventStoreProvider, CALNInboxNotificationProvider, CALNEKCalendarNotificationReferenceProvider, CALNDataAccessExpressConnection;
@class NSString;

@interface CALNSharedCalendarInvitationNotificationEKDataSource : NSObject <CALNSharedCalendarInvitationNotificationDataSource> {

	id<EKEventStoreProvider> _eventStoreProvider;
	id<CALNInboxNotificationProvider> _inboxNotificationProvider;
	id<CALNEKCalendarNotificationReferenceProvider> _notificationReferenceProvider;
	id<CALNDataAccessExpressConnection> _dataAccessExpressConnection;

}

@property (nonatomic,readonly) id<EKEventStoreProvider> eventStoreProvider;                                                //@synthesize eventStoreProvider=_eventStoreProvider - In the implementation block
@property (nonatomic,readonly) id<CALNInboxNotificationProvider> inboxNotificationProvider;                                //@synthesize inboxNotificationProvider=_inboxNotificationProvider - In the implementation block
@property (nonatomic,readonly) id<CALNEKCalendarNotificationReferenceProvider> notificationReferenceProvider;              //@synthesize notificationReferenceProvider=_notificationReferenceProvider - In the implementation block
@property (nonatomic,readonly) id<CALNDataAccessExpressConnection> dataAccessExpressConnection;                            //@synthesize dataAccessExpressConnection=_dataAccessExpressConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<EKEventStoreProvider>)eventStoreProvider;
-(id)fetchSharedCalendarInvitationNotificationSourceClientIdentifiers:(id)arg1 ;
-(id)fetchSharedCalendarInvitationNotificationWithSourceClientIdentifier:(id)arg1 ;
-(void)clearSharedCalendarInvitationWithSourceClientIdentifier:(id)arg1 ;
-(void)joinSharedCalendarWithSourceClientIdentifier:(id)arg1 ;
-(void)declineSharedCalendarWithSourceClientIdentifier:(id)arg1 ;
-(void)reportSharedCalendarAsJunkWithSourceClientIdentifier:(id)arg1 ;
-(id<CALNInboxNotificationProvider>)inboxNotificationProvider;
-(id<CALNEKCalendarNotificationReferenceProvider>)notificationReferenceProvider;
-(id)initWithEventStoreProvider:(id)arg1 inboxNotificationProvider:(id)arg2 notificationReferenceProvider:(id)arg3 dataAccessExpressConnection:(id)arg4 ;
-(id)_notificationInfoFromNotificationReference:(id)arg1 ;
-(id<CALNDataAccessExpressConnection>)dataAccessExpressConnection;
-(id)_notificationInfoFromNotification:(id)arg1 ;
-(id)fetchSharedCalendarInvitationNotifications;
@end

