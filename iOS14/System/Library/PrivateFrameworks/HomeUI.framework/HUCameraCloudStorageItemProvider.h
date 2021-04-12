/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

