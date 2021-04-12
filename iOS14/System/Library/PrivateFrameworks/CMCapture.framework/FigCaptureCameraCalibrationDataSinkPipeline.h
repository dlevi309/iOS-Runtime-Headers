/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureRemoteQueueSinkPipeline.h>

@class NSString;

@interface FigCaptureCameraCalibrationDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {

	NSString* _sourceID;

}

@property (nonatomic,readonly) NSString * sourceID;              //@synthesize sourceID=_sourceID - In the implementation block
+(void)initialize;
-(NSString *)sourceID;
-(int)_buildCameraCalibrationDataSinkPipelineWithConfiguration:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 cameraInfoByPortType:(id)arg4 clientAuditToken:(SCD_Struct_Fi80)arg5 delegate:(id)arg6 ;
-(id)initWithConfiguration:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 name:(id)arg4 cameraInfoByPortType:(id)arg5 clientAuditToken:(SCD_Struct_Fi80)arg6 delegate:(id)arg7 ;
-(void)dealloc;
@end

