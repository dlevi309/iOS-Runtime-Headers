/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <UIKitCore/UIView.h>

@class AVCaptureVideoPreviewLayer, AVCaptureSession;

@interface ICDocCamPreviewView : UIView

@property (nonatomic,readonly) AVCaptureVideoPreviewLayer * videoPreviewLayer; 
@property (nonatomic,retain) AVCaptureSession * session; 
+(Class)layerClass;
-(AVCaptureSession *)session;
-(void)setSession:(AVCaptureSession *)arg1 ;
-(AVCaptureVideoPreviewLayer *)videoPreviewLayer;
@end

