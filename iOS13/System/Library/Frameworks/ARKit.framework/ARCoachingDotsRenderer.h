/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@protocol MTLRenderPipelineState;
#import <ARKit/ARKit-Structs.h>
@interface ARCoachingDotsRenderer : NSObject {

	unsigned long long _pixelFormat;
	id<MTLRenderPipelineState> _pipelineState;

}
-(id)init:(id)arg1 pixelFormat:(unsigned long long)arg2 metalLibrary:(id)arg3 sampleCount:(int)arg4 ;
-(void)encode:(id)arg1 renderCommandEncoder:(id)arg2 mvp:(SCD_Struct_AR1)arg3 visibility:(float)arg4 renderParams:(SCD_Struct_AR132)arg5 time:(double)arg6 ;
@end

