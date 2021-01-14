/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNSuggestedEventNotificationDataSource <NSObject>
@required
-(void)confirmSuggestedEventWithSourceClientIdentifier:(id)arg1;
-(id)fetchSuggestedEventNotificationsWithSourceClientIdentifier:(id)arg1;
-(void)clearSuggestedEventNotificationWithSourceClientIdentifier:(id)arg1;
-(void)deleteCanceledSuggestedEventWithSourceClientIdentifier:(id)arg1;
-(id)fetchSuggestedEventNotificationObjectIDs;
-(id)fetchSuggestedEventNotifications;
-(id)fetchSuggestedEventNotificationWithObjectID:(id)arg1;
-(void)ignoreSuggestedEventWithSourceClientIdentifier:(id)arg1;

@end

