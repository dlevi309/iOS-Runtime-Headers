/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

