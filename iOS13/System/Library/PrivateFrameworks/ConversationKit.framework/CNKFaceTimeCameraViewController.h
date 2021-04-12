/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
*/

#import <CameraEffectsKit/CFXCameraViewController.h>

@interface CNKFaceTimeCameraViewController : CFXCameraViewController {

	 cameraDelegate;

}

@property (assign,__weak,nonatomic) id<CNKFaceTimeCameraViewControllerDelegate> cameraDelegate; 
-(void)setCameraDelegate:(id<CNKFaceTimeCameraViewControllerDelegate>)arg1 ;
-(id<CNKFaceTimeCameraViewControllerDelegate>)cameraDelegate;
-(id)initWithCaptureMode:(long long)arg1 devicePosition:(long long)arg2 flashMode:(long long)arg3 aspectRatioCrop:(long long)arg4 ;
-(void)effectBrowserViewController:(id)arg1 didSelectAppWithIdentifier:(id)arg2 ;
@end

