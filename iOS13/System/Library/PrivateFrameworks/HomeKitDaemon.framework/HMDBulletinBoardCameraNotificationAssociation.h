/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDCameraProfile, NSMutableSet;

@interface HMDBulletinBoardCameraNotificationAssociation : HMFObject {

	HMDCameraProfile* _cameraProfile;
	NSMutableSet* _notificationGeneratingServicesWithCamera;

}

@property (nonatomic,readonly) HMDCameraProfile * cameraProfile;                                     //@synthesize cameraProfile=_cameraProfile - In the implementation block
@property (nonatomic,readonly) NSMutableSet * notificationGeneratingServicesWithCamera;              //@synthesize notificationGeneratingServicesWithCamera=_notificationGeneratingServicesWithCamera - In the implementation block
-(id)description;
-(HMDCameraProfile *)cameraProfile;
-(id)initWithCameraProfile:(id)arg1 ;
-(NSMutableSet *)notificationGeneratingServicesWithCamera;
@end

