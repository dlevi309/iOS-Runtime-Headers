/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)fetchEventCanceledNotificationSourceClientIdentifiers:(id)arg1 ;
-(id<CALNRemoteMutator>)remoteMutator;
-(id<EKEventStoreProvider>)eventStoreProvider;
-(void)clearCanceledEventNotificationWithSourceClientIdentifier:(id)arg1 ;
-(id<CALNEKCalendarNotificationReferenceProvider>)notificationReferenceProvider;
-(id)fetchEventCanceledNotifications;
-(id<CALNInboxNotificationProvider>)inboxNotificationProvider;
-(void)deleteCanceledEventWithSourceClientIdentifier:(id)arg1 ;
-(id)fetchEventCanceledNotificationWithSourceClientIdentifier:(id)arg1 ;
-(id)_notificationInfoFromNotification:(id)arg1 inEventStore:(id)arg2 ;
-(id)initWithEventStoreProvider:(id)arg1 inboxNotificationProvider:(id)arg2 notificationReferenceProvider:(id)arg3 remoteMutator:(id)arg4 dataSourceEventRepresentationProvider:(id)arg5 ;
-(id<CALNDataSourceEventRepresentationProvider>)dataSourceEventRepresentationProvider;
@end

