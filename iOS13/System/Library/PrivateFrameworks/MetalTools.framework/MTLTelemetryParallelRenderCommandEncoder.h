/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsParallelRenderCommandEncoder.h>

@class MTLTelemetryDevice, MTLTelemetryCommandBuffer, MTLRenderPassDescriptor;

@interface MTLTelemetryParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder {

	MTLTelemetryDevice* _telemetryDevice;
	MTLTelemetryCommandBuffer* _telemetryCommandBuffer;
	MTLRenderPassDescriptor* _descriptor;
	unsigned _encoderCount;

}
-(void)endEncoding;
-(id)renderCommandEncoder;
-(id)initWithBaseRenderPass:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3 ;
@end

