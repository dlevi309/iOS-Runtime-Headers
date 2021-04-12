/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

