/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKVideoPlayerViewDelegate.h>

@protocol CLKMediaAssetViewDelegate;
@class CLKVideoPlayerView, CLKMediaAsset, UIImageView, UIView, AVSynchronizedLayer, CALayer, CLKDevice, NSString;

@interface CLKMediaAssetView : UIView <CLKVideoPlayerViewDelegate> {

	CLKVideoPlayerView* _videoPlayerView;
	CLKMediaAsset* _mediaAsset;
	UIImageView* _posterView;
	UIView* _curtainView;
	unsigned _isVideoLoaded : 1;
	unsigned _isPlaying : 1;
	id _timeObserver;
	AVSynchronizedLayer* _syncLayer;
	CALayer* _posterLayer;
	long long _preparedForOperation;
	long long _transitionOperation;
	CLKDevice* _device;
	id<CLKMediaAssetViewDelegate> _delegate;

}

@property (nonatomic,readonly) CLKDevice * device;                                       //@synthesize device=_device - In the implementation block
@property (assign,nonatomic,__weak) id<CLKMediaAssetViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CLKMediaAsset * mediaAsset;                               //@synthesize mediaAsset=_mediaAsset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPlaying;
-(CGSize)intrinsicContentSize;
-(id<CLKMediaAssetViewDelegate>)delegate;
-(CLKDevice *)device;
-(void)_mediaServicesWereReset:(id)arg1 ;
-(void)setDelegate:(id<CLKMediaAssetViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CLKMediaAsset *)mediaAsset;
-(void)_reset;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 forDevice:(id)arg2 ;
-(void)pauseVideoPlayerViewIfItExists;
-(void)videoPlayerViewDidBeginPlaying:(id)arg1 ;
-(void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1 ;
-(void)interruptPlayback;
-(void)resumeInterruptedPlayback;
-(void)_createVideoPlayerViewIfNeeded;
-(void)videoPlayerViewDidBeginPlayingQueuedVideo:(id)arg1 ;
-(void)changeMediaAsset:(id)arg1 ;
-(void)prepareToPlayWithOperation:(long long)arg1 ;
-(void)playWithOperation:(long long)arg1 ;
-(void)pauseWithOperation:(long long)arg1 ;
-(void)_cancelPlayback;
-(SCD_Struct_CL6)_startTimeForOperation:(long long)arg1 ;
-(SCD_Struct_CL6)_endTimeForOperation:(long long)arg1 ;
-(void)_completePlaybackWithOperation:(long long)arg1 ;
-(void)_transitionFromPosterToVideo;
-(void)showCurtainView;
-(void)hideCurtainView;
-(void)fadeToCurtainViewWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)fadeFromCurtainViewWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
@end

