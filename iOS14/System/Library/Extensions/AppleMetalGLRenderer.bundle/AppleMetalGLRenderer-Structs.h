/*
* Generated on Thursday, January 14, 2021 at 2:29:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Extensions/AppleMetalGLRenderer.bundle/AppleMetalGLRenderer
*/


@class <MTLRenderPipelineStateSPI>;

typedef struct {
	unsigned fragmentUsesDiscard : 1;
	unsigned fragmentWritesSampleMask : 1;
	unsigned fragmentWritesDepth : 1;
	unsigned vertexRegisterSpill : 1;
	unsigned fragmentRegisterSpill : 1;
	unsigned fragmentReadsFramebufferValues : 1;
	unsigned fragmentPunchThrough : 1;
	unsigned vertexWritesPointSize : 1;
	unsigned private2 : 1;
	unsigned reserved : 55;
} SCD_Struct_GL0;

typedef struct {
	<MTLRenderPipelineStateSPI>* renderPipelineState;
	SCD_Struct_GL0 usageFlags;
} SCD_Struct_GL1;

