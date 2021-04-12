/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


@class AVVideoComposition;

@interface PFLivePhotoPlaybackSettings : NSObject {

	float _audioVolume;
	AVVideoComposition* _videoComposition;

}

@property (nonatomic,retain) AVVideoComposition * videoComposition;              //@synthesize videoComposition=_videoComposition - In the implementation block
@property (assign,nonatomic) float audioVolume;                                  //@synthesize audioVolume=_audioVolume - In the implementation block
-(id)init;
-(void)setAudioVolume:(float)arg1 ;
-(AVVideoComposition *)videoComposition;
-(void)setVideoComposition:(AVVideoComposition *)arg1 ;
-(float)audioVolume;
@end

