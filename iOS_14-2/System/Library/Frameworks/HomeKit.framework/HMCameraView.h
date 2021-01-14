/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <UIKitCore/UIView.h>

@class HMCameraSource;

@interface HMCameraView : UIView {

	HMCameraSource* _cameraSource;

}

@property (nonatomic,retain) HMCameraSource * cameraSource;              //@synthesize cameraSource=_cameraSource - In the implementation block
-(HMCameraSource *)cameraSource;
-(void)setCameraSource:(HMCameraSource *)arg1 ;
@end

