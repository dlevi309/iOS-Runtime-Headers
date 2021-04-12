/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@protocol HFCameraClipScrubbing, HFCameraLiveStreamControlling;
@class HMHome, HMCameraProfile, HFCameraPlaybackPosition;

@interface HFCameraPlaybackEngineConfiguration : NSObject {

	HMHome* _home;
	HMCameraProfile* _cameraProfile;
	HFCameraPlaybackPosition* _playbackPosition;
	id<HFCameraClipScrubbing> _clipScrubber;
	/*^block*/id _clipPlayerBuilder;
	id<HFCameraLiveStreamControlling> _liveStreamController;

}

@property (nonatomic,copy) id clipPlayerBuilder;                                                  //@synthesize clipPlayerBuilder=_clipPlayerBuilder - In the implementation block
@property (nonatomic,retain) id<HFCameraLiveStreamControlling> liveStreamController;              //@synthesize liveStreamController=_liveStreamController - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                     //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HMCameraProfile * cameraProfile;                                   //@synthesize cameraProfile=_cameraProfile - In the implementation block
@property (nonatomic,retain) HFCameraPlaybackPosition * playbackPosition;                         //@synthesize playbackPosition=_playbackPosition - In the implementation block
@property (assign,nonatomic,__weak) id<HFCameraClipScrubbing> clipScrubber;                       //@synthesize clipScrubber=_clipScrubber - In the implementation block
-(HMHome *)home;
-(void)setPlaybackPosition:(HFCameraPlaybackPosition *)arg1 ;
-(HFCameraPlaybackPosition *)playbackPosition;
-(HMCameraProfile *)cameraProfile;
-(void)assertConfigurationIsValid;
-(id)clipPlayerBuilder;
-(id<HFCameraClipScrubbing>)clipScrubber;
-(id<HFCameraLiveStreamControlling>)liveStreamController;
-(id)initWithHome:(id)arg1 cameraProfile:(id)arg2 ;
-(void)setClipScrubber:(id<HFCameraClipScrubbing>)arg1 ;
-(void)setClipPlayerBuilder:(id)arg1 ;
-(void)setLiveStreamController:(id<HFCameraLiveStreamControlling>)arg1 ;
@end

