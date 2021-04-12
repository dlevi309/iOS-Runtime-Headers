/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsIndirectCommandBuffer.h>

@protocol MTLIndirectCommandBuffer;
@class NSMutableArray, MTLIndirectCommandBufferDescriptor;

@interface MTLDebugIndirectCommandBuffer : MTLToolsIndirectCommandBuffer {

	NSMutableArray* _optimizedRangeList;
	MTLIndirectCommandBufferDescriptor* _desc;
	unsigned long long _maxCommandCount;
	id<MTLIndirectCommandBuffer> _iCB;
	BOOL isRender;

}

@property (readonly) NSMutableArray * optimizedRangeList; 
@property (readonly) MTLIndirectCommandBufferDescriptor * descriptor; 
-(void)dealloc;
-(MTLIndirectCommandBufferDescriptor *)descriptor;
-(id)indirectRenderCommandAtIndex:(unsigned long long)arg1 ;
-(id)indirectComputeCommandAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)optimizedRangeList;
-(id)initWithIndirectCommandBuffer:(id)arg1 device:(id)arg2 descriptor:(id)arg3 maxCommandCount:(unsigned long long)arg4 options:(unsigned long long)arg5 ;
@end

