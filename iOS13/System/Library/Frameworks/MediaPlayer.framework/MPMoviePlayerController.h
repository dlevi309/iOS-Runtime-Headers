/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPMediaPlayback.h>

@class NSURL, UIView;

@interface MPMoviePlayerController : NSObject <MPMediaPlayback> {

	id _implementation;

}

@property (nonatomic,copy) NSURL * contentURL; 
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) UIView * backgroundView; 
@property (nonatomic,readonly) long long playbackState; 
@property (nonatomic,readonly) unsigned long long loadState; 
@property (assign,nonatomic) long long controlStyle; 
@property (assign,nonatomic) long long repeatMode; 
@property (assign,nonatomic) BOOL shouldAutoplay; 
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen; 
@property (assign,nonatomic) long long scalingMode; 
@property (nonatomic,readonly) BOOL readyForDisplay; 
@property (nonatomic,readonly) unsigned long long movieMediaTypes; 
@property (assign,nonatomic) long long movieSourceType; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double playableDuration; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (assign,nonatomic) double initialPlaybackTime; 
@property (assign,nonatomic) double endPlaybackTime; 
@property (assign,nonatomic) BOOL allowsAirPlay; 
@property (getter=isAirPlayVideoActive,nonatomic,readonly) BOOL airPlayVideoActive; 
@property (nonatomic,readonly) BOOL isPreparedToPlay; 
@property (assign,nonatomic) double currentPlaybackTime; 
@property (assign,nonatomic) float currentPlaybackRate; 
+(void)allInstancesResignActive;
-(id)init;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)pause;
-(void)stop;
-(double)duration;
-(NSURL *)contentURL;
-(void)setContentURL:(NSURL *)arg1 ;
-(UIView *)view;
-(void)play;
-(UIView *)backgroundView;
-(id)initWithAsset:(id)arg1 ;
-(BOOL)isFullscreen;
-(void)prepareToPlay;
-(CGSize)naturalSize;
-(id)initWithPlayerItem:(id)arg1 ;
-(BOOL)isAirPlayVideoActive;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(BOOL)isPreparedToPlay;
-(double)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(double)arg1 ;
-(float)currentPlaybackRate;
-(void)setCurrentPlaybackRate:(float)arg1 ;
-(id)initWithContentURL:(id)arg1 ;
-(long long)playbackState;
-(unsigned long long)loadState;
-(long long)controlStyle;
-(void)setControlStyle:(long long)arg1 ;
-(long long)repeatMode;
-(void)setRepeatMode:(long long)arg1 ;
-(BOOL)shouldAutoplay;
-(void)setShouldAutoplay:(BOOL)arg1 ;
-(void)setFullscreen:(BOOL)arg1 ;
-(void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)scalingMode;
-(void)setScalingMode:(long long)arg1 ;
-(BOOL)allowsAirPlay;
-(void)setAllowsAirPlay:(BOOL)arg1 ;
-(void)skipToNextItem;
-(void)skipToBeginning;
-(void)skipToPreviousItem;
-(unsigned long long)movieMediaTypes;
-(void)setMovieSourceType:(long long)arg1 ;
-(long long)movieSourceType;
-(double)playableDuration;
-(void)setInitialPlaybackTime:(double)arg1 ;
-(double)initialPlaybackTime;
-(void)setEndPlaybackTime:(double)arg1 ;
-(double)endPlaybackTime;
-(void)_resignActive;
-(BOOL)readyForDisplay;
-(BOOL)_isReadyForDisplay;
@end

