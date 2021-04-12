/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNEventCanceledNotificationDataSource.h>

@protocol EKEventStoreProvider, CALNInboxNotificationProvider, CALNEKCalendarNotificationReferenceProvider, CALNRemoteMutator, CALNDataSourceEventRepresentationProvider;
@class NSString;

@interface CALNEventCanceledNotificationEKDataSource : NSObject <CALNEventCanceledNotificationDataSource> {

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
-(id<EKEventStoreProvider>)eventStoreProvider;
-(id<CALNDataSourceEventRepresentationProvider>)dataSourceEventRepresentationProvider;
-(id<CALNRemoteMutator>)remoteMutator;
-(id)fetchEventCanceledNotificationSourceClientIdentifiers:(id)arg1 ;
-(id)fetchEventCanceledNotificationWithSourceClientIdentifier:(id)arg1 ;
-(id<CALNInboxNotificationProvider>)inboxNotificationProvider;
-(id<CALNEKCalendarNotificationReferenceProvider>)notificationReferenceProvider;
-(id)_notificationInfoFromNotification:(id)arg1 inEventStore:(id)arg2 ;
-(id)fetchEventCanceledNotifications;
-(void)clearCanceledEventNotificationWithSourceClientIdentifier:(id)arg1 ;
-(void)deleteCanceledEventWithSourceClientIdentifier:(id)arg1 ;
-(id)initWithEventStoreProvider:(id)arg1 inboxNotificationProvider:(id)arg2 notificationReferenceProvider:(id)arg3 remoteMutator:(id)arg4 dataSourceEventRepresentationProvider:(id)arg5 ;
@end

