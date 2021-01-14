/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
*/

#import <IOGPU/IOGPU-Structs.h>
#import <IOGPU/IOGPUMetalResource.h>

@protocol MTLIndirectComputeCommandEncoder, MTLIndirectRenderCommandEncoder;
@class IOGPUMetalBuffer, MTLIndirectCommandBufferDescriptor;

@interface IOGPUMetalIndirectCommandBuffer : IOGPUMetalResource {

	IOGPUMetalBuffer* _privateICBuffer;
	unsigned long long _maxCommandCount;
	unsigned long long _commandBufferType;
	id<MTLIndirectComputeCommandEncoder> _privateIndirectComputeEncoder;
	id<MTLIndirectRenderCommandEncoder> _privateIndirectRenderEncoder;
	MTLIndirectCommandBufferDescriptor* _descriptor;
	MTLIndirectCommandBufferHeader _internalHeader;

}

@property (readonly) IOGPUMetalBuffer * privateICBuffer; 
@property (readonly) unsigned long long commandBufferType; 
@property (readonly) MTLIndirectCommandBufferDescriptor * descriptor; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long size; 
-(BOOL)isComplete;
-(BOOL)isAliasable;
-(void)makeAliasable;
-(void)waitUntilComplete;
-(unsigned long long)storageMode;
-(unsigned long long)size;
-(unsigned long long)uniqueIdentifier;
-(MTLIndirectCommandBufferDescriptor *)descriptor;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)resetWithRange:(NSRange)arg1 ;
-(BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasResource:(id)arg1 ;
-(id)initWithBuffer:(id)arg1 descriptor:(id)arg2 maxCommandCount:(unsigned long long)arg3 ;
-(void)getHeader:(void*)arg1 headerSize:(unsigned long long*)arg2 ;
-(id)indirectRenderCommandAtIndex:(unsigned long long)arg1 ;
-(id)indirectComputeCommandAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)commandBufferType;
-(IOGPUMetalBuffer *)privateICBuffer;
-(void)dealloc;
@end

