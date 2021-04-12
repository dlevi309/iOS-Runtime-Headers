/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/FigCaptureRemoteQueueSinkPipeline.h>

@class NSString;

@interface FigCaptureCameraCalibrationDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {

	NSString* _sourceID;

}

@property (nonatomic,readonly) NSString * sourceID;              //@synthesize sourceID=_sourceID - In the implementation block
+(void)initialize;
-(void)dealloc;
-(NSString *)sourceID;
-(id)initWithConfiguration:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 name:(id)arg4 cameraInfoByPortType:(id)arg5 clientPID:(id)arg6 delegate:(id)arg7 ;
-(int)_buildCameraCalibrationDataSinkPipelineWithConfiguration:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 cameraInfoByPortType:(id)arg4 clientPID:(id)arg5 delegate:(id)arg6 ;
@end

