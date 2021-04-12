/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


@protocol MTLComputePipelineState;
@interface ARUIComputeState : NSObject {

	id<MTLComputePipelineState> _computePipelineState;

}

@property (nonatomic,retain) id<MTLComputePipelineState> computePipelineState;              //@synthesize computePipelineState=_computePipelineState - In the implementation block
-(void)setComputePipelineState:(id<MTLComputePipelineState>)arg1 ;
-(id)initWithDevice:(id)arg1 library:(id)arg2 ;
-(id)computeFunctionFromLibrary:(id)arg1 ;
-(id<MTLComputePipelineState>)computePipelineState;
@end

