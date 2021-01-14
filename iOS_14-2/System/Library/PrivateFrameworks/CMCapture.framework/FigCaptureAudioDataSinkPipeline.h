/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureRemoteQueueSinkPipeline.h>

@interface FigCaptureAudioDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline
+(void)initialize;
-(int)_buildAudioDataSinkPipeline:(id)arg1 graph:(id)arg2 sourceAudioOutput:(id)arg3 clientAuditToken:(SCD_Struct_Fi80)arg4 renderDelegate:(id)arg5 ;
-(id)initWithConfiguration:(id)arg1 graph:(id)arg2 name:(id)arg3 sourceAudioOutput:(id)arg4 clientAuditToken:(SCD_Struct_Fi80)arg5 renderDelegate:(id)arg6 ;
@end

