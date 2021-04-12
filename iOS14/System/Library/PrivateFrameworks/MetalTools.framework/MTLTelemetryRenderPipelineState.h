/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

