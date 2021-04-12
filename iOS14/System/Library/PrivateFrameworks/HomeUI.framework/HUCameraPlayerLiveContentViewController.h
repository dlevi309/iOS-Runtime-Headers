/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HFCameraPlaybackEngineObserver.h>

@class HFCameraPlaybackEngine, HUCameraView, HUCameraMicrophoneControl, NSString;

@interface HUCameraPlayerLiveContentViewController : UIViewController <HFCameraPlaybackEngineObserver> {

	HFCameraPlaybackEngine* _playbackEngine;
	double _cornerRadius;
	HUCameraView* _cameraView;
	HUCameraMicrophoneControl* _microphoneControl;

}

@property (nonatomic,retain) HUCameraView * cameraView;                                  //@synthesize cameraView=_cameraView - In the implementation block
@property (nonatomic,retain) HUCameraMicrophoneControl * microphoneControl;              //@synthesize microphoneControl=_microphoneControl - In the implementation block
@property (nonatomic,readonly) HFCameraPlaybackEngine * playbackEngine;                  //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                        //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HUCameraView *)cameraView;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(void)setCameraView:(HUCameraView *)arg1 ;
-(HUCameraMicrophoneControl *)microphoneControl;
-(void)setMicrophoneControl:(HUCameraMicrophoneControl *)arg1 ;
-(double)cornerRadius;
-(void)playbackEngine:(id)arg1 didUpdateLiveCameraSource:(id)arg2 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(HFCameraPlaybackEngine *)playbackEngine;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_updateCameraCornerRadius;
@end

