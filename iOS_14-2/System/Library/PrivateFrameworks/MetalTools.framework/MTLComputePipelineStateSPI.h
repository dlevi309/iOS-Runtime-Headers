/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

@class MTLDebugInstrumentationData;


@protocol MTLComputePipelineStateSPI <MTLComputePipelineState>
@property (readonly) long long textureWriteRoundingMode; 
@property (readonly) unsigned long long staticThreadgroupMemoryLength; 
@property (nonatomic,readonly) unsigned long long resourceIndex; 
@property (nonatomic,readonly) unsigned long long gpuAddress; 
@property (readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,retain,readonly) MTLDebugInstrumentationData * debugInstrumentationData; 
@optional
-(unsigned long long)resourceIndex;
-(unsigned long long)gpuAddress;

@required
-(long long)textureWriteRoundingMode;
-(id)functionPointerHandlesWithFunctions:(id)arg1 range:(NSRange)arg2;
-(unsigned long long)uniqueIdentifier;
-(MTLDebugInstrumentationData *)debugInstrumentationData;
-(id)functionPointerHandleWithFunction:(id)arg1;
-(unsigned)getComputeKernelTelemetryID;
-(unsigned long long)staticThreadgroupMemoryLength;

@end

