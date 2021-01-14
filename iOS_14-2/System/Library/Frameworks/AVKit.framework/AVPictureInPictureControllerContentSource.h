/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@protocol AVPictureInPictureSampleBufferPlaybackDelegate;
#import <AVKit/AVKit-Structs.h>
@class AVPlayerLayer, AVSampleBufferDisplayLayer;

@interface AVPictureInPictureControllerContentSource : NSObject {

	AVPlayerLayer* _playerLayer;
	AVSampleBufferDisplayLayer* _sampleBufferDisplayLayer;
	id<AVPictureInPictureSampleBufferPlaybackDelegate> _sampleBufferPlaybackDelegate;
	CGSize _initialRenderSize;

}

@property (nonatomic,readonly) id<AVPictureInPictureContentSource> source; 
@property (nonatomic,readonly) AVPlayerLayer * playerLayer;                                                                         //@synthesize playerLayer=_playerLayer - In the implementation block
@property (nonatomic,readonly) AVSampleBufferDisplayLayer * sampleBufferDisplayLayer;                                               //@synthesize sampleBufferDisplayLayer=_sampleBufferDisplayLayer - In the implementation block
@property (nonatomic,__weak,readonly) id<AVPictureInPictureSampleBufferPlaybackDelegate> sampleBufferPlaybackDelegate;              //@synthesize sampleBufferPlaybackDelegate=_sampleBufferPlaybackDelegate - In the implementation block
@property (nonatomic,readonly) CGSize initialRenderSize;                                                                            //@synthesize initialRenderSize=_initialRenderSize - In the implementation block
-(AVSampleBufferDisplayLayer *)sampleBufferDisplayLayer;
-(CGSize)initialRenderSize;
-(id)init;
-(id)initWithSampleBufferDisplayLayer:(id)arg1 playbackDelegate:(id)arg2 ;
-(id)initWithSampleBufferDisplayLayer:(id)arg1 initialRenderSize:(CGSize)arg2 playbackDelegate:(id)arg3 ;
-(void)_commonInitWithSampleBufferDisplayLayer:(id)arg1 initialRenderSize:(CGSize)arg2 playbackDelegate:(id)arg3 ;
-(id<AVPictureInPictureSampleBufferPlaybackDelegate>)sampleBufferPlaybackDelegate;
-(id)initWithPlayerLayer:(id)arg1 ;
-(void)dealloc;
-(AVPlayerLayer *)playerLayer;
-(id<AVPictureInPictureContentSource>)source;
@end

