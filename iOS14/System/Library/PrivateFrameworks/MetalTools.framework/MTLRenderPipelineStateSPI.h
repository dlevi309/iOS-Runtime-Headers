/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

@class MTLDebugInstrumentationData;


@protocol MTLRenderPipelineStateSPI <MTLRenderPipelineState>
@property (nonatomic,readonly) unsigned long long resourceIndex; 
@property (nonatomic,readonly) unsigned long long gpuAddress; 
@property (readonly) long long textureWriteRoundingMode; 
@property (readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,retain,readonly) MTLDebugInstrumentationData * vertexDebugInstrumentationData; 
@property (nonatomic,retain,readonly) MTLDebugInstrumentationData * fragmentDebugInstrumentationData; 
@property (nonatomic,retain,readonly) MTLDebugInstrumentationData * tileDebugInstrumentationData; 
@optional
-(unsigned long long)resourceIndex;
-(unsigned long long)gpuAddress;

@required
-(long long)textureWriteRoundingMode;
-(unsigned long long)uniqueIdentifier;
-(unsigned)getFragmentShaderTelemetryID;
-(MTLDebugInstrumentationData *)vertexDebugInstrumentationData;
-(unsigned)getVertexShaderTelemetryID;
-(MTLDebugInstrumentationData *)tileDebugInstrumentationData;
-(MTLDebugInstrumentationData *)fragmentDebugInstrumentationData;
-(id)newVertexShaderDebugInfo;
-(id)newFragmentShaderDebugInfo;

@end

