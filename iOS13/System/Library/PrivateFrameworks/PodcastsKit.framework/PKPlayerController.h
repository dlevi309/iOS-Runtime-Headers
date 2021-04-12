/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

@class PKEpisode, PKDurationSnapshot;


@protocol PKPlayerController
@property (readonly,nonatomic) PKEpisode * currentEpisode; 
@property (readonly,nonatomic) PKDurationSnapshot * durationSnapshot; 
@property (readonly,nonatomic) double forwardJumpDuration; 
@property (readonly,nonatomic) double backwardJumpDuration; 
@property (copy,nonatomic) id playerResponseHandler; 
@required
-(void)pauseWithCompletion:(/*^block*/id)arg1;
-(PKEpisode *)currentEpisode;
-(PKDurationSnapshot *)durationSnapshot;
-(void)playWithCompletion:(/*^block*/id)arg1;
-(void)startPlayback:(id)arg1 completion:(/*^block*/id)arg2;
-(void)seekToPositionWithElapsedTime:(double)arg1 completion:(/*^block*/id)arg2;
-(void)jumpForwardsWithCompletion:(/*^block*/id)arg1;
-(void)jumpBackwardsWithCompletion:(/*^block*/id)arg1;
-(double)forwardJumpDuration;
-(double)backwardJumpDuration;
-(id)playerResponseHandler;
-(void)setPlayerResponseHandler:(/*^block*/id)arg1;

@end

