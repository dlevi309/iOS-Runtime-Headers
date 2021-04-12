/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUExportJob.h>

@interface NUVideoRotationExportJob : NUExportJob
-(BOOL)render:(out id*)arg1 ;
-(BOOL)prepare:(out id*)arg1 ;
-(BOOL)wantsRenderStage;
-(BOOL)requiresVideoComposition;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(BOOL)wantsPrepareNodeCached;
-(BOOL)wantsRenderNodeCached;
-(BOOL)wantsRenderScaleClampedToNativeScale;
-(id)scalePolicy;
-(id)initWithExportRequest:(id)arg1 ;
-(BOOL)wantsOutputVideo;
-(id)initWithVideoRotationExportRequest:(id)arg1 ;
-(id)videoRotationExportRequest;
-(BOOL)wantsOutputVideoFrame;
@end

