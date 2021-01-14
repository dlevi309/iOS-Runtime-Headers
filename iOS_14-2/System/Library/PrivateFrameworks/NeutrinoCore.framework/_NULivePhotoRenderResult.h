/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NULivePhotoRenderResult.h>

@class AVAsset, AVVideoComposition, NUImageGeometry, NSString;

@interface _NULivePhotoRenderResult : _NURenderResult <NULivePhotoRenderResult> {

	AVAsset* _video;
	AVVideoComposition* _videoComposition;
	CGImageRef _photo;
	NUImageGeometry* _videoGeometry;
	SCD_Struct_NU6 _photoTime;

}

@property (retain) AVAsset * video;                                    //@synthesize video=_video - In the implementation block
@property (retain) AVVideoComposition * videoComposition;              //@synthesize videoComposition=_videoComposition - In the implementation block
@property (retain) CGImageRef photo;                                   //@synthesize photo=_photo - In the implementation block
@property (assign) SCD_Struct_NU6 photoTime;                           //@synthesize photoTime=_photoTime - In the implementation block
@property (retain) NUImageGeometry * videoGeometry;                    //@synthesize videoGeometry=_videoGeometry - In the implementation block
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPhoto:(CGImageRef)arg1 ;
-(void)setVideo:(AVAsset *)arg1 ;
-(CGImageRef)photo;
-(AVAsset *)video;
-(AVVideoComposition *)videoComposition;
-(void)setVideoComposition:(AVVideoComposition *)arg1 ;
-(void)setPhotoTime:(SCD_Struct_NU6)arg1 ;
-(SCD_Struct_NU6)photoTime;
-(void)dealloc;
-(void)setVideoGeometry:(NUImageGeometry *)arg1 ;
-(NUImageGeometry *)videoGeometry;
@end

