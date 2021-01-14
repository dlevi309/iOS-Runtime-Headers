/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CAMVideoPreviewView, CAMInterfaceModulationView, CAMFocusIndicatorView, CAMGridView, CAMLevelIndicatorView, CAMSubjectIndicatorView, CAMStageLightOverlayView, UILabel, AVCaptureVideoPreviewLayer;

@interface CAMPreviewView : UIView {

	int __exposureBiasSide;
	long long _orientation;
	CAMVideoPreviewView* _videoPreviewView;
	CAMInterfaceModulationView* _indicatorContainerView;
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
@property (nonatomic,readonly) CAMInterfaceModulationView * indicatorContainerView;               //@synthesize indicatorContainerView=_indicatorContainerView - In the implementation block
@property (assign,nonatomic) long long indicatorClippingStyle;                                    //@synthesize indicatorClippingStyle=_indicatorClippingStyle - In the implementation block
@property (nonatomic,retain) CAMFocusIndicatorView * continuousIndicator;                         //@synthesize continuousIndicator=_continuousIndicator - In the implementation block
@property (nonatomic,retain) CAMFocusIndicatorView * pointIndicator;                              //@synthesize pointIndicator=_pointIndicator - In the implementation block
@property (assign,nonatomic) CAMGridView * gridView;                                              //@synthesize gridView=_gridView - In the implementation block
@property (assign,nonatomic) CAMLevelIndicatorView * levelView;                                   //@synthesize levelView=_levelView - In the implementation block
@property (nonatomic,retain) CAMSubjectIndicatorView * centeredSubjectIndicatorView;              //@synthesize centeredSubjectIndicatorView=_centeredSubjectIndicatorView - In the implementation block
@property (nonatomic,retain) CAMStageLightOverlayView * stageLightOverlayView;                    //@synthesize stageLightOverlayView=_stageLightOverlayView - In the implementation block
@property (assign,nonatomic) double bottomContentInset;                                           //@synthesize bottomContentInset=_bottomContentInset - In the implementation block
+(Class)layerClass;
-(AVCaptureVideoPreviewLayer *)videoPreviewLayer;
-(CAMGridView *)gridView;
-(int)_exposureBiasSide;
-(double)bottomContentInset;
-(CGRect)viewportFrame;
-(CGPoint)pointForCaptureDevicePointOfInterest:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPointIndicator:(CAMFocusIndicatorView *)arg1 ;
-(void)setBottomContentInset:(double)arg1 ;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(CGPoint)captureDevicePointOfInterestForPoint:(CGPoint)arg1 ;
-(CGRect)fixedSizeSubjectIndicatorFrameForFaceResult:(id)arg1 ;
-(CAMVideoPreviewView *)videoPreviewView;
-(void)indicatePointOfInterest:(CGPoint)arg1 ;
-(CAMLevelIndicatorView *)levelView;
-(void)setIndicatorClippingStyle:(long long)arg1 ;
-(void)setCenteredSubjectIndicatorView:(CAMSubjectIndicatorView *)arg1 ;
-(void)setOverlayFrame:(CGRect)arg1 ;
-(CAMInterfaceModulationView *)indicatorContainerView;
-(void)set_exposureBiasSide:(int)arg1 ;
-(CGRect)mrcIndicatorFrameForMRCResult:(id)arg1 ;
-(long long)indicatorClippingStyle;
-(CAMStageLightOverlayView *)stageLightOverlayView;
-(void)layoutSubviews;
-(void)setGridView:(CAMGridView *)arg1 ;
-(CAMSubjectIndicatorView *)centeredSubjectIndicatorView;
-(CGRect)_aspectFaceRectFromSquareFaceRect:(CGRect)arg1 angle:(double)arg2 ;
-(CGRect)overlayFrame;
-(CGRect)faceIndicatorFrameForFaceResult:(id)arg1 ;
-(CAMFocusIndicatorView *)pointIndicator;
-(long long)orientation;
-(void)setVideoPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(int)_faceOrientationForRollAngle:(double)arg1 ;
-(CAMFocusIndicatorView *)continuousIndicator;
-(void)setContinuousIndicator:(CAMFocusIndicatorView *)arg1 ;
-(CGRect)bodyIndicatorFrameForResult:(id)arg1 ;
-(CGRect)fixedSizeSubjectIndicatorFrameForBodyResult:(id)arg1 ;
-(void)setLevelView:(CAMLevelIndicatorView *)arg1 ;
-(void)setStageLightOverlayView:(CAMStageLightOverlayView *)arg1 ;
-(UILabel *)_simulatorLabel;
-(void)setViewportFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setOrientation:(long long)arg1 ;
@end

