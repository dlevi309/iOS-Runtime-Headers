/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

@class AVAsset, AVVideoComposition, NUImageGeometry;


@protocol NULivePhotoRenderResult <NURenderResult>
@property (readonly) AVAsset * video; 
@property (readonly) AVVideoComposition * videoComposition; 
@property (readonly) CGImageRef photo; 
@property (readonly) SCD_Struct_NU6 photoTime; 
@property (readonly) NUImageGeometry * videoGeometry; 
@required
-(CGImageRef)photo;
-(AVVideoComposition *)videoComposition;
-(AVAsset *)video;
-(SCD_Struct_NU6)photoTime;
-(NUImageGeometry *)videoGeometry;

@end

