/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(AVPlayerLayer *)playerLayer;
-(UIProgressView *)progressView;
-(id)initWithPlayer:(id)arg1 displayingProgressView:(BOOL)arg2 ;
@end

