/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SceneIntelligence.framework/SceneIntelligence
*/


@protocol MTLComputePipelineState;
@interface SIUpsampler : NSObject {

	id<MTLComputePipelineState> _pipelineState;

}
-(id)initWithFactory:(id)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 input:(id)arg2 output:(id)arg3 ;
@end

