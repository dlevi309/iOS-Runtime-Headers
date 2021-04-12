/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLRenderPipelineStateSPI.h>

@class MTLDebugInstrumentationData, NSString;

@interface MTLToolsRenderPipelineState : MTLToolsObject <MTLRenderPipelineStateSPI>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (readonly) BOOL threadgroupSizeMatchesTileSize; 
@property (readonly) unsigned long long imageblockSampleLength; 
@property (readonly) BOOL supportIndirectCommandBuffers; 
@property (assign,nonatomic) unsigned long long resourceIndex; 
@property (readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,retain,readonly) MTLDebugInstrumentationData * vertexDebugInstrumentationData; 
@property (nonatomic,retain,readonly) MTLDebugInstrumentationData * fragmentDebugInstrumentationData; 
-(void)dealloc;
-(unsigned long long)uniqueIdentifier;
-(id<MTLDevice>)device;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(NSString *)label;
-(unsigned long long)imageblockSampleLength;
-(unsigned long long)imageblockMemoryLengthForDimensions:(SCD_Struct_MT0)arg1 ;
-(BOOL)supportIndirectCommandBuffers;
-(unsigned long long)resourceIndex;
-(BOOL)threadgroupSizeMatchesTileSize;
-(unsigned)getVertexShaderTelemetryID;
-(unsigned)getFragmentShaderTelemetryID;
-(MTLDebugInstrumentationData *)vertexDebugInstrumentationData;
-(MTLDebugInstrumentationData *)fragmentDebugInstrumentationData;
-(id)newVertexShaderDebugInfo;
-(id)newFragmentShaderDebugInfo;
-(void)acceptVisitor:(id)arg1 ;
@end

