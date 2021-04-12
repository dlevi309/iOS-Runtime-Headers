/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)pause;
-(void)play;
-(void)stop;
-(void)setDelegate:(id)arg1;
-(long long)state;
-(void)setPlaybackEnabled:(BOOL)arg1;
-(TVMediaInfo *)mediaInfo;
-(BOOL)showsVideoControls;
-(BOOL)shouldZoomWhenTransitioningToBackground;
-(BOOL)isPlaybackEnabled;
-(void)setShowsVideoControls:(BOOL)arg1;
-(void)transitionToForeground:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setMediaInfo:(id)arg1;
-(void)setShouldZoomWhenTransitioningToBackground:(BOOL)arg1;
-(UIImage *)coverImage;

@end

