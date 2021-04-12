/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


@protocol MTLComputePipelineState, MTLFunction;
@interface SCNMTLComputePipeline : NSObject {

	id<MTLComputePipelineState> _state;
	id<MTLFunction> _computeFunction;

}

@property (nonatomic,retain) id<MTLComputePipelineState> state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) id<MTLFunction> computeFunction;                //@synthesize computeFunction=_computeFunction - In the implementation block
-(id)init;
-(id<MTLFunction>)computeFunction;
-(id)description;
-(void)setState:(id<MTLComputePipelineState>)arg1 ;
-(id<MTLComputePipelineState>)state;
-(void)setComputeFunction:(id<MTLFunction>)arg1 ;
-(void)dealloc;
@end

