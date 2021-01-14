/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLRenderPipelineStateSPI.h>

@class MTLDebugInstrumentationData, NSString;

@interface MTLToolsRenderPipelineState : MTLToolsObject <MTLRenderPipelineStateSPI>

@property (nonatomic,readonly) unsigned long long resourceIndex; 
@property (nonatomic,readonly) unsigned long long gpuAddress; 
@property (readonly) long long textureWriteRoundingMode; 
@property (readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,retain,readonly) MTLDebugInstrumentationData * vertexDebugInstrumentationData; 
@property (nonatomic,retain,readonly) MTLDebugInstrumentationData * fragmentDebugInstrumentationData; 
@property (nonatomic,retain,readonly) MTLDebugInstrumentationData * tileDebugInstrumentationData; 
@property (readonly) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (readonly) BOOL threadgroupSizeMatchesTileSize; 
@property (readonly) unsigned long long imageblockSampleLength; 
@property (readonly) BOOL supportIndirectCommandBuffers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)supportIndirectCommandBuffers;
-(long long)textureWriteRoundingMode;
-(unsigned long long)resourceIndex;
-(unsigned long long)uniqueIdentifier;
-(unsigned)getFragmentShaderTelemetryID;
-(id<MTLDevice>)device;
-(unsigned long long)gpuAddress;
-(unsigned long long)imageblockSampleLength;
-(BOOL)threadgroupSizeMatchesTileSize;
-(MTLDebugInstrumentationData *)vertexDebugInstrumentationData;
-(unsigned)getVertexShaderTelemetryID;
-(MTLDebugInstrumentationData *)tileDebugInstrumentationData;
-(unsigned long long)imageblockMemoryLengthForDimensions:(SCD_Struct_MT0)arg1 ;
-(NSString *)label;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(MTLDebugInstrumentationData *)fragmentDebugInstrumentationData;
-(void)dealloc;
-(id)newVertexShaderDebugInfo;
-(id)newFragmentShaderDebugInfo;
@end

