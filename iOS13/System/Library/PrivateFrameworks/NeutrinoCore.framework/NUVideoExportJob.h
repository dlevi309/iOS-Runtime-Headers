/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUExportJob.h>

@interface NUVideoExportJob : NUExportJob {

	SCD_Struct_NU6 _livePhotoKeyFrameTime;

}
-(BOOL)render:(out id*)arg1 ;
-(BOOL)prepare:(out id*)arg1 ;
-(BOOL)requiresVideoComposition;
-(BOOL)wantsOutputGeometry;
-(id)scalePolicy;
-(id)initWithVideoExportRequest:(id)arg1 ;
-(id)initWithExportRequest:(id)arg1 ;
-(id)videoExportRequest;
-(BOOL)wantsOutputVideo;
-(id)generateVideoComposition:(out id*)arg1 ;
-(BOOL)writeVideoFrom:(id)arg1 toWriter:(id)arg2 stillImageTime:(SCD_Struct_NU6)arg3 createCustomMetadata:(BOOL)arg4 geometryTransform:(id)arg5 inputSize:(CGSize)arg6 outputSize:(CGSize)arg7 error:(out id*)arg8 ;
-(BOOL)renderVideoFrames:(id)arg1 intoPixelBuffer:(CVBufferRef)arg2 time:(SCD_Struct_NU6)arg3 colorSpace:(id)arg4 error:(out id*)arg5 ;
@end

