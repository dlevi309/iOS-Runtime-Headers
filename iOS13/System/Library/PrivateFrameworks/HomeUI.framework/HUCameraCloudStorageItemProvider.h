/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFStaticItemProvider.h>

@class HMCameraProfile;

@interface HUCameraCloudStorageItemProvider : HFStaticItemProvider {

	HMCameraProfile* _cameraProfile;

}

@property (nonatomic,copy,readonly) HMCameraProfile * cameraProfile;              //@synthesize cameraProfile=_cameraProfile - In the implementation block
-(id)init;
-(HMCameraProfile *)cameraProfile;
-(id)initWithCameraProfile:(id)arg1 ;
@end

