/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@class MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal, NSString, <MTLFunction>, MTLPipelineBufferDescriptorArrayInternal, MTLIOAccelDeviceShmem, MTLIOAccelDeviceShmemPool, MTLIOAccelPooledResource, MTLIOAccelResourcePool, MTLIOAccelBuffer, MTLIOAccelDevice<MTLDevice>, MTLResourceAllocationInfo, MTLIOAccelHeap, MTLIOAccelResource, MTLResourceList, NSData, NSObject<OS_dispatch_data>, <MTLTextureImplementation>, MTLRenderPassColorAttachmentDescriptorArrayInternal, <MTLBuffer>, <MTLRasterizationRateMap>, MTLStageInputOutputDescriptor, NSDictionary, <MTLPipelineLibrary>, MTLRenderPipelineColorAttachmentDescriptorArrayInternal, MTLVertexDescriptorInternal, MTLIOAccelDevice, MTLResourceListPool, MTLStencilDescriptorInternal;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _NSZone* NSZoneRef;

typedef struct MTLTileRenderPipelineAttachmentDescriptorPrivate {
	/*function pointer*/void* ;
	os_unfair_lock_s ;
	os_unfair_lock_s) ;
} MTLTileRenderPipelineAttachmentDescriptorPrivate;

typedef struct MTLTileRenderPipelineDescriptorPrivate {
	MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal* attachments;
	/*function pointer*/void* ;
	unsigned long long sampleCount;
	Q) rasterSampleCount;
	NSString* label;
	<MTLFunction>* tileFunction;
	BOOL threadgroupSizeMatchesTileSize;
	unsigned long long paddingToRemove;
	unsigned long long colorSampleCount;
	MTLPipelineBufferDescriptorArrayInternal* tileBuffers;
	unsigned short maxTotalThreadsPerThreadgroup;
} MTLTileRenderPipelineDescriptorPrivate;

typedef struct MTLIndirectCommandBufferHeader {
	unsigned long long headerSize;
	unsigned commandTypes;
	BOOL inheritPipelineState;
	BOOL inheritBuffers;
	unsigned char maxVertexBufferBindCount;
	unsigned char maxFragmentBufferBindCount;
	unsigned char maxKernelBufferBindCount;
	unsigned long long size;
} MTLIndirectCommandBufferHeader;

typedef struct {
	MTLIOAccelDeviceShmem* tqe_next;
	id tqe_prev;
} SCD_Struct_MT5;

typedef struct MTLIOAccelDeviceShmemPrivate {
	MTLIOAccelDeviceShmemPool* pool;
	SCD_Struct_MT5 entry;
	unsigned long long time_added;
} MTLIOAccelDeviceShmemPrivate;

typedef struct {
	id field1;
	/*function pointer*/void* field2;
	id field3;
	/*function pointer*/void* field4;
	id field5;
	/*function pointer*/void* field6;
	id field7;
	/*function pointer*/void* field8;
} SCD_Struct_MT7;

typedef struct {
	MTLIOAccelPooledResource* tqe_next;
	id tqe_prev;
} SCD_Struct_MT8;

typedef struct MTLIOAccelResourcePrivate {
	MTLIOAccelResourcePool* pool;
	SCD_Struct_MT8 entry;
	unsigned long long time_added;
	unsigned pool_generation;
} MTLIOAccelResourcePrivate;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
} SCD_Struct_MT10;

typedef struct {
	unsigned long long width;
	unsigned long long height;
	unsigned long long depth;
} SCD_Struct_MT11;

typedef struct _compressed_pair<MTLRasterizationRateLayerDescriptor **, std::__1::allocator<MTLRasterizationRateLayerDescriptor *> > {
	id __value_;
} compressed_pair<MTLRasterizationRateLayerDescriptor **, std::__1::allocator<MTLRasterizationRateLayerDescriptor *> >;

typedef struct vector<MTLRasterizationRateLayerDescriptor *, std::__1::allocator<MTLRasterizationRateLayerDescriptor *> > {
	id __begin_;
	id __end_;
	compressed_pair<MTLRasterizationRateLayerDescriptor **, std::__1::allocator<MTLRasterizationRateLayerDescriptor *> > __end_cap_;
} vector<MTLRasterizationRateLayerDescriptor *, std::__1::allocator<MTLRasterizationRateLayerDescriptor *> >;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
} SCD_Struct_MT14;

typedef struct {
	float field1;
	float field2;
} SCD_Struct_MT15;

typedef struct MTLIOAccelResourceQueue {
	MTLIOAccelPooledResource* tqh_first;
	id tqh_last;
} MTLIOAccelResourceQueue;

typedef struct MTLIOAccelResourcePoolPrivate {
	MTLIOAccelResourceQueue volatileQueue;
	MTLIOAccelResourceQueue nonvolatileQueue;
	os_unfair_lock_s lock;
	int count;
} MTLIOAccelResourcePoolPrivate;

typedef struct {
	unsigned mutability : 2;
} SCD_Struct_MT18;

typedef struct {
	unsigned long long bits;
} SCD_Struct_MT19;

typedef struct MTLPipelineBufferDescriptorPrivate {
	/*function pointer*/void* ;
	SCD_Struct_MT18 ;
	SCD_Struct_MT19) ;
} MTLPipelineBufferDescriptorPrivate;

typedef struct _compressed_pair<const __CFString **, std::__1::allocator<const __CFString *> > {
	__CFString __value_;
} compressed_pair<const __CFString **, std::__1::allocator<const __CFString *> >;

typedef struct vector<const __CFString *, std::__1::allocator<const __CFString *> > {
	__CFString __begin_;
	__CFString __end_;
	compressed_pair<const __CFString **, std::__1::allocator<const __CFString *> > __end_cap_;
} vector<const __CFString *, std::__1::allocator<const __CFString *> >;

typedef struct _compressed_pair<MTLDebugLocation **, std::__1::allocator<MTLDebugLocation *> > {
	id __value_;
} compressed_pair<MTLDebugLocation **, std::__1::allocator<MTLDebugLocation *> >;

typedef struct vector<MTLDebugLocation *, std::__1::allocator<MTLDebugLocation *> > {
	id __begin_;
	id __end_;
	compressed_pair<MTLDebugLocation **, std::__1::allocator<MTLDebugLocation *> > __end_cap_;
} vector<MTLDebugLocation *, std::__1::allocator<MTLDebugLocation *> >;

typedef struct _compressed_pair<MTLDebugSubProgram **, std::__1::allocator<MTLDebugSubProgram *> > {
	id __value_;
} compressed_pair<MTLDebugSubProgram **, std::__1::allocator<MTLDebugSubProgram *> >;

typedef struct vector<MTLDebugSubProgram *, std::__1::allocator<MTLDebugSubProgram *> > {
	id __begin_;
	id __end_;
	compressed_pair<MTLDebugSubProgram **, std::__1::allocator<MTLDebugSubProgram *> > __end_cap_;
} vector<MTLDebugSubProgram *, std::__1::allocator<MTLDebugSubProgram *> >;

typedef struct MTLArgumentDescriptorPrivate {
	unsigned long long dataType;
	unsigned long long index;
	unsigned long long arrayLength;
	unsigned long long access;
	unsigned long long textureType;
	unsigned long long constantBlockAlignment;
} MTLArgumentDescriptorPrivate;

typedef struct {
	unsigned maxColorAttachments;
	unsigned maxVertexAttributes;
	unsigned maxVertexBuffers;
	unsigned maxVertexTextures;
	unsigned maxVertexSamplers;
	unsigned maxVertexInlineDataSize;
	unsigned maxInterpolants;
	unsigned maxFragmentBuffers;
	unsigned maxFragmentTextures;
	unsigned maxFragmentSamplers;
	unsigned maxFragmentInlineDataSize;
	unsigned maxComputeBuffers;
	unsigned maxComputeTextures;
	unsigned maxComputeSamplers;
	unsigned maxComputeInlineDataSize;
	unsigned maxComputeLocalMemorySizes;
	unsigned maxTotalComputeThreadsPerThreadgroup;
	unsigned maxComputeThreadgroupMemory;
	float maxLineWidth;
	float maxPointSize;
	unsigned maxVisibilityQueryOffset;
	unsigned padmaxBufferLength;
	unsigned minConstantBufferAlignmentBytes;
	unsigned minBufferNoCopyAlignmentBytes;
	unsigned maxTextureWidth1D;
	unsigned maxTextureWidth2D;
	unsigned maxTextureHeight2D;
	unsigned maxTextureWidth3D;
	unsigned maxTextureHeight3D;
	unsigned maxTextureDepth3D;
	unsigned maxTextureDimensionCube;
	unsigned maxTextureLayers;
	unsigned linearTextureAlignmentBytes;
	unsigned iosurfaceTextureAlignmentBytes;
	unsigned iosurfaceReadOnlyTextureAlignmentBytes;
	unsigned deviceLinearTextureAlignmentBytes;
	unsigned deviceLinearReadOnlyTextureAlignmentBytes;
	unsigned maxFunctionConstantIndices;
	unsigned maxComputeThreadgroupMemoryAlignmentBytes;
	unsigned maxInterpolatedComponents;
	unsigned maxTessellationFactor;
	unsigned maxIndirectBuffers;
	unsigned maxIndirectTextures;
	unsigned maxIndirectSamplers;
	unsigned maxIndirectSamplersPerDevice;
	unsigned maxViewportCount;
	unsigned maxCustomSamplePositions;
	unsigned maxVertexAmplificationFactor;
	unsigned maxVertexAmplificationCount;
	unsigned maxTextureBufferWidth;
	unsigned maxComputeAttributes;
	unsigned maxFramebufferStorageBits;
	unsigned linearTextureArrayAlignmentBytes;
	unsigned linearTextureArrayAlignmentSlice;
	unsigned maxTileBuffers;
	unsigned maxTileTextures;
	unsigned maxTileSamplers;
	unsigned maxTileInlineDataSize;
	unsigned minTilePixels;
	unsigned long long maxBufferLength;
} SCD_Struct_MT28;

typedef struct {
	BOOL field1;
	unsigned long long field2;
	/*function pointer*/void* field3;
} SCD_Struct_MT29;

typedef struct {
	SCD_Struct_MT11 field1;
	SCD_Struct_MT11 field2;
} SCD_Struct_MT30;

typedef struct {
	unsigned field1;
	unsigned field2;
} SCD_Struct_MT31;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 1;
	unsigned field6 : 1;
	unsigned field7 : 1;
	unsigned field8 : 1;
	unsigned field9 : 1;
	unsigned field10 : 55;
} SCD_Struct_MT32;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 60;
} SCD_Struct_MT33;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
} SCD_Struct_MT35;

typedef struct MTLTextureDescriptorPrivate {
	unsigned long long textureType;
	unsigned long long pixelFormat;
	unsigned long long width;
	unsigned long long height;
	unsigned long long depth;
	unsigned long long mipmapLevelCount;
	unsigned long long sampleCount;
	unsigned long long arrayLength;
	BOOL zeroFill;
	unsigned long long rotation;
	BOOL framebufferOnly;
	BOOL isDrawable;
	unsigned swizzle;
	BOOL writeSwizzleEnabled;
	unsigned long long compressionMode;
	/*function pointer*/void* ;
	unsigned long long textureUsage;
	Q) usage;
	unsigned long long resourceOptions;
	unsigned long long sparseSurfaceDefaultValue;
	BOOL allowGPUOptimizedContents;
	BOOL forceResourceIndex;
	unsigned resourceIndex;
	unsigned long long protectionOptions;
	unsigned long long resolvedUsage;
	unsigned long long cpuCacheMode;
	unsigned long long storageMode;
} MTLTextureDescriptorPrivate;

typedef struct __CFArray* CFArrayRef;

typedef struct __IOAccelDevice* IOAccelDeviceRef;

typedef struct __IOAccelShared* IOAccelSharedRef;

typedef struct {
	MTLIOAccelDeviceShmemPool* segmentListShmemPool;
	MTLIOAccelDeviceShmemPool* kernelCommandShmemPool;
	id hwResourcePools;
	unsigned hwResourcePoolCount;
	id akResourceListPool;
	 MTLResourceListPool;
	id akPrivateResourceListPool;
	 MTLResourceListPool;
} SCD_Struct_MT40;

typedef struct MTLRangeAllocator {
	MTLRangeAllocatorElement elements;
	unsigned numElements;
	unsigned long long capacity;
	unsigned long long capacityIncrement;
	unsigned long long defaultAlignmentMask;
} MTLRangeAllocator;

typedef struct MTLIOAccelBufferHeap {
	64MTLIOAccelBuffer* buffers;
	64MTLRangeAllocator allocators;
	64I allocations;
	unsigned count;
} MTLIOAccelBufferHeap;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct {
	unsigned field1 : 8;
	unsigned field2 : 24;
	unsigned field3;
	unsigned long long field4;
	unsigned long long field5;
} SCD_Struct_MT44;

typedef struct IOAccelResourceInfo {
	__IOSurface iosurface;
	unsigned resourceSize : 56;
	unsigned iosurfaceField : 8;
	unsigned resourceID;
} IOAccelResourceInfo;

typedef struct MTLIOAccelResource {
	/*function pointer*/void* vendor;
	unsigned long long reserved[4];
	IOAccelResourceInfo info;
	unsigned long long sharedAllocationUniqueId;
	unsigned long long cachedAllocationUniqueId;
	unsigned long long gpuAddress;
	MTLIOAccelDevice<MTLDevice>* device;
	NSString* label;
	unsigned long long globalTraceObjectID;
	unsigned long long labelTraceID;
	__IOAccelResource resourceRef;
	IOAccelClientSharedRO clientSharedRO;
	IOAccelClientSharedRW clientSharedRW;
	void virtualAddress;
	unsigned long long options;
	unsigned long long storageMode;
	unsigned long long cpuCacheMode;
	int responsibleProcess;
	unsigned long long purgeableState;
	BOOL purgeableAllowed;
	MTLResourceAllocationInfo* sharedAllocationInfo;
	MTLResourceAllocationInfo* cachedAllocationInfo;
	MTLIOAccelHeap* heap;
	MTLIOAccelResource* resource;
	unsigned long long offset;
	unsigned long long length;
	BOOL pinned;
	os_unfair_lock_s labelLock;
} MTLIOAccelResource;

typedef struct __IOAccelResource* IOAccelResourceRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFString* CFStringRef;

typedef struct resourceListQueue {
	MTLResourceList* tqh_first;
	id tqh_last;
} resourceListQueue;

typedef struct MTLResourceListPoolPrivate {
	const esourceListQueue queue;
	os_unfair_lock_s lock;
	int count;
} MTLResourceListPoolPrivate;

typedef struct __IOAccelCommandQueue* IOAccelCommandQueueRef;

typedef struct {
	unsigned minFilter : 2;
	unsigned magFilter : 2;
	unsigned mipFilter : 2;
	unsigned sAddressMode : 3;
	unsigned tAddressMode : 3;
	unsigned rAddressMode : 3;
	unsigned normalizedCoords : 1;
	unsigned lodAverage : 1;
	unsigned compareFunction : 3;
	unsigned supportArgumentBuffers : 1;
	unsigned forceResourceIndex : 1;
} SCD_Struct_MT53;

typedef struct MTLSamplerDescriptorPrivate {
	/*function pointer*/void* ;
	SCD_Struct_MT53 ;
	I) miscHash;
	/*function pointer*/void* ;
	unsigned lodMinClampHash;
	f) lodMinClamp;
	/*function pointer*/void* ;
	unsigned lodMaxClampHash;
	f) lodMaxClamp;
	/*function pointer*/void* ;
	unsigned lodBiasHash;
	f) lodBias;
	unsigned long long maxAnisotropy;
	NSString* label;
	unsigned resourceIndex;
} MTLSamplerDescriptorPrivate;

typedef struct {
	unsigned char field1[32];
} SCD_Struct_MT55;

typedef struct MTLFunctionData {
	unsigned long long bitCodeOffset;
	unsigned long long bitCodeFileSize;
	unsigned long long publicArgumentsOffset;
	unsigned long long privateArgumentsOffset;
	unsigned long long sourceArchiveOffset;
	unsigned short airMajorVersion;
	unsigned short airMinorVersion;
	unsigned short languageMajorVersion;
	unsigned short languageMinorVersion;
	SCD_Struct_MT55 bitcodeHash;
	unsigned char bitcodeType;
	NSData* pluginData;
	unsigned char renderTargetArrayIndexType;
	unsigned patchType : 2;
	unsigned controlPointCount : 6;
	NSObject<OS_dispatch_data>* functionInputs;
} MTLFunctionData;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
} SCD_Struct_MT57;

typedef struct {
	double red;
	double green;
	double blue;
	double alpha;
} SCD_Struct_MT58;

typedef struct MTLRenderPassAttachmentDescriptorPrivate {
	<MTLTextureImplementation>* texture;
	unsigned long long level;
	unsigned long long slice;
	unsigned long long depthPlane;
	unsigned long long loadAction;
	unsigned long long storeAction;
	unsigned long long storeActionOptions;
	SCD_Struct_MT58 clearColor;
	double clearDepth;
	unsigned clearStencil;
	unsigned long long stencilResolveFilter;
	<MTLTextureImplementation>* resolveTexture;
	unsigned long long resolveLevel;
	unsigned long long resolveSlice;
	unsigned long long resolveDepthPlane;
	unsigned long long resolveFilter;
	unsigned long long width;
	unsigned long long height;
	BOOL yInvert;
} MTLRenderPassAttachmentDescriptorPrivate;

typedef struct {
	float x;
	float y;
} SCD_Struct_MT60;

typedef struct MTLRenderPassDescriptorPrivate {
	MTLRenderPassColorAttachmentDescriptorArrayInternal* attachments;
	<MTLBuffer>* visibilityResultBuffer;
	unsigned long long renderTargetWidth;
	unsigned long long renderTargetHeight;
	unsigned long long defaultColorSampleCount;
	BOOL fineGrainedBackgroundVisibilityEnabled;
	BOOL ditherEnabled;
	BOOL openGLModeEnabled;
	unsigned long long renderTargetArrayLength;
	unsigned long long tileWidth;
	unsigned long long tileHeight;
	/*function pointer*/void* ;
	unsigned long long defaultSampleCount;
	Q) defaultRasterSampleCount;
	unsigned long long imageBlockSampleLength;
	unsigned long long threadgroupMemoryLength;
	SCD_Struct_MT60 customSamplePositions[4];
	unsigned long long numCustomSamplePositions;
	<MTLRasterizationRateMap>* rasterizationRateMap;
} MTLRenderPassDescriptorPrivate;

typedef struct MTLComputePipelineDescriptorPrivate {
	NSString* label;
	<MTLFunction>* computeFunction;
	BOOL threadGroupSizeIsMultipleOfThreadExecutionWidth;
	unsigned short maxTotalThreadsPerThreadgroup;
	MTLStageInputOutputDescriptor* stageInputDescriptor;
	NSDictionary* driverCompilerOptions;
	MTLPipelineBufferDescriptorArrayInternal* buffers;
	<MTLPipelineLibrary>* pipelineLibrary;
	BOOL supportIndirectCommandBuffers;
	BOOL forceResourceIndex;
	unsigned resourceIndex;
	void pad0;
} MTLComputePipelineDescriptorPrivate;

typedef struct {
	unsigned blendingEnabled : 1;
	unsigned rgbBlendOperation : 3;
	unsigned alphaBlendOperation : 3;
	unsigned sourceRGBBlendFactor : 5;
	unsigned sourceAlphaBlendFactor : 5;
	unsigned destinationRGBBlendFactor : 5;
	unsigned destinationAlphaBlendFactor : 5;
	unsigned writeMask : 4;
	unsigned logicOpEnabled : 1;
	unsigned logicOp : 4;
	unsigned pixelFormat : 28;
} SCD_Struct_MT63;

typedef struct MTLRenderPipelineAttachmentDescriptorPrivate {
	/*function pointer*/void* ;
	SCD_Struct_MT63 ;
	SCD_Struct_MT19) ;
} MTLRenderPipelineAttachmentDescriptorPrivate;

typedef struct {
	unsigned alphaToCoverageEnabled : 1;
	unsigned alphaToOneEnabled : 1;
	unsigned rasterizationEnabled : 1;
	unsigned inputPrimitiveTopology : 2;
	unsigned vertexEnabled : 1;
	unsigned depthStencilWriteDisabled : 1;
	unsigned openGLMode : 1;
	unsigned sampleCoverageInvert : 1;
	unsigned private4 : 1;
	unsigned vertexAmplificationMode : 1;
	unsigned twoSideEnabled : 1;
	unsigned pointSizeOutputVS : 1;
	unsigned pointCoordLowerLeft : 1;
	unsigned pointSmoothEnabled : 1;
	unsigned clipDistanceEnableMask : 8;
	unsigned alphaTestFunc : 3;
	unsigned alphaTestEnabled : 1;
	unsigned logicOp : 4;
	unsigned logicOpEnabled : 1;
	unsigned forceResourceIndex : 1;
	unsigned forceSoftwareVertexFetch : 1;
} SCD_Struct_MT65;

typedef struct MTLRenderPipelineDescriptorPrivate {
	MTLRenderPipelineColorAttachmentDescriptorArrayInternal* attachments;
	unsigned long long rtBlendDescHash[8];
	unsigned long long depthAttachmentPixelFormat;
	unsigned long long stencilAttachmentPixelFormat;
	unsigned long long tessellationPartitionMode;
	unsigned long long maxTessellationFactor;
	BOOL tessellationFactorScaleEnabled;
	unsigned long long tessellationFactorFormat;
	unsigned long long tessellationControlPointIndexType;
	unsigned long long tessellationFactorStepFunction;
	unsigned long long tessellationOutputWindingOrder;
	unsigned long long postVertexDumpBufferIndex;
	BOOL supportIndirectCommandBuffers;
	/*function pointer*/void* ;
	unsigned long long sampleCount;
	Q) rasterSampleCount;
	unsigned long long sampleMask;
	/*function pointer*/void* ;
	unsigned sampleCoverageHash;
	f) sampleCoverage;
	unsigned long long paddingToRemove;
	unsigned long long colorSampleCount;
	/*function pointer*/void* ;
	unsigned miscHash[2];
	SCD_Struct_MT65) ;
	unsigned vertexDepthCompareClampMask;
	unsigned fragmentDepthCompareClampMask;
	unsigned long long resourceIndex;
	NSString* label;
	<MTLFunction>* vertexFunction;
	<MTLFunction>* fragmentFunction;
	MTLVertexDescriptorInternal* vertexDescriptor;
	MTLPipelineBufferDescriptorArrayInternal* vertexBuffers;
	MTLPipelineBufferDescriptorArrayInternal* fragmentBuffers;
	NSDictionary* driverCompilerOptions;
	<MTLPipelineLibrary>* pipelineLibrary;
	void pad0;
	void pad1;
	unsigned maxVertexAmplificationCount;
} MTLRenderPipelineDescriptorPrivate;

typedef struct shmemPoolQueue {
	MTLIOAccelDeviceShmem* tqh_first;
	id tqh_last;
} shmemPoolQueue;

typedef struct MTLIOAccelDeviceShmemPoolPrivate {
	shmemPoolQueue queue;
	os_unfair_lock_s lock;
	int count;
	Class shmemClass;
	MTLIOAccelDevice* device;
	unsigned shmemSize;
} MTLIOAccelDeviceShmemPoolPrivate;

typedef struct {
	unsigned short buckets[64];
	unsigned numEntries;
	unsigned capacity;
	MTLResourceListEntry entries;
	MTLResourceListPool* pool;
	const esourceListQueue entry;
	unsigned long long time_added;
} SCD_Struct_MT69;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct MTLStencilDescriptorPrivate {
	unsigned long long stencilCompareFunction;
	unsigned long long stencilFailureOperation;
	unsigned long long depthFailureOperation;
	unsigned long long depthStencilPassOperation;
	unsigned readMask;
	unsigned writeMask;
} MTLStencilDescriptorPrivate;

typedef struct MTLDepthStencilDescriptorPrivate {
	MTLStencilDescriptorInternal* frontFaceStencil;
	MTLStencilDescriptorInternal* backFaceStencil;
	unsigned long long depthCompareFunction;
	BOOL depthWriteEnabled;
	NSString* label;
} MTLDepthStencilDescriptorPrivate;

typedef struct opaque_pthread_cond_t {
	long long __sig;
	char __opaque[40];
} opaque_pthread_cond_t;

typedef struct {
	NSString* name;
	long long requirement;
	BOOL supported;
} SCD_Struct_MT74;

