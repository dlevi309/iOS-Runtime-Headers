/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUVideoRenderResult.h>

@class AVAsset, AVComposition, AVVideoComposition, AVAudioMix, NUImageGeometry, NSString;

@interface _NUVideoRenderResult : _NURenderResult <NUVideoRenderResult> {

	AVAsset* _video;
	AVVideoComposition* _videoComposition;
	AVAudioMix* _audioMix;
	NUImageGeometry* _geometry;

}

@property (retain) AVAsset * video;                                        //@synthesize video=_video - In the implementation block
@property (retain) AVVideoComposition * videoComposition;                  //@synthesize videoComposition=_videoComposition - In the implementation block
@property (retain) AVAudioMix * audioMix;                                  //@synthesize audioMix=_audioMix - In the implementation block
@property (retain) NUImageGeometry * geometry;                             //@synthesize geometry=_geometry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) AVComposition * avAsset; 
@property (readonly) AVVideoComposition * avVideoComposition; 
-(NSString *)description;
-(NUImageGeometry *)geometry;
-(void)setGeometry:(NUImageGeometry *)arg1 ;
-(void)setAudioMix:(AVAudioMix *)arg1 ;
-(AVVideoComposition *)videoComposition;
-(void)setVideoComposition:(AVVideoComposition *)arg1 ;
-(AVAudioMix *)audioMix;
-(AVAsset *)video;
-(AVComposition *)avAsset;
-(void)setVideo:(AVAsset *)arg1 ;
-(AVVideoComposition *)avVideoComposition;
@end

