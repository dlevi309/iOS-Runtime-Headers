/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsParallelRenderCommandEncoder.h>

@class MTLRenderPassDescriptor;

@interface MTLGPUDebugParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder {

	unsigned _encoderID;
	MTLRenderPassDescriptor* _descriptor;

}
-(void)dealloc;
-(id)renderCommandEncoder;
-(id)initWithParallelRenderCommandEncoder:(id)arg1 parent:(id)arg2 descriptor:(id)arg3 encoderID:(unsigned)arg4 ;
@end

