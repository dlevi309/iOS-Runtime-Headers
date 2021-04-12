/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

