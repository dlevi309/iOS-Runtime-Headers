/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@interface VCPBlurAnalyzer : VCPImageAnalyzer
-(int)computeSharpnessScore:(float*)arg1 forObjects:(id)arg2 inImage:(CVBufferRef)arg3 ;
-(float)computeRegionSharpness:(char*)arg1 width:(int)arg2 height:(int)arg3 stride:(long long)arg4 ;
@end

