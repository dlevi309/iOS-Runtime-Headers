/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)fetchSharedCalendarInvitationNotificationSourceClientIdentifiers:(id)arg1 ;
-(id)_notificationInfoFromNotificationReference:(id)arg1 ;
-(id<EKEventStoreProvider>)eventStoreProvider;
-(id)fetchSharedCalendarInvitationNotificationWithSourceClientIdentifier:(id)arg1 ;
-(id<CALNDataAccessExpressConnection>)dataAccessExpressConnection;
-(void)clearSharedCalendarInvitationWithSourceClientIdentifier:(id)arg1 ;
-(void)declineSharedCalendarWithSourceClientIdentifier:(id)arg1 ;
-(id<CALNEKCalendarNotificationReferenceProvider>)notificationReferenceProvider;
-(id)fetchSharedCalendarInvitationNotifications;
-(id<CALNInboxNotificationProvider>)inboxNotificationProvider;
-(void)joinSharedCalendarWithSourceClientIdentifier:(id)arg1 ;
-(id)_notificationInfoFromNotification:(id)arg1 ;
-(void)reportSharedCalendarAsJunkWithSourceClientIdentifier:(id)arg1 ;
-(id)initWithEventStoreProvider:(id)arg1 inboxNotificationProvider:(id)arg2 notificationReferenceProvider:(id)arg3 dataAccessExpressConnection:(id)arg4 ;
@end

