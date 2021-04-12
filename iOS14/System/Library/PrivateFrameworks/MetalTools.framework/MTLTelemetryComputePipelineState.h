/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

