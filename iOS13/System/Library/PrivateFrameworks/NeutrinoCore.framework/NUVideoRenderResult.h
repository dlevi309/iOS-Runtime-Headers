/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(AVVideoComposition *)videoComposition;
-(AVAudioMix *)audioMix;
-(AVAsset *)video;
-(AVComposition *)avAsset;
-(AVVideoComposition *)avVideoComposition;

@end

