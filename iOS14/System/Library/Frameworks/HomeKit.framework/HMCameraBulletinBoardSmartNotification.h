/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMBulletinBoardNotification.h>

@class NSUUID, HMCameraUserSettings;

@interface HMCameraBulletinBoardSmartNotification : HMBulletinBoardNotification {

	NSUUID* _targetUUID;
	HMCameraUserSettings* _cameraUserSettings;

}

@property (__weak) HMCameraUserSettings * cameraUserSettings;                   //@synthesize cameraUserSettings=_cameraUserSettings - In the implementation block
@property (readonly) unsigned long long significantEventTypes; 
@property (readonly) unsigned long long personFamiliarityOptions; 
@property (readonly) unsigned long long notificationEventTriggers; 
+(id)significantEventTypesInPredicate:(id)arg1 ;
+(id)personFamiliarityOptionsInPredicate:(id)arg1 ;
+(id)predicateForSignificantEventTypes:(unsigned long long)arg1 personFamiliarityOptions:(unsigned long long)arg2 ;
+(id)predicateForCameraSignificantEvent:(unsigned long long)arg1 ;
-(id)description;
-(void)commitWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)targetUUID;
-(HMCameraUserSettings *)cameraUserSettings;
-(unsigned long long)significantEventTypes;
-(void)setCameraUserSettings:(HMCameraUserSettings *)arg1 ;
-(id)initWithBulletinBoardNotification:(id)arg1 ;
-(unsigned long long)personFamiliarityOptions;
-(unsigned long long)notificationEventTriggers;
-(void)__configureWithContext:(id)arg1 cameraUserSettings:(id)arg2 ;
@end

