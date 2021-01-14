/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/


@protocol MTLRenderPipelineState;
@class NSString;

@interface FuseRemixFragmentShader : NSObject {

	id<MTLRenderPipelineState> _pipeline;
	NSString* _fragName;

}
-(id)initWithMetal:(id)arg1 fragName:(id)arg2 pixelFormat:(unsigned long long)arg3 fusionType:(int)arg4 fixPyramidAlignment:(BOOL)arg5 staticOIS:(BOOL)arg6 reduceOisGhosting:(BOOL)arg7 ;
@end

