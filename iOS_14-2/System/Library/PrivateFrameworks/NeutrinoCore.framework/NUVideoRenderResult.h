/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

@class AVAsset, AVComposition, AVVideoComposition, AVAudioMix, NUImageGeometry;


@protocol NUVideoRenderResult <NURenderResult>
@property (readonly) AVAsset * video; 
@property (readonly) AVComposition * avAsset; 
@property (readonly) AVVideoComposition * videoComposition; 
@property (readonly) AVVideoComposition * avVideoComposition; 
@property (readonly) AVAudioMix * audioMix; 
@property (readonly) NUImageGeometry * geometry; 
@required
-(NUImageGeometry *)geometry;
-(AVAsset *)video;
-(AVAudioMix *)audioMix;
-(AVVideoComposition *)videoComposition;
-(AVComposition *)avAsset;
-(AVVideoComposition *)avVideoComposition;

@end

