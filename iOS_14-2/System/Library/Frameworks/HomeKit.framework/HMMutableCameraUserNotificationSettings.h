/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMCameraUserNotificationSettings.h>

@class NSPredicate;

@interface HMMutableCameraUserNotificationSettings : HMCameraUserNotificationSettings

@property (getter=isAccessModeChangeNotificationEnabled) BOOL accessModeChangeNotificationEnabled; 
@property (getter=isReachabilityEventNotificationEnabled) BOOL reachabilityEventNotificationEnabled; 
@property (getter=isSmartBulletinBoardNotificationEnabled) BOOL smartBulletinBoardNotificationEnabled; 
@property (copy) NSPredicate * smartBulletinBoardNotificationCondition; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end

