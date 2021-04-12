/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id<MTLComputePipelineState>)state;
-(void)setState:(id<MTLComputePipelineState>)arg1 ;
-(void)setComputeFunction:(id<MTLFunction>)arg1 ;
-(id<MTLFunction>)computeFunction;
@end

