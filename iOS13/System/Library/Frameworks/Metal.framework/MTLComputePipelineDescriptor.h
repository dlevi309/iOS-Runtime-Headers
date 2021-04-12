/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MTLStageInputOutputDescriptor, MTLPipelineBufferDescriptorArray;

@interface MTLComputePipelineDescriptor : NSObject <NSCopying>

@property (assign,nonatomic) BOOL forceResourceIndex; 
@property (assign,nonatomic) unsigned long long resourceIndex; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,retain) id<MTLFunction> computeFunction; 
@property (assign,nonatomic) BOOL threadGroupSizeIsMultipleOfThreadExecutionWidth; 
@property (assign,nonatomic) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (nonatomic,copy) MTLStageInputOutputDescriptor * stageInputDescriptor; 
@property (readonly) MTLPipelineBufferDescriptorArray * buffers; 
@property (assign,nonatomic) BOOL supportIndirectCommandBuffers; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
@end

