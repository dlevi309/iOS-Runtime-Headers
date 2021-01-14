/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MTLStageInputOutputDescriptor, MTLPipelineBufferDescriptorArray, NSArray, MTLLinkedFunctions;

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
@property (nonatomic,copy) NSArray * insertLibraries; 
@property (nonatomic,copy) NSArray * binaryArchives; 
@property (nonatomic,copy) MTLLinkedFunctions * linkedFunctions; 
@property (assign,nonatomic) BOOL supportAddingBinaryFunctions; 
@property (assign,nonatomic) unsigned long long maxCallStackDepth; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

