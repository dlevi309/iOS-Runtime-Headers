/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLIndirectCommandBufferDescriptor : NSObject <NSCopying> {

	MTLIndirectCommandBufferDescriptorState _state;

}

@property (assign,nonatomic) unsigned long long resourceIndex; 
@property (assign,nonatomic) unsigned long long commandTypes; 
@property (assign,nonatomic) BOOL inheritPipelineState; 
@property (assign,nonatomic) BOOL inheritBuffers; 
@property (assign,nonatomic) unsigned long long maxVertexBufferBindCount; 
@property (assign,nonatomic) unsigned long long maxFragmentBufferBindCount; 
@property (assign,nonatomic) unsigned long long maxKernelBufferBindCount; 
-(unsigned long long)resourceIndex;
-(id)init;
-(void)setCommandTypes:(unsigned long long)arg1 ;
-(void)setInheritPipelineState:(BOOL)arg1 ;
-(void)setInheritBuffers:(BOOL)arg1 ;
-(void)setMaxVertexBufferBindCount:(unsigned long long)arg1 ;
-(void)setMaxFragmentBufferBindCount:(unsigned long long)arg1 ;
-(void)setMaxKernelBufferBindCount:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(void)setResourceIndex:(unsigned long long)arg1 ;
-(unsigned long long)commandTypes;
-(BOOL)inheritBuffers;
-(BOOL)inheritPipelineState;
-(unsigned long long)maxFragmentBufferBindCount;
-(unsigned long long)maxVertexBufferBindCount;
-(unsigned long long)maxKernelBufferBindCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

