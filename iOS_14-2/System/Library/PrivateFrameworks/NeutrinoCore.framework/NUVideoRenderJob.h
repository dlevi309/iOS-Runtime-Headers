/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NURenderJob.h>

@interface NUVideoRenderJob : NURenderJob
-(id)result;
-(BOOL)prepare:(out id*)arg1 ;
-(BOOL)wantsRenderStage;
-(BOOL)wantsCompleteStage;
-(BOOL)requiresVideoComposition;
-(BOOL)wantsOutputGeometry;
-(id)scalePolicy;
-(BOOL)wantsOutputVideo;
-(id)generateVideoComposition:(out id*)arg1 ;
-(id)videoRenderRequest;
@end

