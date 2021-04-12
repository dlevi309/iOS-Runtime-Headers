/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <libobjc.A.dylib/MPRequestResponseControllerDelegate.h>
#import <libobjc.A.dylib/PKPlayerController.h>

@class PKEpisode, PKDurationSnapshot;

@interface PodcastsKit.ProxyPlayerController : NSObject <MPRequestResponseControllerDelegate, PKPlayerController> {

	 currentEpisode;
	 playerResponseHandler;
	 _currentContentItemIdentifier;
	 requestResponseController;

}

@property (retain,nonatomic) PKEpisode * currentEpisode; 
@property (readonly,nonatomic) PKDurationSnapshot * durationSnapshot; 
@property (readonly,nonatomic) double forwardJumpDuration; 
@property (readonly,nonatomic) double backwardJumpDuration; 
@property (copy,nonatomic) id playerResponseHandler; 
-(void)controller:(id)arg1 defersResponseReplacement:(/*^block*/id)arg2 ;
-(id)init;
-(void)pauseWithCompletion:(/*^block*/id)arg1 ;
-(PKEpisode *)currentEpisode;
-(PKDurationSnapshot *)durationSnapshot;
-(void)playWithCompletion:(/*^block*/id)arg1 ;
-(void)startPlayback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)seekToPositionWithElapsedTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)jumpForwardsWithCompletion:(/*^block*/id)arg1 ;
-(void)jumpBackwardsWithCompletion:(/*^block*/id)arg1 ;
-(double)forwardJumpDuration;
-(double)backwardJumpDuration;
-(id)playerResponseHandler;
-(void)setPlayerResponseHandler:(id)arg1 ;
-(void)setCurrentEpisode:(PKEpisode *)arg1 ;
@end

