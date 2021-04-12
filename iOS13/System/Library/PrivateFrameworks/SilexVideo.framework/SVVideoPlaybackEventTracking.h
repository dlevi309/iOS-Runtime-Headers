/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

@class NSError;


@protocol SVVideoPlaybackEventTracking <NSObject>
@property (setter=onPlaybackStart:,nonatomic,copy) id playbackStartBlock; 
@property (setter=onPlaybackPaused:,nonatomic,copy) id playbackPausedBlock; 
@property (setter=onPlaybackResumed:,nonatomic,copy) id playbackResumedBlock; 
@property (setter=onPlaybackFinished:,nonatomic,copy) id playbackFinishedBlock; 
@property (setter=onPlaybackFailed:,nonatomic,copy) id playbackFailedBlock; 
@property (nonatomic,copy,readonly) NSError * error; 
@required
-(NSError *)error;
-(void)onPlaybackStart:(/*^block*/id)arg1;
-(void)onPlaybackPaused:(/*^block*/id)arg1;
-(void)onPlaybackResumed:(/*^block*/id)arg1;
-(void)onPlaybackFinished:(/*^block*/id)arg1;
-(void)onPlaybackFailed:(/*^block*/id)arg1;
-(id)playbackStartBlock;
-(id)playbackResumedBlock;
-(id)playbackPausedBlock;
-(id)playbackFinishedBlock;
-(id)playbackFailedBlock;

@end

