/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

