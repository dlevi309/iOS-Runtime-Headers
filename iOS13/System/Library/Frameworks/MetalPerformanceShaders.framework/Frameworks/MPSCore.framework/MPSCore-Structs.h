/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/


@class <MTLDevice>, MPSCommandBufferImageCache, MTLTextureDescriptor, <MTLBuffer>;

typedef struct _NSZone* NSZoneRef;

typedef struct _cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > {
	Av __a_value;
} cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> >;

typedef struct {
	unsigned long long size;
	unsigned long long align;
} SCD_Struct_MP2;

typedef struct atomic<void *> {
	cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > __a_;
} atomic<void *>;

typedef struct MPSAutoBuffer {
	atomic<void *> _buffer;
	unsigned long long _requestedSize;
	<MTLDevice>* _device;
	MPSCommandBufferImageCache* _cache;
	SCD_Struct_MP2 _resourceSize;
} MPSAutoBuffer;

typedef struct _cxx_atomic_impl<long, std::__1::__cxx_atomic_base_impl<long> > {
	Aq __a_value;
} cxx_atomic_impl<long, std::__1::__cxx_atomic_base_impl<long> >;

typedef struct atomic<long> {
	cxx_atomic_impl<long, std::__1::__cxx_atomic_base_impl<long> > __a_;
} atomic<long>;

typedef struct MPSPixelInfo {
	unsigned pixelFormat : 10;
	unsigned chunkSize : 6;
	unsigned chunkWidth : 4;
	unsigned chunkHeight : 4;
	unsigned pixelStyle : 4;
	unsigned colorModel : 4;
	unsigned bitDepth : 8;
	unsigned isSigned : 1;
	unsigned isClamped : 1;
	unsigned isInteger : 1;
	unsigned canFilter : 1;
	unsigned canRender : 1;
	unsigned canWrite : 1;
	unsigned canMultisample : 1;
	unsigned isSupported : 1;
	unsigned isCompressed : 1;
	unsigned chunkSizePlane2 : 6;
	unsigned log2MinAlignment : 4;
	unsigned featureChannelFormat : 3;
	unsigned _padding : 2;
} MPSPixelInfo;

typedef struct _cxx_atomic_impl<id<MTLTexture>, std::__1::__cxx_atomic_base_impl<id<MTLTexture> > > {
	A@ __a_value;
} cxx_atomic_impl<id<MTLTexture>, std::__1::__cxx_atomic_base_impl<id<MTLTexture> > >;

typedef struct {
	MPSCommandBufferImageCache* cache;
} SCD_Struct_MP9;

typedef struct {
	MPSDevice device;
} SCD_Struct_MP10;

typedef struct {
	MTLTextureDescriptor* _descriptor;
	/*function pointer*/void* ;
	SCD_Struct_MP10 _tex;
	SCD_Struct_MP9) _temporary;
} SCD_Struct_MP11;

typedef struct {
	MPSAutoTexture parent;
	unsigned subRangeStart;
	unsigned subRangeSize;
} SCD_Struct_MP12;

typedef struct atomic<id<MTLTexture> > {
	cxx_atomic_impl<id<MTLTexture>, std::__1::__cxx_atomic_base_impl<id<MTLTexture> > > __a_;
} atomic<id<MTLTexture> >;

typedef struct MPSAutoTexture {
	atomic<id<MTLTexture> > _texture;
	SCD_Struct_MP2 _resourceSize;
	unsigned long long _rowBytes;
	MPSPixelInfo _pixelInfo;
	/*function pointer*/void* ;
	SCD_Struct_MP12 _subTex;
	SCD_Struct_MP11) ;
	unsigned char _type;
	unsigned char _twiddled;
} MPSAutoTexture;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
} SCD_Struct_MP15;

typedef struct {
	SCD_Struct_MP15 field1;
	SCD_Struct_MP15 field2;
} SCD_Struct_MP16;

typedef struct {
	unsigned mpsKernelVersion : 8;
	unsigned intermediateObjectVersion : 8;
	unsigned version : 16;
} SCD_Struct_MP17;

typedef union {
	unsigned bits;
	SCD_Struct_MP17 field2;
} SCD_Union_MP18;

typedef struct UserBufferBindingData_s {
	<MTLBuffer>* userBoundBuffer;
	BOOL userBoundBuffer_set;
	void userBoundBytes;
	unsigned long long userBoundBytes_length;
	BOOL userBoundBytes_set;
	unsigned long long userBoundOffset;
} UserBufferBindingData_s;

