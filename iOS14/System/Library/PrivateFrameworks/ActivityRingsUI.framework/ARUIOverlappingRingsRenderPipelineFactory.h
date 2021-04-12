/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <ActivityRingsUI/ARUIRingsRenderPipelineFactory.h>

@class ARUIRingsEmptyState, ARUIRingsFillState, ARUIRingsEndCapShadowState, ARUIRingsAlphaReductionState;

@interface ARUIOverlappingRingsRenderPipelineFactory : ARUIRingsRenderPipelineFactory {

	ARUIRingsEmptyState* _emptyState;
	ARUIRingsFillState* _fillState;
	ARUIRingsEndCapShadowState* _endCapShadowState;
	ARUIRingsAlphaReductionState* _alphaReductionState;

}
-(id)initWithDevice:(id)arg1 library:(id)arg2 ;
-(id)initWithDeviceSPI:(id)arg1 librarySPI:(id)arg2 ;
-(id)pipelineForConfiguration:(id)arg1 ;
@end

