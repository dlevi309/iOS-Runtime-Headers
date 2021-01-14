/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

@class AVPlayer, UIView, NSString, NSArray, UIViewController, AVPlayerViewControllerCustomControlsView;


@protocol VUIPlayerViewController <NSObject>
@property (nonatomic,retain) AVPlayer * player; 
@property (nonatomic,readonly) UIView * contentOverlayView; 
@property (nonatomic,copy) NSString * videoGravity; 
@property (assign,nonatomic) BOOL allowsPictureInPicturePlayback; 
@property (assign,nonatomic) BOOL requiresLinearPlayback; 
@property (nonatomic,readonly) CGRect videoBounds; 
@property (nonatomic,copy) NSArray * customControlItems; 
@property (assign,nonatomic) BOOL playbackControlsIncludeTransportControls; 
@property (assign,nonatomic) BOOL playbackControlsIncludeDisplayModeControls; 
@property (assign,nonatomic) BOOL playbackControlsIncludeVolumeControls; 
@property (nonatomic,readonly) UIViewController * viewControllerForFullScreenPresentation; 
@property (nonatomic,readonly) AVPlayerViewControllerCustomControlsView * customControlsView; 
@property (nonatomic,readonly) CGSize videoDisplaySize; 
@property (nonatomic,readonly) double videoDisplayScale; 
@property (assign,nonatomic) BOOL allowAutorotate; 
@required
-(AVPlayer *)player;
-(void)setPlayer:(id)arg1;
-(BOOL)allowsPictureInPicturePlayback;
-(BOOL)requiresLinearPlayback;
-(void)setVideoGravity:(id)arg1;
-(NSString *)videoGravity;
-(CGSize)videoDisplaySize;
-(void)setAllowsPictureInPicturePlayback:(BOOL)arg1;
-(UIView *)contentOverlayView;
-(double)videoDisplayScale;
-(AVPlayerViewControllerCustomControlsView *)customControlsView;
-(BOOL)playbackControlsIncludeTransportControls;
-(void)setPlaybackControlsIncludeTransportControls:(BOOL)arg1;
-(BOOL)playbackControlsIncludeDisplayModeControls;
-(void)setPlaybackControlsIncludeDisplayModeControls:(BOOL)arg1;
-(void)setPlaybackControlsIncludeVolumeControls:(BOOL)arg1;
-(void)setCustomControlItems:(id)arg1;
-(UIViewController *)viewControllerForFullScreenPresentation;
-(void)stopPictureInPicture;
-(BOOL)playbackControlsIncludeVolumeControls;
-(NSArray *)customControlItems;
-(CGRect)videoBounds;
-(void)setRequiresLinearPlayback:(BOOL)arg1;
-(BOOL)allowAutorotate;
-(void)setAllowAutorotate:(BOOL)arg1;

@end

