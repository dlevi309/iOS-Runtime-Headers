/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsRenderPipelineState.h>

@class MTLTelemetryDevice, NSSet;

@interface MTLTelemetryRenderPipelineState : MTLToolsRenderPipelineState {

	unsigned uniqueID;
	MTLTelemetryDevice* device;
	BOOL hasAnisoConstantSampler;
	NSSet* activeFragmentSamplers;
	NSSet* activeFragmentTextures;

}
+(unsigned)generateUniqueID;
-(void)dealloc;
-(id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4 ;
-(void)accumulateUsage;
@end

