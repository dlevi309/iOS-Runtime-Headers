/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HFCameraPlaybackEngineObserver.h>

@class HFCameraPlaybackEngine, HUCameraView, NSString;

@interface HUCameraPlayerLiveContentViewController : UIViewController <HFCameraPlaybackEngineObserver> {

	HFCameraPlaybackEngine* _playbackEngine;
	double _cornerRadius;
	HUCameraView* _cameraView;

}

@property (nonatomic,retain) HUCameraView * cameraView;                              //@synthesize cameraView=_cameraView - In the implementation block
@property (nonatomic,readonly) HFCameraPlaybackEngine * playbackEngine;              //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                    //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(double)cornerRadius;
-(HUCameraView *)cameraView;
-(void)setCameraView:(HUCameraView *)arg1 ;
-(HFCameraPlaybackEngine *)playbackEngine;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(void)playbackEngine:(id)arg1 didUpdateLiveCameraSource:(id)arg2 ;
-(void)_updateCameraCornerRadius;
@end

