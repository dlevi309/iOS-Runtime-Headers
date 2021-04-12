/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNSuggestedEventNotificationDataSource <NSObject>
@required
-(id)fetchSuggestedEventNotificationsWithSourceClientIdentifier:(id)arg1;
-(id)fetchSuggestedEventNotificationObjectIDs;
-(id)fetchSuggestedEventNotificationWithObjectID:(id)arg1;
-(void)clearSuggestedEventNotificationWithSourceClientIdentifier:(id)arg1;
-(void)confirmSuggestedEventWithSourceClientIdentifier:(id)arg1;
-(void)ignoreSuggestedEventWithSourceClientIdentifier:(id)arg1;
-(void)deleteCanceledSuggestedEventWithSourceClientIdentifier:(id)arg1;
-(id)fetchSuggestedEventNotifications;

@end

