/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNSuggestedEventNotificationDataSource.h>

@protocol EKEventStoreProvider, CALNInboxNotificationProvider, CALNEKCalendarNotificationReferenceProvider;
@class NSString;

@interface CALNSuggestedEventNotificationEKDataSource : NSObject <CALNSuggestedEventNotificationDataSource> {

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
-(id<CALNInboxNotificationProvider>)inboxNotificationProvider;
-(id<CALNEKCalendarNotificationReferenceProvider>)notificationReferenceProvider;
-(id)_notificationInfoFromNotification:(id)arg1 inEventStore:(id)arg2 ;
-(id)fetchSuggestedEventNotificationsWithSourceClientIdentifier:(id)arg1 ;
-(id)fetchSuggestedEventNotificationObjectIDs;
-(id)fetchSuggestedEventNotificationWithObjectID:(id)arg1 ;
-(void)clearSuggestedEventNotificationWithSourceClientIdentifier:(id)arg1 ;
-(void)confirmSuggestedEventWithSourceClientIdentifier:(id)arg1 ;
-(void)ignoreSuggestedEventWithSourceClientIdentifier:(id)arg1 ;
-(void)deleteCanceledSuggestedEventWithSourceClientIdentifier:(id)arg1 ;
-(void)_acknowledgeSuggestedEventWithSourceClientIdentifier:(id)arg1 accept:(BOOL)arg2 ;
-(id)_eventForSourceClientIdentifier:(id)arg1 eventStore:(id)arg2 ;
-(void)_clearSuggestedEventNotificationWithObjectID:(id)arg1 ;
-(id)fetchSuggestedEventNotifications;
-(id)initWithEventStoreProvider:(id)arg1 inboxNotificationProvider:(id)arg2 notificationReferenceProvider:(id)arg3 ;
@end

