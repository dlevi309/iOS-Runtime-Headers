/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
*/

#import <CameraEffectsKit/CFXCameraViewController.h>

@interface CNKFaceTimeCameraViewController : CFXCameraViewController {

	 cameraDelegate;

}

@property (assign,__weak,nonatomic) id<CNKFaceTimeCameraViewControllerDelegate> cameraDelegate; 
-(void)setCameraDelegate:(id<CNKFaceTimeCameraViewControllerDelegate>)arg1 ;
-(id<CNKFaceTimeCameraViewControllerDelegate>)cameraDelegate;
-(void)effectBrowserViewController:(id)arg1 didSelectAppWithIdentifier:(id)arg2 ;
-(id)initWithCaptureMode:(long long)arg1 devicePosition:(long long)arg2 flashMode:(long long)arg3 aspectRatioCrop:(long long)arg4 ;
@end

