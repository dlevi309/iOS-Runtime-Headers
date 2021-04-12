/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

@class TVMediaInfo, UIImage;


@protocol TVMediaController
@property (assign,getter=isPlaybackEnabled,nonatomic) BOOL playbackEnabled; 
@property (assign,nonatomic) BOOL showsVideoControls; 
@property (nonatomic,copy) TVMediaInfo * mediaInfo; 
@property (assign,nonatomic,__weak) id<TVMediaControllerDelegate> delegate; 
@property (nonatomic,readonly) long long state; 
@property (assign,nonatomic) BOOL shouldZoomWhenTransitioningToBackground; 
@property (nonatomic,readonly) UIImage * coverImage; 
@required
-(id<TVMediaControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)pause;
-(void)stop;
-(long long)state;
-(void)play;
-(void)setPlaybackEnabled:(BOOL)arg1;
-(TVMediaInfo *)mediaInfo;
-(BOOL)isPlaybackEnabled;
-(void)setMediaInfo:(id)arg1;
-(UIImage *)coverImage;
-(void)setShowsVideoControls:(BOOL)arg1;
-(void)transitionToForeground:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setShouldZoomWhenTransitioningToBackground:(BOOL)arg1;
-(BOOL)showsVideoControls;
-(BOOL)shouldZoomWhenTransitioningToBackground;

@end

