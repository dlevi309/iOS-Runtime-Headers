/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class HFCameraPlaybackEngineObservationOptions;

@interface HFCameraPlaybackEngineObservationState : NSObject {

	HFCameraPlaybackEngineObservationOptions* _options;
	id _timeObservationToken;

}

@property (nonatomic,retain) HFCameraPlaybackEngineObservationOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) id timeObservationToken;                                         //@synthesize timeObservationToken=_timeObservationToken - In the implementation block
-(HFCameraPlaybackEngineObservationOptions *)options;
-(void)setOptions:(HFCameraPlaybackEngineObservationOptions *)arg1 ;
-(void)setTimeObservationToken:(id)arg1 ;
-(id)timeObservationToken;
@end

