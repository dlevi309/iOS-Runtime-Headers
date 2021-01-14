/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HMDCameraProfile *)cameraProfile;
-(id)initWithCameraProfile:(id)arg1 ;
-(id)description;
-(NSMutableSet *)notificationGeneratingServicesWithCamera;
@end

