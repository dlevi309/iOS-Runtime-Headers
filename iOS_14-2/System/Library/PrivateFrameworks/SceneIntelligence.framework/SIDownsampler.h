/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SceneIntelligence.framework/SceneIntelligence
*/


@protocol MTLComputePipelineState;
@interface SIDownsampler : NSObject {

	int _scaleFactor;
	id<MTLComputePipelineState> _pipelineState;

}
-(void)encodeToCommandBuffer:(id)arg1 input:(id)arg2 output:(id)arg3 ;
-(id)initWithFactory:(id)arg1 scaleFactor:(int)arg2 ;
@end

