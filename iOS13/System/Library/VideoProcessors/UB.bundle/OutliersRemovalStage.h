/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@class FigMetalContext, OutliersRemovalShaders;

@interface OutliersRemovalStage : NSObject {

	FigMetalContext* _metal;
	OutliersRemovalShaders* _shaders;

}
+(int)prewarmShaders:(id)arg1 ;
-(id)initWithMetalContext:(id)arg1 ;
-(int)runWithInput:(id)arg1 output:(id)arg2 gamma:(float)arg3 ;
@end

