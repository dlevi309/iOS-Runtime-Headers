/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsComputePipelineState.h>

@class MTLTelemetryDevice;

@interface MTLTelemetryComputePipelineState : MTLToolsComputePipelineState {

	unsigned uniqueID;
	MTLTelemetryDevice* device;

}
+(unsigned)generateUniqueID;
-(id)initWithComputePipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4 ;
-(void)accumulateUsage;
@end

