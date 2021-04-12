/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CAMVideoPreviewView, UIView, CAMFocusIndicatorView, CAMGridView, CAMLevelIndicatorView, CAMSubjectIndicatorView, CAMStageLightOverlayView, UILabel, AVCaptureVideoPreviewLayer;

@interface CAMPreviewView : UIView {

	int __exposureBiasSide;
	long long _orientation;
	CAMVideoPreviewView* _videoPreviewView;
	UIView* _indicatorContainerView;
	long long _indicatorClippingStyle;
	CAMFocusIndicatorView* _continuousIndicator;
	CAMFocusIndicatorView* _pointIndicator;
	CAMGridView* _gridView;
	CAMLevelIndicatorView* _levelView;
	CAMSubjectIndicatorView* _centeredSubjectIndicatorView;
	CAMStageLightOverlayView* _stageLightOverlayView;
	double _bottomContentInset;
	UILabel* __simulatorLabel;
	CGRect _viewportFrame;
	CGRect _overlayFrame;

}

@property (nonatomic,readonly) UILabel * _simulatorLabel;                                         //@synthesize _simulatorLabel=__simulatorLabel - In the implementation block
@property (assign,nonatomic) int _exposureBiasSide;                                               //@synthesize _exposureBiasSide=__exposureBiasSide - In the implementation block
@property (assign,nonatomic) long long orientation;                                               //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) CGRect viewportFrame;                                                //@synthesize viewportFrame=_viewportFrame - In the implementation block
@property (assign,nonatomic) CGRect overlayFrame;                                                 //@synthesize overlayFrame=_overlayFrame - In the implementation block
@property (nonatomic,readonly) CAMVideoPreviewView * videoPreviewView;                            //@synthesize videoPreviewView=_videoPreviewView - In the implementation block
@property (nonatomic,retain) AVCaptureVideoPreviewLayer * videoPreviewLayer; 
@property (nonatomic,readonly) UIView * indicatorContainerView;                                   //@synthesize indicatorContainerView=_indicatorContainerView - In the implementation block
@property (assign,nonatomic) long long indicatorClippingStyle;                                    //@synthesize indicatorClippingStyle=_indicatorClippingStyle - In the implementation block
@property (nonatomic,retain) CAMFocusIndicatorView * continuousIndicator;                         //@synthesize continuousIndicator=_continuousIndicator - In the implementation block
@property (nonatomic,retain) CAMFocusIndicatorView * pointIndicator;                              //@synthesize pointIndicator=_pointIndicator - In the implementation block
@property (assign,nonatomic) CAMGridView * gridView;                                              //@synthesize gridView=_gridView - In the implementation block
@property (assign,nonatomic) CAMLevelIndicatorView * levelView;                                   //@synthesize levelView=_levelView - In the implementation block
@property (nonatomic,retain) CAMSubjectIndicatorView * centeredSubjectIndicatorView;              //@synthesize centeredSubjectIndicatorView=_centeredSubjectIndicatorView - In the implementation block
@property (nonatomic,retain) CAMStageLightOverlayView * stageLightOverlayView;                    //@synthesize stageLightOverlayView=_stageLightOverlayView - In the implementation block
@property (assign,nonatomic) double bottomContentInset;                                           //@synthesize bottomContentInset=_bottomContentInset - In the implementation block
+(Class)layerClass;
-(void)dealloc;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(AVCaptureVideoPreviewLayer *)videoPreviewLayer;
-(CGPoint)captureDevicePointOfInterestForPoint:(CGPoint)arg1 ;
-(CGPoint)pointForCaptureDevicePointOfInterest:(CGPoint)arg1 ;
-(CAMGridView *)gridView;
-(void)setBottomContentInset:(double)arg1 ;
-(double)bottomContentInset;
-(void)setViewportFrame:(CGRect)arg1 ;
-(CGRect)viewportFrame;
-(void)setOverlayFrame:(CGRect)arg1 ;
-(void)setVideoPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(void)setGridView:(CAMGridView *)arg1 ;
-(void)setLevelView:(CAMLevelIndicatorView *)arg1 ;
-(CAMVideoPreviewView *)videoPreviewView;
-(int)_exposureBiasSide;
-(void)set_exposureBiasSide:(int)arg1 ;
-(long long)indicatorClippingStyle;
-(UIView *)indicatorContainerView;
-(CAMFocusIndicatorView *)continuousIndicator;
-(CAMFocusIndicatorView *)pointIndicator;
-(CAMLevelIndicatorView *)levelView;
-(CAMSubjectIndicatorView *)centeredSubjectIndicatorView;
-(CAMStageLightOverlayView *)stageLightOverlayView;
-(CGRect)overlayFrame;
-(int)_faceOrientationForRollAngle:(double)arg1 ;
-(CGRect)faceIndicatorFrameForFaceResult:(id)arg1 ;
-(CGRect)bodyIndicatorFrameForResult:(id)arg1 ;
-(CGRect)_aspectFaceRectFromSquareFaceRect:(CGRect)arg1 angle:(double)arg2 ;
-(void)setIndicatorClippingStyle:(long long)arg1 ;
-(void)setContinuousIndicator:(CAMFocusIndicatorView *)arg1 ;
-(void)setPointIndicator:(CAMFocusIndicatorView *)arg1 ;
-(void)indicatePointOfInterest:(CGPoint)arg1 ;
-(void)setStageLightOverlayView:(CAMStageLightOverlayView *)arg1 ;
-(void)setCenteredSubjectIndicatorView:(CAMSubjectIndicatorView *)arg1 ;
-(CGRect)fixedSizeSubjectIndicatorFrameForFaceResult:(id)arg1 ;
-(CGRect)fixedSizeSubjectIndicatorFrameForBodyResult:(id)arg1 ;
-(CGRect)mrcIndicatorFrameForMRCResult:(id)arg1 ;
-(UILabel *)_simulatorLabel;
@end

