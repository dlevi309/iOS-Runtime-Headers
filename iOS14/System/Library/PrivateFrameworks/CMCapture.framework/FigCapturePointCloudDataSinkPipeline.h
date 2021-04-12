/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureRemoteQueueSinkPipeline.h>

@class NSString;

@interface FigCapturePointCloudDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {

	NSString* _sourceID;

}

@property (nonatomic,readonly) NSString * sourceID;              //@synthesize sourceID=_sourceID - In the implementation block
+(void)initialize;
-(int)_buildPointCloudDataSinkPipelineWithConfiguration:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 clientAuditToken:(SCD_Struct_Fi80)arg4 delegate:(id)arg5 ;
-(id)initWithConfiguration:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 name:(id)arg4 clientAuditToken:(SCD_Struct_Fi80)arg5 delegate:(id)arg6 ;
-(NSString *)sourceID;
-(void)dealloc;
@end

