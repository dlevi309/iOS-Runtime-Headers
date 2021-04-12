/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <UIKitCore/UIView.h>

@class HMCameraSource;

@interface HMCameraView : UIView {

	HMCameraSource* _cameraSource;

}

@property (nonatomic,retain) HMCameraSource * cameraSource;              //@synthesize cameraSource=_cameraSource - In the implementation block
-(void)setCameraSource:(HMCameraSource *)arg1 ;
-(HMCameraSource *)cameraSource;
@end

