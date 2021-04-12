/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


@protocol AVCaptureVisionDataOutputDelegate <NSObject>
@optional
-(void)visionDataOutput:(id)arg1 didOutputVisionDataPixelBuffer:(CVBufferRef)arg2 timestamp:(SCD_Struct_AV0)arg3 connection:(id)arg4;
-(void)visionDataOutput:(id)arg1 didDropVisionDataPixelBufferForTimestamp:(SCD_Struct_AV0)arg2 connection:(id)arg3 reason:(long long)arg4;

@end

