/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/


@class AVPlayer, SVVideoDurationObserver;

@interface SVLooper : NSObject {

	AVPlayer* _player;
	SVVideoDurationObserver* _durationObserver;

}

@property (nonatomic,readonly) AVPlayer * player;                                       //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) SVVideoDurationObserver * durationObserver;              //@synthesize durationObserver=_durationObserver - In the implementation block
-(AVPlayer *)player;
-(id)initWithPlayer:(id)arg1 ;
-(SVVideoDurationObserver *)durationObserver;
@end

