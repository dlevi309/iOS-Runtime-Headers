/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) AVComposition * avAsset; 
@property (readonly) AVVideoComposition * avVideoComposition; 
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NUImageGeometry *)geometry;
-(void)setVideo:(AVAsset *)arg1 ;
-(AVAsset *)video;
-(AVAudioMix *)audioMix;
-(NSString *)description;
-(void)setGeometry:(NUImageGeometry *)arg1 ;
-(AVVideoComposition *)videoComposition;
-(void)setVideoComposition:(AVVideoComposition *)arg1 ;
-(AVComposition *)avAsset;
-(void)setAudioMix:(AVAudioMix *)arg1 ;
-(AVVideoComposition *)avVideoComposition;
@end

