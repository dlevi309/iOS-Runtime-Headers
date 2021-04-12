/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/FigCaptureRemoteQueueSinkPipeline.h>

@class BWFigVideoCaptureStream, NSString;

@interface FigCaptureVisionDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {

	BWFigVideoCaptureStream* _captureStream;
	NSString* _sourceID;
	int _sourceDeviceType;

}

@property (nonatomic,readonly) NSString * sourceID;               //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,readonly) int sourceDeviceType;              //@synthesize sourceDeviceType=_sourceDeviceType - In the implementation block
+(void)initialize;
-(void)dealloc;
-(NSString *)sourceID;
-(int)sourceDeviceType;
-(void)setKeypointDetectionThreshold:(float)arg1 ;
-(id)initWithVisionDataConnectionConfiguration:(id)arg1 videoDataConnectionConfiguration:(id)arg2 graph:(id)arg3 name:(id)arg4 visionCaptureOutput:(id)arg5 captureDevice:(id)arg6 clientPID:(id)arg7 delegate:(id)arg8 ;
-(void)triggerVisionDataBurst;
-(int)_buildVisionDataSinkPipeline:(id)arg1 videoDataConnectionConfiguration:(id)arg2 graph:(id)arg3 visionCaptureOutput:(id)arg4 clientPID:(id)arg5 delegate:(id)arg6 ;
@end

