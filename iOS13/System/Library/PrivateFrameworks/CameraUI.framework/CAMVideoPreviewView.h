/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class AVCaptureVideoPreviewLayer, UIView;

@interface CAMVideoPreviewView : UIView {

	BOOL _square;
	AVCaptureVideoPreviewLayer* _videoPreviewLayer;
	UIView* _previewLayerView;
	long long _previewViewAspectMode;

}

@property (nonatomic,retain) AVCaptureVideoPreviewLayer * videoPreviewLayer;              //@synthesize videoPreviewLayer=_videoPreviewLayer - In the implementation block
@property (nonatomic,readonly) UIView * previewLayerView;                                 //@synthesize previewLayerView=_previewLayerView - In the implementation block
@property (assign,nonatomic) long long previewViewAspectMode;                             //@synthesize previewViewAspectMode=_previewViewAspectMode - In the implementation block
@property (assign,getter=isSquare,nonatomic) BOOL square;                                 //@synthesize square=_square - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(AVCaptureVideoPreviewLayer *)videoPreviewLayer;
-(BOOL)isSquare;
-(long long)previewViewAspectMode;
-(void)setPreviewViewAspectMode:(long long)arg1 ;
-(void)setVideoPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(CGRect)_frameForSubviewsAccountForSquare:(BOOL)arg1 ;
-(void)_updateAspectModeForSublayers;
-(void)setSquare:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSquare:(BOOL)arg1 ;
-(UIView *)previewLayerView;
@end

