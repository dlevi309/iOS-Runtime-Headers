/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsIndirectCommandBuffer.h>
#import <libobjc.A.dylib/MTLDebugResourcePurgeable.h>

@protocol MTLIndirectCommandBuffer;
@class NSMutableArray, MTLIndirectCommandBufferDescriptor;

@interface MTLDebugIndirectCommandBuffer : MTLToolsIndirectCommandBuffer <MTLDebugResourcePurgeable> {

	NSMutableArray* _optimizedRangeList;
	MTLIndirectCommandBufferDescriptor* _desc;
	unsigned long long _maxCommandCount;
	id<MTLIndirectCommandBuffer> _iCB;
	BOOL _isRender;
	atomic<int> _purgeableStateToken;
	BOOL _purgeableStateHasBeenSet;

}

@property (readonly) NSMutableArray * optimizedRangeList; 
@property (readonly) MTLIndirectCommandBufferDescriptor * descriptor; 
-(MTLIndirectCommandBufferDescriptor *)descriptor;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(void)resetWithRange:(NSRange)arg1 ;
-(id)indirectRenderCommandAtIndex:(unsigned long long)arg1 ;
-(id)indirectComputeCommandAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)lockPurgeableState;
-(void)unlockPurgeableState;
-(BOOL)purgeableStateValidForRendering;
-(NSMutableArray *)optimizedRangeList;
-(id)initWithIndirectCommandBuffer:(id)arg1 device:(id)arg2 descriptor:(id)arg3 maxCommandCount:(unsigned long long)arg4 options:(unsigned long long)arg5 ;
@end

