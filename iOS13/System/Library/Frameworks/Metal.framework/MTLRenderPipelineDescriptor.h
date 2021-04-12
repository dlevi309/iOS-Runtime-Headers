/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MTLVertexDescriptor, MTLRenderPipelineColorAttachmentDescriptorArray, MTLPipelineBufferDescriptorArray;

@interface MTLRenderPipelineDescriptor : NSObject <NSCopying>

@property (nonatomic,copy) NSString * label; 
@property (nonatomic,retain) id<MTLFunction> vertexFunction; 
@property (nonatomic,retain) id<MTLFunction> fragmentFunction; 
@property (nonatomic,copy) MTLVertexDescriptor * vertexDescriptor; 
@property (assign,nonatomic) unsigned long long sampleCount; 
@property (assign,nonatomic) unsigned long long rasterSampleCount; 
@property (assign,getter=isAlphaToCoverageEnabled,nonatomic) BOOL alphaToCoverageEnabled; 
@property (assign,getter=isAlphaToOneEnabled,nonatomic) BOOL alphaToOneEnabled; 
@property (assign,getter=isRasterizationEnabled,nonatomic) BOOL rasterizationEnabled; 
@property (assign,nonatomic) unsigned long long maxVertexAmplificationCount; 
@property (readonly) MTLRenderPipelineColorAttachmentDescriptorArray * colorAttachments; 
@property (assign,nonatomic) unsigned long long depthAttachmentPixelFormat; 
@property (assign,nonatomic) unsigned long long stencilAttachmentPixelFormat; 
@property (assign,nonatomic) unsigned long long inputPrimitiveTopology; 
@property (assign,nonatomic) unsigned long long tessellationPartitionMode; 
@property (assign,nonatomic) unsigned long long maxTessellationFactor; 
@property (assign,getter=isTessellationFactorScaleEnabled,nonatomic) BOOL tessellationFactorScaleEnabled; 
@property (assign,nonatomic) unsigned long long tessellationFactorFormat; 
@property (assign,nonatomic) unsigned long long tessellationControlPointIndexType; 
@property (assign,nonatomic) unsigned long long tessellationFactorStepFunction; 
@property (assign,nonatomic) unsigned long long tessellationOutputWindingOrder; 
@property (readonly) MTLPipelineBufferDescriptorArray * vertexBuffers; 
@property (readonly) MTLPipelineBufferDescriptorArray * fragmentBuffers; 
@property (assign,nonatomic) BOOL supportIndirectCommandBuffers; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
@end

