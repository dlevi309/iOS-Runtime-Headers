/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLIndirectCommandBufferDescriptor.h>

@interface MTLIndirectCommandBufferDescriptorInternal : MTLIndirectCommandBufferDescriptor {

	unsigned long long _commandTypes;
	BOOL _inheritPipelineState;
	BOOL _inheritBuffers;
	unsigned long long _maxVertexBufferBindCount;
	unsigned long long _maxFragmentBufferBindCount;
	unsigned long long _maxKernelBufferBindCount;
	unsigned long long _resourceIndex;

}

@property (assign,nonatomic) unsigned long long resourceIndex;              //@synthesize resourceIndex=_resourceIndex - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)resourceIndex;
-(void)setResourceIndex:(unsigned long long)arg1 ;
-(unsigned long long)commandTypes;
-(BOOL)inheritBuffers;
-(BOOL)inheritPipelineState;
-(unsigned long long)maxFragmentBufferBindCount;
-(unsigned long long)maxVertexBufferBindCount;
-(unsigned long long)maxKernelBufferBindCount;
-(void)setCommandTypes:(unsigned long long)arg1 ;
-(void)setInheritPipelineState:(BOOL)arg1 ;
-(void)setInheritBuffers:(BOOL)arg1 ;
-(void)setMaxVertexBufferBindCount:(unsigned long long)arg1 ;
-(void)setMaxFragmentBufferBindCount:(unsigned long long)arg1 ;
-(void)setMaxKernelBufferBindCount:(unsigned long long)arg1 ;
@end

