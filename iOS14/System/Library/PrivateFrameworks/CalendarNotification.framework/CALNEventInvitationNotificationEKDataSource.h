/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNEventInvitationNotificationDataSource.h>

@protocol EKEventStoreProvider, CALNInboxNotificationProvider, CALNEKCalendarNotificationReferenceProvider, CALNRemoteMutator, CALNDataSourceEventRepresentationProvider;
@class NSString;

@interface CALNEventInvitationNotificationEKDataSource : NSObject <CALNEventInvitationNotificationDataSource> {

	id<EKEventStoreProvider> _eventStoreProvider;
	id<CALNInboxNotificationProvider> _inboxNotificationProvider;
	id<CALNEKCalendarNotificationReferenceProvider> _notificationReferenceProvider;
	id<CALNRemoteMutator> _remoteMutator;
	id<CALNDataSourceEventRepresentationProvider> _dataSourceEventRepresentationProvider;

}

@property (nonatomic,readonly) id<EKEventStoreProvider> eventStoreProvider;                                                      //@synthesize eventStoreProvider=_eventStoreProvider - In the implementation block
@property (nonatomic,readonly) id<CALNInboxNotificationProvider> inboxNotificationProvider;                                      //@synthesize inboxNotificationProvider=_inboxNotificationProvider - In the implementation block
@property (nonatomic,readonly) id<CALNEKCalendarNotificationReferenceProvider> notificationReferenceProvider;                    //@synthesize notificationReferenceProvider=_notificationReferenceProvider - In the implementation block
@property (nonatomic,readonly) id<CALNRemoteMutator> remoteMutator;                                                              //@synthesize remoteMutator=_remoteMutator - In the implementation block
@property (nonatomic,readonly) id<CALNDataSourceEventRepresentationProvider> dataSourceEventRepresentationProvider;              //@synthesize dataSourceEventRepresentationProvider=_dataSourceEventRepresentationProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_spanForNewStatusWithEvent:(id)arg1 ;
-(id)fetchEventInvitationNotificationWithSourceClientIdentifier:(id)arg1 ;
-(void)declineEventInvitationWithSourceClientIdentifier:(id)arg1 ;
-(void)reportEventInvitationAsJunkWithSourceClientIdentifier:(id)arg1 ;
-(id<CALNRemoteMutator>)remoteMutator;
-(id<EKEventStoreProvider>)eventStoreProvider;
-(id)fetchEventInvitationNotificationSourceClientIdentifiers:(id)arg1 ;
-(id<CALNEKCalendarNotificationReferenceProvider>)notificationReferenceProvider;
-(id<CALNInboxNotificationProvider>)inboxNotificationProvider;
-(void)acceptEventInvitationWithSourceClientIdentifier:(id)arg1 ;
-(id)_notificationInfoFromNotification:(id)arg1 inEventStore:(id)arg2 ;
-(id)initWithEventStoreProvider:(id)arg1 inboxNotificationProvider:(id)arg2 notificationReferenceProvider:(id)arg3 remoteMutator:(id)arg4 dataSourceEventRepresentationProvider:(id)arg5 ;
-(void)tentativeAcceptEventInvitationWithSourceClientIdentifier:(id)arg1 ;
-(void)clearEventInvitationWithSourceClientIdentifier:(id)arg1 ;
-(id<CALNDataSourceEventRepresentationProvider>)dataSourceEventRepresentationProvider;
-(void)_setParticipantStatus:(long long)arg1 withSourceClientIdentifier:(id)arg2 ;
-(id)fetchEventInvitationNotifications;
@end

