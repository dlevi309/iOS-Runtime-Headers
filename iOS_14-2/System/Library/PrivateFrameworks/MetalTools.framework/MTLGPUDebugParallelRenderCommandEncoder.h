/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsParallelRenderCommandEncoder.h>

@class MTLRenderPassDescriptor;

@interface MTLGPUDebugParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder {

	unsigned _encoderID;
	MTLRenderPassDescriptor* _descriptor;

}
-(id)renderCommandEncoder;
-(void)dealloc;
-(id)initWithParallelRenderCommandEncoder:(id)arg1 parent:(id)arg2 descriptor:(id)arg3 encoderID:(unsigned)arg4 ;
@end

