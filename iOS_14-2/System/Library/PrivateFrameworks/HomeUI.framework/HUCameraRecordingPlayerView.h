/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIView.h>

@class AVPlayer, UIProgressView, AVPlayerLayer;

@interface HUCameraRecordingPlayerView : UIView {

	AVPlayer* _player;
	UIProgressView* _progressView;

}

@property (nonatomic,readonly) AVPlayer * player;                          //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) AVPlayerLayer * playerLayer; 
@property (nonatomic,readonly) UIProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
+(Class)layerClass;
-(AVPlayer *)player;
-(UIProgressView *)progressView;
-(AVPlayerLayer *)playerLayer;
-(id)initWithPlayer:(id)arg1 displayingProgressView:(BOOL)arg2 ;
@end

