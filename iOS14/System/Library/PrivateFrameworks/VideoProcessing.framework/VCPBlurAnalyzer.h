/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@interface VCPBlurAnalyzer : VCPImageAnalyzer
-(int)computeSharpnessScore:(float*)arg1 forObjects:(id)arg2 inImage:(CVBufferRef)arg3 ;
-(float)computeRegionSharpness:(char*)arg1 width:(int)arg2 height:(int)arg3 stride:(long long)arg4 ;
@end

