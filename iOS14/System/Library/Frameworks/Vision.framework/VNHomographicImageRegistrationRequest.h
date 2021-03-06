/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageRegistrationRequest.h>

@interface VNHomographicImageRegistrationRequest : VNImageRegistrationRequest
-(BOOL)wantsSequencedRequestObservationsRecording;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)allowsCachingOfResults;
-(CVBufferRef)_createHomographicPixelBufferFromImageBuffer:(id)arg1 cropRect:(CGRect)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)_createN:(unsigned long long)arg1 CVPixelBuffers:(_CVBuffer*)arg2 withPixelFormat:(unsigned)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 error:(id*)arg6 ;
-(BOOL)_calculateHomographicWarpTransform:(SCD_Struct_VN18*)arg1 ofFloatingImagePixelBuffer:(CVBufferRef)arg2 ontoReferenceImagePixelBuffer:(CVBufferRef)arg3 usingImageRegistrationContext:(ImageRegistrationCtx_sRef)arg4 glContext:(void*)arg5 seededWithPreviousWarpTransform:(const SCD_Struct_VN18*)arg6 error:(id*)arg7 ;
@end

