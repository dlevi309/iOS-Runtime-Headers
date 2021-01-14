/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HFCameraPlaybackEngineObserver.h>

@class HFCameraPlaybackEngine, UIImageView, HMCameraClip, NSString;

@interface HUCameraPlayerPlaceholderContentViewController : UIViewController <HFCameraPlaybackEngineObserver> {

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
-(id)initWithPlaybackEngine:(id)arg1 ;
-(void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdatePlaybackError:(id)arg2 ;
-(void)viewDidLoad;
-(UIImageView *)placeholderImageView;
-(void)setPlaybackEngine:(HFCameraPlaybackEngine *)arg1 ;
-(void)setPlaceholderImageView:(UIImageView *)arg1 ;
-(HFCameraPlaybackEngine *)playbackEngine;
-(void)updatePlaceholderContent;
-(BOOL)cameraPlayerHasContentToShow;
-(BOOL)_shouldHidePlaceholderContentForCurrentAccessMode;
-(void)updatePlaceholderImage:(id)arg1 ;
-(void)setCameraPlayerHasContentToShow:(BOOL)arg1 ;
-(void)hu_reloadData;
-(HMCameraClip *)lastRequestedClip;
-(void)setLastRequestedClip:(HMCameraClip *)arg1 ;
@end

