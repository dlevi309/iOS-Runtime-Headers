/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PVColorSpace;

@interface PVVideoCompositingContext : NSObject <NSSecureCoding> {

	BOOL concatenationFlag;
	BOOL renderStatsFlag;
	BOOL textureBorder;
	BOOL dynamicPlayback;
	BOOL powerFriendlyExport;
	int renderDevice;
	int gpuRenderAPI;
	int numCPUThreads;
	int bufferFormat;
	int filterMode;
	int renderGraphDumpLevel;
	int renderStatsWarmUp;
	int renderStatsMaxVals;
	int dotGraphLevel;
	int tileSize;
	int shaderFormat;
	int traceGLLevel;
	int traceMetalLevel;
	int signPostLevel;
	int pageSize;
	int instructionGraphDumpLevel;
	int instructionGraphDotTreeLevel;
	int perfStatsLogLevel;
	int pmrLevel;
	int workingColorSpaceConformIntent;
	int conformColorSpacesToDestinationBufferSpace;
	PVColorSpace* outputColorSpace;
	PVColorSpace* _workingColorSpace;

}

@property (assign) int gpuRenderAPI; 
@property (assign) int numCPUThreads; 
@property (assign) int bufferFormat; 
@property (assign) int shaderFormat; 
@property (assign) int filterMode; 
@property (assign) BOOL concatenationFlag; 
@property (assign) int tileSize; 
@property (assign) int pageSize; 
@property (assign) BOOL textureBorder; 
@property (assign) BOOL dynamicPlayback; 
@property (assign) int renderGraphDumpLevel; 
@property (assign) BOOL renderStatsFlag; 
@property (assign) int renderStatsWarmUp; 
@property (assign) int renderStatsMaxVals; 
@property (assign) int dotGraphLevel; 
@property (assign) int traceGLLevel; 
@property (assign,nonatomic) int traceMetalLevel; 
@property (assign,nonatomic) int signPostLevel; 
@property (assign,nonatomic) int instructionGraphDumpLevel; 
@property (assign,nonatomic) int instructionGraphDotTreeLevel; 
@property (assign,nonatomic) int pmrLevel; 
@property (assign,nonatomic) int perfStatsLogLevel; 
@property (assign,nonatomic) int renderDevice; 
@property (assign,nonatomic) BOOL powerFriendlyExport; 
@property (assign,nonatomic) int conformColorSpacesToDestinationBufferSpace; 
@property (assign,nonatomic) int workingColorSpaceConformIntent; 
@property (nonatomic,retain) PVColorSpace * workingColorSpace;                            //@synthesize workingColorSpace=_workingColorSpace - In the implementation block
@property (nonatomic,retain) PVColorSpace * outputColorSpace; 
+(BOOL)supportsSecureCoding;
+(void)setColorSpaceDefaultsForDeviceClass;
+(id)createContextForGPU;
+(void)setWorkingColorSpace:(id)arg1 outputColorSpace:(id)arg2 workingSpaceConformIntent:(int)arg3 ;
+(id)dotGraphLoggingDirectory;
+(id)createContextForCPU;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setContext:(id)arg1 ;
-(PVColorSpace *)workingColorSpace;
-(id)initWithDevice:(int)arg1 ;
-(void)setTileSize:(int)arg1 ;
-(int)tileSize;
-(int)pageSize;
-(void)setPageSize:(int)arg1 ;
-(int)filterMode;
-(void)setFilterMode:(int)arg1 ;
-(void)setConformColorSpacesToDestinationBufferSpace:(int)arg1 ;
-(PVColorSpace *)outputColorSpace;
-(int)renderGraphDumpLevel;
-(int)renderDevice;
-(int)dotGraphLevel;
-(int)bufferFormat;
-(int)gpuRenderAPI;
-(int)shaderFormat;
-(BOOL)concatenationFlag;
-(int)numCPUThreads;
-(int)traceGLLevel;
-(BOOL)textureBorder;
-(int)workingColorSpaceConformIntent;
-(int)conformColorSpacesToDestinationBufferSpace;
-(int)instructionGraphDotTreeLevel;
-(void)setWorkingColorSpaceConformIntent:(int)arg1 ;
-(void)setWorkingColorSpace:(PVColorSpace *)arg1 ;
-(void)setOutputColorSpace:(PVColorSpace *)arg1 ;
-(void)setIntermediateBufferFormatForWorkingColorSpace;
-(void)setBufferFormat:(int)arg1 ;
-(BOOL)powerFriendlyExport;
-(void)setRenderDevice:(int)arg1 ;
-(void)setGpuRenderAPI:(int)arg1 ;
-(void)setShaderFormat:(int)arg1 ;
-(void)setConcatenationFlag:(BOOL)arg1 ;
-(void)setRenderGraphDumpLevel:(int)arg1 ;
-(void)setDotGraphLevel:(int)arg1 ;
-(void)setNumCPUThreads:(int)arg1 ;
-(void)setTextureBorder:(BOOL)arg1 ;
-(void)setDynamicPlayback:(BOOL)arg1 ;
-(void)setSignPostLevel:(int)arg1 ;
-(void)setTraceGLLevel:(int)arg1 ;
-(void)setTraceMetalLevel:(int)arg1 ;
-(void)setInstructionGraphDumpLevel:(int)arg1 ;
-(void)setInstructionGraphDotTreeLevel:(int)arg1 ;
-(void)setPerfStatsLogLevel:(int)arg1 ;
-(void)setPmrLevel:(int)arg1 ;
-(void)setPowerFriendlyExport:(BOOL)arg1 ;
-(BOOL)dynamicPlayback;
-(BOOL)renderStatsFlag;
-(void)setRenderStatsFlag:(BOOL)arg1 ;
-(int)renderStatsWarmUp;
-(void)setRenderStatsWarmUp:(int)arg1 ;
-(int)renderStatsMaxVals;
-(void)setRenderStatsMaxVals:(int)arg1 ;
-(int)signPostLevel;
-(int)traceMetalLevel;
-(int)instructionGraphDumpLevel;
-(int)perfStatsLogLevel;
-(int)pmrLevel;
-(void)dumpContext;
@end

