/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(AVAsset *)video;
-(AVVideoComposition *)videoComposition;
-(SCD_Struct_NU6)photoTime;
-(NUImageGeometry *)videoGeometry;

@end

