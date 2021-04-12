/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/


@class AVVideoComposition;

@interface ISPlaybackSettings : NSObject {

	float _audioVolume;
	AVVideoComposition* _videoComposition;

}

@property (nonatomic,retain) AVVideoComposition * videoComposition;              //@synthesize videoComposition=_videoComposition - In the implementation block
@property (assign,nonatomic) float audioVolume;                                  //@synthesize audioVolume=_audioVolume - In the implementation block
-(id)init;
-(float)audioVolume;
-(void)setAudioVolume:(float)arg1 ;
-(AVVideoComposition *)videoComposition;
-(void)setVideoComposition:(AVVideoComposition *)arg1 ;
@end

