/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFUserNotificationServiceSettings.h>

@class NSPredicate;

@interface HFMutableUserNotificationServiceSettings : HFUserNotificationServiceSettings

@property (assign,getter=areNotificationsEnabled,nonatomic) BOOL notificationsEnabled; 
@property (assign,getter=areMotionNotificationsEnabled,nonatomic) BOOL motionNotificationsEnabled; 
@property (assign,getter=areDoorbellNotificationsEnabled,nonatomic) BOOL doorbellNotificationsEnabled; 
@property (assign,getter=areSmartDetectionNotificationsEnabled,nonatomic) BOOL smartDetectionNotificationsEnabled; 
@property (nonatomic,retain) NSPredicate * notificationCondition; 
@property (nonatomic,retain) NSPredicate * smartCameraNotificationCondition; 
@end

