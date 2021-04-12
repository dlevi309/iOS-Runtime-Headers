/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <ActivityRingsUI/ARUIRingsRenderPipelineFactory.h>

@class ARUIRingsEmptyState, ARUIRingsCountdownState, ARUIRingsAlphaReductionState;

@interface ARUICountdownRingsRenderPipelineFactory : ARUIRingsRenderPipelineFactory {

	ARUIRingsEmptyState* _emptyState;
	ARUIRingsCountdownState* _countdownState;
	ARUIRingsAlphaReductionState* _alphaReductionState;

}
-(id)initWithDevice:(id)arg1 library:(id)arg2 ;
-(id)pipelineForConfiguration:(id)arg1 ;
-(id)initWithDeviceSPI:(id)arg1 librarySPI:(id)arg2 ;
@end

