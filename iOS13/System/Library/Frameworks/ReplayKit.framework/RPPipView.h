/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/

#import <UIKitCore/UIView.h>

@class AVCaptureVideoPreviewLayer;

@interface RPPipView : UIView {

	AVCaptureVideoPreviewLayer* _previewLayer;

}

@property (nonatomic,retain) AVCaptureVideoPreviewLayer * previewLayer;              //@synthesize previewLayer=_previewLayer - In the implementation block
-(void)layoutSubviews;
-(AVCaptureVideoPreviewLayer *)previewLayer;
-(void)setPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(void)addPreviewLayer:(id)arg1 ;
@end

