/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

@class MTLDebugInstrumentationData;


@protocol MTLRenderPipelineStateSPI <MTLRenderPipelineState>
@property (assign,nonatomic) unsigned long long resourceIndex; 
@property (readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,retain,readonly) MTLDebugInstrumentationData * vertexDebugInstrumentationData; 
@property (nonatomic,retain,readonly) MTLDebugInstrumentationData * fragmentDebugInstrumentationData; 
@optional
-(unsigned long long)resourceIndex;
-(void)setResourceIndex:(unsigned long long)arg1;

@required
-(unsigned long long)uniqueIdentifier;
-(unsigned)getVertexShaderTelemetryID;
-(unsigned)getFragmentShaderTelemetryID;
-(MTLDebugInstrumentationData *)vertexDebugInstrumentationData;
-(MTLDebugInstrumentationData *)fragmentDebugInstrumentationData;
-(id)newVertexShaderDebugInfo;
-(id)newFragmentShaderDebugInfo;

@end

