/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

@class NSString, NSArray;


@protocol CALNNotificationSource <CALNNotificationResponseDelegate>
@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) NSArray * categories; 
@required
-(NSArray *)categories;
-(NSString *)sourceIdentifier;
-(id)contentForNotificationWithSourceClientIdentifier:(id)arg1;
-(void)refreshNotifications:(id)arg1;

@end

