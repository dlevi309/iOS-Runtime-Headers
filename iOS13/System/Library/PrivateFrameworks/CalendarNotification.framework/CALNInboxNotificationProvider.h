/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

@class NSArray;


@protocol CALNInboxNotificationProvider <NSObject>
@property (nonatomic,readonly) NSArray * eventNotificationReferences; 
@property (nonatomic,readonly) unsigned long long eventNotificationCount; 
@required
-(unsigned long long)eventNotificationCount;
-(NSArray *)eventNotificationReferences;

@end

