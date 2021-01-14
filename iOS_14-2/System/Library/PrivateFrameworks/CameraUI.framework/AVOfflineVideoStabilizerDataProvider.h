/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol AVOfflineVideoStabilizerDataProvider <NSObject>
@required
-(id)copySourceStabilizationMetadataForFrameNumber:(long long)arg1 outputSampleTime:(SCD_Struct_CA7*)arg2 stabilizer:(id)arg3;
-(CVBufferRef)copySourcePixelBufferForFrameNumber:(long long)arg1 outputSampleTime:(SCD_Struct_CA7*)arg2 stabilizer:(id)arg3;

@end

