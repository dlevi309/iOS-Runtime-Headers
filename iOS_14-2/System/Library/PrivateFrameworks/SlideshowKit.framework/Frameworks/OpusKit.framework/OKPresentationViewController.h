/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKPresentationViewControllerProxy.h>

@class CMMotionManager, CMAttitude, NSOperationQueue, OKUILabelHUDView, OKRoundProgressView;

@interface OKPresentationViewController : OKPresentationViewControllerProxy {

	CMMotionManager* _motionManager;
	CMAttitude* _motionAttitudeReference;
	long long _motionOrientationReference;
	NSOperationQueue* _motionQueue;
	BOOL _shouldForwardMotion;
	double _motionLastRotationX;
	double _motionLastRotationY;
	double _motionLastRotationZ;
	OKUILabelHUDView* _couchLabelHUDView;
	OKRoundProgressView* _roundProgressView;

}

@property (nonatomic,retain) OKUILabelHUDView * couchLabelHUDView;              //@synthesize couchLabelHUDView=_couchLabelHUDView - In the implementation block
@property (retain) CMAttitude * motionAttitudeReference;                        //@synthesize motionAttitudeReference=_motionAttitudeReference - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)colorSpace;
-(void)viewWillLayoutSubviews;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
-(void)commonInit;
-(void)viewDidLoad;
-(void)_startPresentation;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)motionBegan:(long long)arg1 withEvent:(id)arg2 ;
-(void)motionCancelled:(long long)arg1 withEvent:(id)arg2 ;
-(void)orientationChanged:(id)arg1 ;
-(void)dealloc;
-(void)setActivityIndicatorVisible:(BOOL)arg1 ;
-(void)updateMotion;
-(BOOL)isActivityIndicatorVisible;
-(void)updateActivityIndicatorWithProgress:(double)arg1 ;
-(void)_updateMotion:(long long)arg1 ;
-(void)_startMotion;
-(CMAttitude *)motionAttitudeReference;
-(void)setMotionAttitudeReference:(CMAttitude *)arg1 ;
-(OKUILabelHUDView *)couchLabelHUDView;
-(void)setCouchLabelHUDView:(OKUILabelHUDView *)arg1 ;
@end

