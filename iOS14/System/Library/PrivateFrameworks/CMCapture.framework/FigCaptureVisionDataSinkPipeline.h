/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureRemoteQueueSinkPipeline.h>

@class BWFigVideoCaptureStream, NSString;

@interface FigCaptureVisionDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {

	BWFigVideoCaptureStream* _captureStream;
	NSString* _sourceID;
	int _sourceDeviceType;

}

@property (nonatomic,readonly) NSString * sourceID;               //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,readonly) int sourceDeviceType;              //@synthesize sourceDeviceType=_sourceDeviceType - In the implementation block
+(void)initialize;
-(void)triggerVisionDataBurst;
-(void)setKeypointDetectionThreshold:(float)arg1 ;
-(NSString *)sourceID;
-(int)sourceDeviceType;
-(int)_buildVisionDataSinkPipeline:(id)arg1 videoDataConnectionConfiguration:(id)arg2 graph:(id)arg3 visionCaptureOutput:(id)arg4 clientAuditToken:(SCD_Struct_Fi80)arg5 delegate:(id)arg6 ;
-(id)initWithVisionDataConnectionConfiguration:(id)arg1 videoDataConnectionConfiguration:(id)arg2 graph:(id)arg3 name:(id)arg4 visionCaptureOutput:(id)arg5 captureDevice:(id)arg6 clientAuditToken:(SCD_Struct_Fi80)arg7 delegate:(id)arg8 ;
-(void)dealloc;
@end

