/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol MPMediaPlayback
@property (nonatomic,readonly) BOOL isPreparedToPlay; 
@property (assign,nonatomic) double currentPlaybackTime; 
@property (assign,nonatomic) float currentPlaybackRate; 
@required
-(void)pause;
-(void)play;
-(void)stop;
-(void)prepareToPlay;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(BOOL)isPreparedToPlay;
-(float)currentPlaybackRate;
-(void)setCurrentPlaybackRate:(float)arg1;
-(double)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(double)arg1;

@end

