/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NURenderJob.h>

@interface NUVideoRenderJob : NURenderJob
-(id)result;
-(BOOL)prepare:(out id*)arg1 ;
-(BOOL)wantsRenderStage;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(id)scalePolicy;
-(BOOL)wantsOutputVideo;
-(id)generateVideoComposition:(out id*)arg1 ;
-(id)videoRenderRequest;
@end

