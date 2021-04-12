/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusFoundation/OFUIView.h>

@class AVCaptureSession;

@interface OKWidgetCameraPreviewView : OFUIView

@property (assign,nonatomic) AVCaptureSession * session; 
+(Class)layerClass;
-(AVCaptureSession *)session;
-(void)setSession:(AVCaptureSession *)arg1 ;
-(void)dealloc;
@end

