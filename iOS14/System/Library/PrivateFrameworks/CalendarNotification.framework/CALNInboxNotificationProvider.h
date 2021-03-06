/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

