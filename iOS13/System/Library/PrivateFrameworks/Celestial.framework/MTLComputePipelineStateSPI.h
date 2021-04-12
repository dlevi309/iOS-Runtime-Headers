/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

@class MTLDebugInstrumentationData;


@protocol MTLComputePipelineStateSPI <MTLComputePipelineState>
@property (readonly) unsigned long long staticThreadgroupMemoryLength; 
@property (assign,nonatomic) unsigned long long resourceIndex; 
@property (readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,retain,readonly) MTLDebugInstrumentationData * debugInstrumentationData; 
@optional
-(unsigned long long)resourceIndex;
-(void)setResourceIndex:(unsigned long long)arg1;

@required
-(unsigned long long)uniqueIdentifier;
-(unsigned long long)staticThreadgroupMemoryLength;
-(unsigned)getComputeKernelTelemetryID;
-(MTLDebugInstrumentationData *)debugInstrumentationData;

@end

