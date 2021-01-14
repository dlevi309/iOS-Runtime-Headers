/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

@class NSString, NSArray;


@protocol CALNNotificationSource <CALNNotificationResponseDelegate>
@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) NSArray * categories; 
@required
-(NSArray *)categories;
-(void)refreshNotifications:(id)arg1;
-(id)contentForNotificationWithSourceClientIdentifier:(id)arg1;
-(NSString *)sourceIdentifier;

@end

