/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSKAVPlayerControllerDelegate;
@class AVPlayer;

@interface TSKAVPlayerController : NSObject {

	AVPlayer* mPlayer;
	id<TSKAVPlayerControllerDelegate> mDelegate;
	long long mRepeatMode;
	float mVolume;
	float mRateBeforeScrubbing;
	unsigned long long mScrubbingCount;
	BOOL mCanPlay;
	BOOL mPlaying;
	BOOL mFastReversing;
	BOOL mFastForwarding;
	BOOL mIsObservingStatus;
	unsigned long long mAdditionalReferences;
	double _absoluteCurrentTime;

}

@property (nonatomic,readonly) AVPlayer * player; 
@property (nonatomic,readonly) id<TSKAVPlayerControllerDelegate> delegate; 
@property (nonatomic,readonly) BOOL canPlay; 
@property (assign,getter=isPlaying,nonatomic) BOOL playing; 
@property (nonatomic,readonly) double absoluteDuration; 
@property (nonatomic,readonly) double duration; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double endTime; 
@property (assign,nonatomic) long long repeatMode; 
@property (assign,nonatomic) float volume; 
@property (assign,nonatomic) double absoluteCurrentTime;                                //@synthesize absoluteCurrentTime=_absoluteCurrentTime - In the implementation block
@property (nonatomic,readonly) double currentTime; 
@property (nonatomic,readonly) double remainingTime; 
@property (getter=isScrubbing,nonatomic,readonly) BOOL scrubbing; 
@property (assign,getter=isFastReversing,nonatomic) BOOL fastReversing; 
@property (assign,getter=isFastForwarding,nonatomic) BOOL fastForwarding; 
+(id)keyPathsForValuesAffectingDuration;
+(id)keyPathsForValuesAffectingAbsoluteDuration;
+(BOOL)automaticallyNotifiesObserversOfStartTime;
+(id)keyPathsForValuesAffectingStartTime;
+(BOOL)automaticallyNotifiesObserversOfEndTime;
+(id)keyPathsForValuesAffectingEndTime;
-(id)init;
-(void)dealloc;
-(id<TSKAVPlayerControllerDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)duration;
-(double)startTime;
-(void)teardown;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(double)currentTime;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(BOOL)isPlaying;
-(double)remainingTime;
-(void)setPlaying:(BOOL)arg1 ;
-(AVPlayer *)player;
-(BOOL)isScrubbing;
-(BOOL)canPlay;
-(void)beginScrubbing;
-(void)endScrubbing;
-(long long)repeatMode;
-(void)setRepeatMode:(long long)arg1 ;
-(void)seekToEnd;
-(void)p_startObservingClosedCaptionDisplayEnabled;
-(BOOL)isFastReversing;
-(BOOL)isFastForwarding;
-(void)p_stopObservingClosedCaptionDisplayEnabled;
-(void)p_applyVolumeToPlayerItem;
-(void)scrubToTime:(double)arg1 withTolerance:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)playerItemDidPlayToEndTimeAtRate:(float)arg1 ;
-(void)setFastReversing:(BOOL)arg1 ;
-(void)setFastForwarding:(BOOL)arg1 ;
-(BOOL)p_canFastReverse;
-(BOOL)p_canFastForward;
-(void)p_closedCaptioningStatusDidChange:(id)arg1 ;
-(void)p_updateClosedCaptionDisplayEnabled;
-(void)p_playerItemDidPlayToEndTime:(id)arg1 ;
-(void)p_playbackDidFailWithError:(id)arg1 ;
-(void)p_applicationDidResignActive;
-(id)initWithPlayer:(id)arg1 delegate:(id)arg2 ;
-(void)addAdditionalReference;
-(double)absoluteDuration;
-(double)absoluteCurrentTime;
-(void)scrubToTime:(double)arg1 withTolerance:(double)arg2 ;
-(void)seekForwardByOneFrame;
-(void)seekBackwardByOneFrame;
-(void)seekToBeginning;
-(void)setAbsoluteCurrentTime:(double)arg1 ;
@end

