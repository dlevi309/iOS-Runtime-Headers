/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMBulletinBoardNotification.h>

@class NSUUID, HMCameraUserSettings;

@interface HMCameraBulletinBoardSmartNotification : HMBulletinBoardNotification {

	NSUUID* _targetUUID;
	HMCameraUserSettings* _cameraUserSettings;

}

@property (__weak) HMCameraUserSettings * cameraUserSettings;                   //@synthesize cameraUserSettings=_cameraUserSettings - In the implementation block
@property (readonly) unsigned long long notificationEventTriggers; 
+(id)notificationEventTriggersInPredicate:(id)arg1 ;
+(id)predicateForCameraSignificantEvent:(unsigned long long)arg1 ;
-(void)commitWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)targetUUID;
-(void)setCameraUserSettings:(HMCameraUserSettings *)arg1 ;
-(HMCameraUserSettings *)cameraUserSettings;
-(id)initWithBulletinBoardNotification:(id)arg1 ;
-(void)__configureWithContext:(id)arg1 cameraUserSettings:(id)arg2 ;
-(unsigned long long)notificationEventTriggers;
@end

