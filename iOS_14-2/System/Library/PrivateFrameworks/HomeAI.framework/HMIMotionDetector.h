/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/


@protocol HMIMotionDetector
@required
-(id)initWithSize:(CGSize)arg1;
-(void)appendFramePixelBuffer:(CVBufferRef)arg1 atTime:(SCD_Struct_HM3)arg2;
-(id)detectWithGlobalMotionScore:(float*)arg1;

@end

