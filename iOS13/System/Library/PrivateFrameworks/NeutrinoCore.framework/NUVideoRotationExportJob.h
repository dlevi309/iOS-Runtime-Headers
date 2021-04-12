/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

