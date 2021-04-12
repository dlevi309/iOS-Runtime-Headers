/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/

#import <UB/DeepFusionPyramidBaseClass.h>

@interface DeepFusionLaplacianPyramid : DeepFusionPyramidBaseClass
-(id)initWithMetalContext:(id)arg1 ;
-(int)_validateInputs:(id)arg1 gaussianPyramid:(id)arg2 ;
-(int)_performLaplacianPyramid:(id)arg1 inputTextures:(id)arg2 destinationTextures:(id)arg3 ;
-(int)computeUsing:(id)arg1 gaussianPyramid:(id)arg2 ;
@end

