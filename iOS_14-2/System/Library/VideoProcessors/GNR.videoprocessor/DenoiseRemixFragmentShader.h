/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/


@protocol MTLRenderPipelineState;
@class NSString;

@interface DenoiseRemixFragmentShader : NSObject {

	id<MTLRenderPipelineState> _pipeline;
	NSString* _fragName;

}
-(id)initWithMetal:(id)arg1 vertFunc:(id)arg2 fragName:(id)arg3 useLGA:(int)arg4 useGDGNR:(int)arg5 pixelFormat:(unsigned long long)arg6 pixelFormat2:(unsigned long long)arg7 pixelFormat3:(unsigned long long)arg8 ;
@end

