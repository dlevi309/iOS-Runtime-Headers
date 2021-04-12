/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


#import <UB/UB-Structs.h>
@class FigMetalContext;

@interface WarpStage : NSObject {

	FigMetalContext* _metal;

}
+(int)prewarmShaders:(id)arg1 ;
-(id)initWarpStage:(id)arg1 ;
-(int)runWarpUsingTransform:(SCD_Struct_Wa0)arg1 inputLumaTex:(id)arg2 inputChromaTex:(id)arg3 outputLumaTex:(id)arg4 outputChromaTex:(id)arg5 ;
@end

