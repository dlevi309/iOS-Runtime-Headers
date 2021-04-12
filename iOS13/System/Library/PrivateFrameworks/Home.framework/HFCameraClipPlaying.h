/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

@class AVPlayer, HMCameraProfile, NSArray, HFCameraClipPosition, NSError;


@protocol HFCameraClipPlaying <NSObject>
@property (nonatomic,readonly) AVPlayer * player; 
@property (nonatomic,readonly) HMCameraProfile * cameraProfile; 
@property (nonatomic,retain) NSArray * clips; 
@property (assign,nonatomic,__weak) id<HFCameraClipPlayerDelegate> delegate; 
@property (assign,nonatomic,__weak) id<HFCameraClipScrubbing> scrubber; 
@property (nonatomic,copy) HFCameraClipPosition * currentPosition; 
@property (nonatomic,readonly) long long timeControlStatus; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) BOOL hasFatalError; 
@property (assign,getter=isScrubbing,nonatomic) BOOL scrubbing; 
@required
-(id<HFCameraClipPlayerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NSError *)error;
-(void)pause;
-(void)play;
-(AVPlayer *)player;
-(void)removeTimeObserver:(id)arg1;
-(long long)timeControlStatus;
-(BOOL)isScrubbing;
-(HFCameraClipPosition *)currentPosition;
-(id)addPeriodicTimeObserverForInterval:(double)arg1 usingBlock:(/*^block*/id)arg2;
-(void)setClips:(id)arg1;
-(void)setCurrentPosition:(id)arg1;
-(HMCameraProfile *)cameraProfile;
-(void)setScrubbing:(BOOL)arg1;
-(id<HFCameraClipScrubbing>)scrubber;
-(void)setScrubber:(id)arg1;
-(NSArray *)clips;
-(BOOL)hasFatalError;
-(void)endScrubbingWithOffset:(double)arg1;

@end

