/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <UIKitCore/UIView.h>

@class AVCaptureVideoPreviewLayer, AVCaptureSession;

@interface ICDocCamPreviewView : UIView

@property (nonatomic,readonly) AVCaptureVideoPreviewLayer * videoPreviewLayer; 
@property (nonatomic,retain) AVCaptureSession * session; 
+(Class)layerClass;
-(AVCaptureVideoPreviewLayer *)videoPreviewLayer;
-(AVCaptureSession *)session;
-(void)setSession:(AVCaptureSession *)arg1 ;
@end

