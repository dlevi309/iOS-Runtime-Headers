/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/_MTLIndirectArgumentBufferLayout.h>

@interface MTLEmulationIndirectArgumentBufferLayout : _MTLIndirectArgumentBufferLayout {

	unsigned long long _stride;
	unsigned long long _alignment;
	void* _bufferIndices;
	void* _textureIndices;
	void* _samplerIndices;
	void* _constantIndices;
	void* _constantOffsets;
	unsigned long long _bufferOffset;
	unsigned long long _textureOffset;
	unsigned long long _samplerOffset;

}

@property (nonatomic,readonly) unsigned long long stride;              //@synthesize stride=_stride - In the implementation block
-(void)dealloc;
-(unsigned long long)alignment;
-(unsigned)hashMask;
-(unsigned long long)encodedLength;
-(unsigned long long)stride;
-(void*)virtualAddressForBufferAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3 ;
-(unsigned long long)uniqueIdentifierForTextureAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3 ;
-(unsigned long long)uniqueIdentifierForSamplerAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3 ;
-(unsigned long long)uniqueIdentifierForRenderPipelineAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3 ;
-(unsigned long long)uniqueIdentifierForComputePipelineAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3 ;
-(BOOL)bufferLayoutMatchesFrontEndLayout;
-(unsigned)hashValue;
-(unsigned)hashOffset;
-(unsigned)hashSignature;
-(unsigned long long)constantOffsetAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)offsetForBuffer:(unsigned long long)arg1 ;
-(unsigned long long)offsetForTexture:(unsigned long long)arg1 ;
-(unsigned long long)offsetForSampler:(unsigned long long)arg1 ;
-(unsigned long long)offsetForConstant:(unsigned long long)arg1 ;
-(id)initWithStructType:(id)arg1 ;
@end

