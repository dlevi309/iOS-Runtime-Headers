/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HFCameraPlaybackEngineObserver.h>
#import <libobjc.A.dylib/HFPosterFrameImageObserver.h>

@class HFCameraPlaybackEngine, UIImageView, HMCameraClip, NSString;

@interface HUCameraPlayerPlaceholderContentViewController : UIViewController <HFCameraPlaybackEngineObserver, HFPosterFrameImageObserver> {

	BOOL _cameraPlayerHasContentToShow;
	HFCameraPlaybackEngine* _playbackEngine;
	UIImageView* _placeholderImageView;
	HMCameraClip* _lastRequestedClip;

}

@property (assign,nonatomic,__weak) HFCameraPlaybackEngine * playbackEngine;              //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (nonatomic,retain) UIImageView * placeholderImageView;                          //@synthesize placeholderImageView=_placeholderImageView - In the implementation block
@property (nonatomic,retain) HMCameraClip * lastRequestedClip;                            //@synthesize lastRequestedClip=_lastRequestedClip - In the implementation block
@property (assign,nonatomic) BOOL cameraPlayerHasContentToShow;                           //@synthesize cameraPlayerHasContentToShow=_cameraPlayerHasContentToShow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(UIImageView *)placeholderImageView;
-(void)setPlaceholderImageView:(UIImageView *)arg1 ;
-(HFCameraPlaybackEngine *)playbackEngine;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(void)setPlaybackEngine:(HFCameraPlaybackEngine *)arg1 ;
-(void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdatePlaybackError:(id)arg2 ;
-(void)manager:(id)arg1 didFindImage:(id)arg2 atTimeOffset:(double)arg3 forClip:(id)arg4 ;
-(void)_updatePlaceholderContentAnimated:(BOOL)arg1 ;
-(BOOL)cameraPlayerHasContentToShow;
-(BOOL)_shouldHidePlaceholderContentForCurrentAccessMode;
-(HMCameraClip *)lastRequestedClip;
-(void)setLastRequestedClip:(HMCameraClip *)arg1 ;
-(void)_animateState:(BOOL)arg1 placeholderImage:(id)arg2 ;
-(void)_updateStateAnimated:(BOOL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setCameraPlayerHasContentToShow:(BOOL)arg1 ;
-(void)hu_reloadData;
@end

