/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@class SingleColorCubeCorrectionStage;

@interface ColorCubeCorrectionStage : NSObject {

	SingleColorCubeCorrectionStage* fixes[3];

}
+(int)prewarmShaders:(id)arg1 ;
-(id)init:(id)arg1 ;
-(int)runOnLuma:(id)arg1 andChroma:(id)arg2 outChroma:(id)arg3 colorCubeFixType:(int)arg4 ;
@end

