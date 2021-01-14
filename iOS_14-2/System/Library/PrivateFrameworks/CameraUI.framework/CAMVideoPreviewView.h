/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(AVCaptureVideoPreviewLayer *)videoPreviewLayer;
-(UIView *)previewLayerView;
-(void)setSquare:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateAspectModeForSublayers;
-(CGRect)_frameForSubviewsAccountForSquare:(BOOL)arg1 ;
-(BOOL)isSquare;
-(void)layoutSubviews;
-(void)setSquare:(BOOL)arg1 ;
-(void)setVideoPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(void)setPreviewViewAspectMode:(long long)arg1 ;
-(long long)previewViewAspectMode;
-(void)dealloc;
@end

