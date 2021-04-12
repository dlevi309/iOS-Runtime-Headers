/*
* Generated on Monday, March 1, 2021 at 2:33:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CAMPanoramaViewDelegate.h>
#import <libobjc.A.dylib/CAMPanoramaChangeDelegate.h>

@class CUCaptureController, CMMotionManager, UITapGestureRecognizer, CAMPanoramaView, NSString;

@interface CAMPanoramaViewController : UIViewController <CAMPanoramaViewDelegate, CAMPanoramaChangeDelegate> {

	BOOL _painting;
	long long _layoutStyle;
	CUCaptureController* __captureController;
	CMMotionManager* __motionManager;
	long long __captureOrientation;
	UITapGestureRecognizer* __directionChangeGestureRecognizer;

}

@property (nonatomic,readonly) CUCaptureController * _captureController;                                //@synthesize _captureController=__captureController - In the implementation block
@property (setter=_setMotionManager:,nonatomic,retain) CMMotionManager * _motionManager;                //@synthesize _motionManager=__motionManager - In the implementation block
@property (assign,setter=_setPainting:,getter=isPainting,nonatomic) BOOL painting;                      //@synthesize painting=_painting - In the implementation block
@property (assign,setter=_setCaptureOrientation:,nonatomic) long long _captureOrientation;              //@synthesize _captureOrientation=__captureOrientation - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * _directionChangeGestureRecognizer;              //@synthesize _directionChangeGestureRecognizer=__directionChangeGestureRecognizer - In the implementation block
@property (nonatomic,readonly) CAMPanoramaView * panoramaView; 
@property (assign,nonatomic) long long layoutStyle;                                                     //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(BOOL)_canShowWhileLocked;
-(void)setLayoutStyle:(long long)arg1 ;
-(long long)layoutStyle;
-(CMMotionManager *)_motionManager;
-(CUCaptureController *)_captureController;
-(void)updateWithStatus:(id)arg1 ;
-(void)updateToContentSize:(id)arg1 ;
-(CAMPanoramaView *)panoramaView;
-(void)didChangeToMode:(long long)arg1 device:(long long)arg2 ;
-(long long)_captureOrientation;
-(void)startProcessingPanorama;
-(void)finishedProcessingPanorama;
-(id)initWithCaptureController:(id)arg1 layoutStyle:(long long)arg2 ;
-(void)startPainting;
-(void)stopPainting;
-(void)didChangeToCaptureOrientation:(long long)arg1 ;
-(void)_handleDirectionChange:(id)arg1 ;
-(UITapGestureRecognizer *)_directionChangeGestureRecognizer;
-(void)_createMotionManagerIfNecessary;
-(void)_updateWithAccelerometerData:(id)arg1 captureOrientation:(long long)arg2 ;
-(void)_setMotionManager:(id)arg1 ;
-(void)_setCaptureOrientation:(long long)arg1 ;
-(void)_setPainting:(BOOL)arg1 ;
-(void)panoramaViewDidRequestSynchronizedDirectionChange:(id)arg1 toDirection:(long long)arg2 ;
-(void)panoramaConfigurationDidChangeWithDirection:(long long)arg1 ;
-(BOOL)isPainting;
@end

