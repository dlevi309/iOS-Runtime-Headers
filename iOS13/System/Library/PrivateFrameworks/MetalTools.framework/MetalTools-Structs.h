/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/


@class <MTLBuffer>, <MTLDevice>, NSMutableArray, MTLRenderPassDepthAttachmentDescriptorInternal, MTLRenderPassStencilAttachmentDescriptorInternal;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
} SCD_Struct_MT0;

typedef struct MTLGPUDebugBufferArgumentData {
	BOOL needsFlush;
	<MTLBuffer>* buffers[31];
	unsigned long long offsets[31];
	unsigned lengths[31];
	unsigned long long gpu_address[31][2];
} MTLGPUDebugBufferArgumentData;

typedef struct {
	BOOL field1;
	BOOL field2;
	unsigned long long field3;
	id field4;
	unsigned long long field5;
	unsigned long long field6;
	unsigned long long field7;
	unsigned long long field8;
	unsigned long long field9;
	BOOL field10;
	float field11;
	float field12;
} SCD_Struct_MT2;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	double field5;
	double field6;
} SCD_Struct_MT3;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
	unsigned long long field4;
} SCD_Struct_MT4;

typedef struct {
	SCD_Struct_MT0 field1;
	SCD_Struct_MT0 field2;
} SCD_Struct_MT5;

typedef struct {
	unsigned field1;
	unsigned field2;
} SCD_Struct_MT6;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct {
	unsigned field1 : 8;
	unsigned field2 : 24;
	unsigned field3;
	unsigned long long field4;
	unsigned long long field5;
} SCD_Struct_MT8;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct _compressed_pair<id<MTLBuffer> *, std::__1::allocator<id<MTLBuffer> > > {
	id __value_;
} compressed_pair<id<MTLBuffer> *, std::__1::allocator<id<MTLBuffer> > >;

typedef struct _compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > {
	unsigned __value_;
} compressed_pair<unsigned int *, std::__1::allocator<unsigned int> >;

typedef struct vector<unsigned int, std::__1::allocator<unsigned int> > {
	unsigned __begin_;
	unsigned __end_;
	compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > __end_cap_;
} vector<unsigned int, std::__1::allocator<unsigned int> >;

typedef struct vector<id<MTLBuffer>, std::__1::allocator<id<MTLBuffer> > > {
	id __begin_;
	id __end_;
	compressed_pair<id<MTLBuffer> *, std::__1::allocator<id<MTLBuffer> > > __end_cap_;
} vector<id<MTLBuffer>, std::__1::allocator<id<MTLBuffer> > >;

typedef struct mutex {
	opaque_pthread_mutex_t __m_;
} mutex;

typedef struct MetalBufferHeap {
	mutex _mutex;
	vector<id<MTLBuffer>, std::__1::allocator<id<MTLBuffer> > > _buffers;
	vector<unsigned int, std::__1::allocator<unsigned int> > _freeList;
	int _currentFreeIndex;
	unsigned long long _totalMemoryAllocated;
	unsigned long long _totalMemoryInUse;
	<MTLDevice>* device;
	unsigned long long bufferLength;
} MetalBufferHeap;

typedef struct {
	unsigned char field1[32];
} SCD_Struct_MT16;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
} SCD_Struct_MT17;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
} SCD_Struct_MT18;

typedef struct {
	float field1;
	float field2;
} SCD_Struct_MT19;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct StreamBuffer {
	char* bytes;
	char* pWrite;
	char* pEnd;
} StreamBuffer;

typedef struct BinaryBuffer {
	/*function pointer*/void* _vptr$AppendBuffer;
	StreamBuffer stream;
} BinaryBuffer;

typedef struct AppendBuffer {
	/*function pointer*/void* _vptr$AppendBuffer;
	StreamBuffer stream;
} AppendBuffer;

typedef struct {
	unsigned long long field1[2];
} SCD_Struct_MT24;

typedef struct _compressed_pair<MetalBuffer *, std::__1::allocator<MetalBuffer> > {
	MetalBuffer __value_;
} compressed_pair<MetalBuffer *, std::__1::allocator<MetalBuffer> >;

typedef struct vector<MetalBuffer, std::__1::allocator<MetalBuffer> > {
	MetalBuffer __begin_;
	MetalBuffer __end_;
	compressed_pair<MetalBuffer *, std::__1::allocator<MetalBuffer> > __end_cap_;
} vector<MetalBuffer, std::__1::allocator<MetalBuffer> >;

typedef struct MetalBuffer {
	MetalBufferHeap heap;
	unsigned index;
} MetalBuffer;

typedef struct _compressed_pair<ReportBufferEntry *, std::__1::allocator<ReportBufferEntry> > {
	ReportBufferEntry __value_;
} compressed_pair<ReportBufferEntry *, std::__1::allocator<ReportBufferEntry> >;

typedef struct vector<ReportBufferEntry, std::__1::allocator<ReportBufferEntry> > {
	ReportBufferEntry __begin_;
	ReportBufferEntry __end_;
	compressed_pair<ReportBufferEntry *, std::__1::allocator<ReportBufferEntry> > __end_cap_;
} vector<ReportBufferEntry, std::__1::allocator<ReportBufferEntry> >;

typedef struct _compressed_pair<NSString **, std::__1::allocator<NSString *> > {
	id __value_;
} compressed_pair<NSString **, std::__1::allocator<NSString *> >;

typedef struct vector<NSString *, std::__1::allocator<NSString *> > {
	id __begin_;
	id __end_;
	compressed_pair<NSString **, std::__1::allocator<NSString *> > __end_cap_;
} vector<NSString *, std::__1::allocator<NSString *> >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::hash<void *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::hash<void *> >;

typedef struct _compressed_pair<float, std::__1::equal_to<void *> > {
	float __value_;
} compressed_pair<float, std::__1::equal_to<void *> >;

typedef struct _hash_node_base<std::__1::__hash_node<void *, void *> *> {
	__hash_node_base<std::__1::__hash_node<void *, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<void *, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *>, std::__1::allocator<std::__1::__hash_node<void *, void *> > > {
	hash_node_base<std::__1::__hash_node<void *, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *>, std::__1::allocator<std::__1::__hash_node<void *, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<void *, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *> *> > >;

typedef struct _hash_table<void *, std::__1::hash<void *>, std::__1::equal_to<void *>, std::__1::allocator<void *> > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<void *, void *> *>, std::__1::allocator<std::__1::__hash_node<void *, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::hash<void *> > __p2_;
	compressed_pair<float, std::__1::equal_to<void *> > __p3_;
} hash_table<void *, std::__1::hash<void *>, std::__1::equal_to<void *>, std::__1::allocator<void *> >;

typedef struct unordered_set<void *, std::__1::hash<void *>, std::__1::equal_to<void *>, std::__1::allocator<void *> > {
	hash_table<void *, std::__1::hash<void *>, std::__1::equal_to<void *>, std::__1::allocator<void *> > __table_;
} unordered_set<void *, std::__1::hash<void *>, std::__1::equal_to<void *>, std::__1::allocator<void *> >;

typedef struct _compressed_pair<id **, std::__1::allocator<id *> > {
	id __value_;
} compressed_pair<id **, std::__1::allocator<id *> >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<id> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<id> >;

typedef struct _split_buffer<id *, std::__1::allocator<id *> > {
	id __first_;
	id __begin_;
	id __end_;
	compressed_pair<id **, std::__1::allocator<id *> > __end_cap_;
} split_buffer<id *, std::__1::allocator<id *> >;

typedef struct deque<id, std::__1::allocator<id> > {
	split_buffer<id *, std::__1::allocator<id *> > __map_;
	unsigned long long __start_;
	compressed_pair<unsigned long, std::__1::allocator<id> > __size_;
} deque<id, std::__1::allocator<id> >;

typedef struct _compressed_pair<ILayerLockingPolicy *, std::__1::default_delete<ILayerLockingPolicy> > {
	ILayerLockingPolicy __value_;
} compressed_pair<ILayerLockingPolicy *, std::__1::default_delete<ILayerLockingPolicy> >;

typedef struct unique_ptr<ILayerLockingPolicy, std::__1::default_delete<ILayerLockingPolicy> > {
	compressed_pair<ILayerLockingPolicy *, std::__1::default_delete<ILayerLockingPolicy> > __ptr_;
} unique_ptr<ILayerLockingPolicy, std::__1::default_delete<ILayerLockingPolicy> >;

typedef struct _compressed_pair<std::__1::pair<MTLDebugSharedEvent *, unsigned long long> *, std::__1::allocator<std::__1::pair<MTLDebugSharedEvent *, unsigned long long> > > {
	pair<MTLDebugSharedEvent *, unsigned long long> __value_;
} compressed_pair<std::__1::pair<MTLDebugSharedEvent *, unsigned long long> *, std::__1::allocator<std::__1::pair<MTLDebugSharedEvent *, unsigned long long> > >;

typedef struct vector<std::__1::pair<MTLDebugSharedEvent *, unsigned long long>, std::__1::allocator<std::__1::pair<MTLDebugSharedEvent *, unsigned long long> > > {
	pair<MTLDebugSharedEvent *, unsigned long long> __begin_;
	pair<MTLDebugSharedEvent *, unsigned long long> __end_;
	compressed_pair<std::__1::pair<MTLDebugSharedEvent *, unsigned long long> *, std::__1::allocator<std::__1::pair<MTLDebugSharedEvent *, unsigned long long> > > __end_cap_;
} vector<std::__1::pair<MTLDebugSharedEvent *, unsigned long long>, std::__1::allocator<std::__1::pair<MTLDebugSharedEvent *, unsigned long long> > >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, AttachmentDescriptorSimple::hash_t> {
	unsigned long long __value_;
} compressed_pair<unsigned long, AttachmentDescriptorSimple::hash_t>;

typedef struct _compressed_pair<float, AttachmentDescriptorSimple::equal_t> {
	float __value_;
} compressed_pair<float, AttachmentDescriptorSimple::equal_t>;

typedef struct _hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> {
	__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *>, std::__1::allocator<std::__1::__hash_node<AttachmentDescriptorSimple, void *> > > {
	hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *>, std::__1::allocator<std::__1::__hash_node<AttachmentDescriptorSimple, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> *> > >;

typedef struct _hash_table<AttachmentDescriptorSimple, AttachmentDescriptorSimple::hash_t, AttachmentDescriptorSimple::equal_t, std::__1::allocator<AttachmentDescriptorSimple> > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<AttachmentDescriptorSimple, void *> *>, std::__1::allocator<std::__1::__hash_node<AttachmentDescriptorSimple, void *> > > __p1_;
	compressed_pair<unsigned long, AttachmentDescriptorSimple::hash_t> __p2_;
	compressed_pair<float, AttachmentDescriptorSimple::equal_t> __p3_;
} hash_table<AttachmentDescriptorSimple, AttachmentDescriptorSimple::hash_t, AttachmentDescriptorSimple::equal_t, std::__1::allocator<AttachmentDescriptorSimple> >;

typedef struct unordered_multiset<AttachmentDescriptorSimple, AttachmentDescriptorSimple::hash_t, AttachmentDescriptorSimple::equal_t, std::__1::allocator<AttachmentDescriptorSimple> > {
	hash_table<AttachmentDescriptorSimple, AttachmentDescriptorSimple::hash_t, AttachmentDescriptorSimple::equal_t, std::__1::allocator<AttachmentDescriptorSimple> > __table_;
} unordered_multiset<AttachmentDescriptorSimple, AttachmentDescriptorSimple::hash_t, AttachmentDescriptorSimple::equal_t, std::__1::allocator<AttachmentDescriptorSimple> >;

typedef struct AttachmentDescriptorSimple {
	void texture;
	unsigned long long level;
	NSRange sliceRange;
	NSRange depthPlaneRange;
	unsigned long long storeAction;
} AttachmentDescriptorSimple;

typedef struct array<AttachmentDescriptorSimple, 8> {
	AttachmentDescriptorSimple __elems_[8];
} array<AttachmentDescriptorSimple, 8>;

typedef struct {
	BOOL field1;
	unsigned long long field2;
	/*function pointer*/void* field3;
} SCD_Struct_MT62;

typedef struct {
	BOOL isValid;
	BOOL hasBeenUsed;
	unsigned long long type;
	id object;
	unsigned long long baseLevel;
	unsigned long long bufferLength;
	unsigned long long bufferOffset;
	unsigned long long threadgroupMemoryLength;
	unsigned long long threadgroupMemoryOffset;
	BOOL hasLodClamp;
	float lodMinClamp;
	float lodMaxClamp;
} SCD_Struct_MT63;

typedef struct {
	unsigned long long width;
	unsigned long long height;
	unsigned long long depth;
} SCD_Struct_MT64;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
	unsigned field7;
	unsigned field8;
	unsigned field9;
	unsigned field10;
	unsigned field11;
	unsigned field12;
	unsigned field13;
	unsigned field14;
	unsigned field15;
	unsigned field16;
	unsigned field17;
	unsigned field18;
	float field19;
	float field20;
	unsigned field21;
	unsigned field22;
	unsigned field23;
	unsigned field24;
	unsigned field25;
	unsigned field26;
	unsigned field27;
	unsigned field28;
	unsigned field29;
	unsigned field30;
	unsigned field31;
	unsigned field32;
	unsigned field33;
	unsigned field34;
	unsigned field35;
	unsigned field36;
	unsigned field37;
	unsigned field38;
	unsigned field39;
	unsigned field40;
	unsigned field41;
	unsigned field42;
	unsigned field43;
	unsigned field44;
	unsigned field45;
	unsigned field46;
	unsigned field47;
	unsigned field48;
	unsigned field49;
	unsigned field50;
	unsigned field51;
	unsigned field52;
	unsigned field53;
	unsigned field54;
	unsigned field55;
	unsigned field56;
	unsigned field57;
	unsigned field58;
	unsigned field59;
	unsigned long long field60;
} SCD_Struct_MT65;

typedef struct {
	SCD_Struct_MT64 origin;
	SCD_Struct_MT64 size;
} SCD_Struct_MT66;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::hash<unsigned long long>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::hash<unsigned long long>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::equal_to<MTLPixelFormat>, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::equal_to<MTLPixelFormat>, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::equal_to<MTLPixelFormat>, true>, std::__1::allocator<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::hash<unsigned long long>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::equal_to<MTLPixelFormat>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::equal_to<MTLPixelFormat>, true>, std::__1::allocator<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution> > >;

typedef struct unordered_map<MTLPixelFormat, MTLTelemetryRenderTargetDistribution, std::__1::hash<unsigned long long>, std::__1::equal_to<MTLPixelFormat>, std::__1::allocator<std::__1::pair<const MTLPixelFormat, MTLTelemetryRenderTargetDistribution> > > {
	hash_table<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution>, std::__1::equal_to<MTLPixelFormat>, true>, std::__1::allocator<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryRenderTargetDistribution> > > __table_;
} unordered_map<MTLPixelFormat, MTLTelemetryRenderTargetDistribution, std::__1::hash<unsigned long long>, std::__1::equal_to<MTLPixelFormat>, std::__1::allocator<std::__1::pair<const MTLPixelFormat, MTLTelemetryRenderTargetDistribution> > >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::hash<unsigned long long>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::hash<unsigned long long>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::equal_to<MTLPixelFormat>, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::equal_to<MTLPixelFormat>, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::equal_to<MTLPixelFormat>, true>, std::__1::allocator<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::hash<unsigned long long>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::equal_to<MTLPixelFormat>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::equal_to<MTLPixelFormat>, true>, std::__1::allocator<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution> > >;

typedef struct unordered_map<MTLPixelFormat, MTLTelemetryTextureDistribution, std::__1::hash<unsigned long long>, std::__1::equal_to<MTLPixelFormat>, std::__1::allocator<std::__1::pair<const MTLPixelFormat, MTLTelemetryTextureDistribution> > > {
	hash_table<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution>, std::__1::equal_to<MTLPixelFormat>, true>, std::__1::allocator<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryTextureDistribution> > > __table_;
} unordered_map<MTLPixelFormat, MTLTelemetryTextureDistribution, std::__1::hash<unsigned long long>, std::__1::equal_to<MTLPixelFormat>, std::__1::allocator<std::__1::pair<const MTLPixelFormat, MTLTelemetryTextureDistribution> > >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::__1::hash<unsigned int>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::__1::hash<unsigned int>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::__1::equal_to<unsigned int>, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::__1::equal_to<unsigned int>, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::__1::hash<unsigned int>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::__1::equal_to<unsigned int>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec> > >;

typedef struct unordered_map<unsigned int, MTLTelemetryRenderPipelineUsageRec, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, MTLTelemetryRenderPipelineUsageRec> > > {
	hash_table<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderPipelineUsageRec> > > __table_;
} unordered_map<unsigned int, MTLTelemetryRenderPipelineUsageRec, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, MTLTelemetryRenderPipelineUsageRec> > >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::__1::hash<unsigned int>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::__1::hash<unsigned int>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::__1::equal_to<unsigned int>, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::__1::equal_to<unsigned int>, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::__1::hash<unsigned int>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::__1::equal_to<unsigned int>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec> > >;

typedef struct unordered_map<unsigned int, MTLTelemetryRenderFuncUsageRec, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, MTLTelemetryRenderFuncUsageRec> > > {
	hash_table<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, MTLTelemetryRenderFuncUsageRec> > > __table_;
} unordered_map<unsigned int, MTLTelemetryRenderFuncUsageRec, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, MTLTelemetryRenderFuncUsageRec> > >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, std::__1::hash<std::__1::basic_string<char> >, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, std::__1::hash<std::__1::basic_string<char> >, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, std::__1::equal_to<std::__1::basic_string<char> >, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, std::__1::equal_to<std::__1::basic_string<char> >, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, std::__1::hash<std::__1::basic_string<char> >, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, std::__1::equal_to<std::__1::basic_string<char> >, true> > __p3_;
} hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec> > >;

typedef struct unordered_map<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, MTLTelemetryStatisticUIRec> > > {
	hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec> > > __table_;
} unordered_map<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, MTLTelemetryStatisticUIRec> > >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::__1::hash<unsigned int>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::__1::hash<unsigned int>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::__1::equal_to<unsigned int>, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::__1::equal_to<unsigned int>, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::__1::hash<unsigned int>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::__1::equal_to<unsigned int>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec> > >;

typedef struct unordered_map<unsigned int, MTLTelemetryComputePipelineUsageRec, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, MTLTelemetryComputePipelineUsageRec> > > {
	hash_table<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, MTLTelemetryComputePipelineUsageRec> > > __table_;
} unordered_map<unsigned int, MTLTelemetryComputePipelineUsageRec, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, MTLTelemetryComputePipelineUsageRec> > >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::__1::hash<unsigned int>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::__1::hash<unsigned int>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::__1::equal_to<unsigned int>, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::__1::equal_to<unsigned int>, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::__1::hash<unsigned int>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::__1::equal_to<unsigned int>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec> > >;

typedef struct unordered_map<unsigned int, MTLTelemetryKernelUsageRec, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, MTLTelemetryKernelUsageRec> > > {
	hash_table<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, MTLTelemetryKernelUsageRec> > > __table_;
} unordered_map<unsigned int, MTLTelemetryKernelUsageRec, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, MTLTelemetryKernelUsageRec> > >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::hash<unsigned long long>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::hash<unsigned long long>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::equal_to<MTLPixelFormat>, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::equal_to<MTLPixelFormat>, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::equal_to<MTLPixelFormat>, true>, std::__1::allocator<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::hash<unsigned long long>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::equal_to<MTLPixelFormat>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::equal_to<MTLPixelFormat>, true>, std::__1::allocator<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution> > >;

typedef struct unordered_map<MTLPixelFormat, MTLTelemetryBlitDistribution, std::__1::hash<unsigned long long>, std::__1::equal_to<MTLPixelFormat>, std::__1::allocator<std::__1::pair<const MTLPixelFormat, MTLTelemetryBlitDistribution> > > {
	hash_table<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::__unordered_map_hasher<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<MTLPixelFormat, std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution>, std::__1::equal_to<MTLPixelFormat>, true>, std::__1::allocator<std::__1::__hash_value_type<MTLPixelFormat, MTLTelemetryBlitDistribution> > > __table_;
} unordered_map<MTLPixelFormat, MTLTelemetryBlitDistribution, std::__1::hash<unsigned long long>, std::__1::equal_to<MTLPixelFormat>, std::__1::allocator<std::__1::pair<const MTLPixelFormat, MTLTelemetryBlitDistribution> > >;

typedef struct mach_timebase_info {
	unsigned numer;
	unsigned denom;
} mach_timebase_info;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, std::__1::hash<std::__1::basic_string<char> >, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, std::__1::hash<std::__1::basic_string<char> >, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, std::__1::equal_to<std::__1::basic_string<char> >, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, std::__1::equal_to<std::__1::basic_string<char> >, true> >;

typedef struct MTLTelemetryStatisticUIRec {
	unsigned min;
	unsigned max;
	unsigned long long total;
	unsigned count;
} MTLTelemetryStatisticUIRec;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, std::__1::hash<std::__1::basic_string<char> >, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, std::__1::equal_to<std::__1::basic_string<char> >, true> > __p3_;
} hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int> > >;

typedef struct unordered_map<std::__1::basic_string<char>, unsigned int, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned int> > > {
	hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned int> > > __table_;
} unordered_map<std::__1::basic_string<char>, unsigned int, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned int> > >;

typedef struct MTLTelemetrySupportQueryStatRec {
	unordered_map<std::__1::basic_string<char>, unsigned int, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned int> > > featureSetCount;
	MTLTelemetryStatisticUIRec texSampleCount;
} MTLTelemetrySupportQueryStatRec;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::array<unsigned long long, 3>, std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::hash_t, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::array<unsigned long long, 3>, std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::hash_t, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<std::__1::array<unsigned long long, 3>, std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::equal_t, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<std::__1::array<unsigned long long, 3>, std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::equal_t, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, std::__1::__unordered_map_hasher<std::__1::array<unsigned long long, 3>, std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::hash_t, true>, std::__1::__unordered_map_equal<std::__1::array<unsigned long long, 3>, std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::equal_t, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::array<unsigned long long, 3>, std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::hash_t, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<std::__1::array<unsigned long long, 3>, std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::equal_t, true> > __p3_;
} hash_table<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, std::__1::__unordered_map_hasher<std::__1::array<unsigned long long, 3>, std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::hash_t, true>, std::__1::__unordered_map_equal<std::__1::array<unsigned long long, 3>, std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::equal_t, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int> > >;

typedef struct unordered_map<std::__1::array<unsigned long long, 3>, unsigned int, MTLSamplerDescriptorHashMap::hash_t, MTLSamplerDescriptorHashMap::equal_t, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned long long, 3>, unsigned int> > > {
	hash_table<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, std::__1::__unordered_map_hasher<std::__1::array<unsigned long long, 3>, std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::hash_t, true>, std::__1::__unordered_map_equal<std::__1::array<unsigned long long, 3>, std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int>, MTLSamplerDescriptorHashMap::equal_t, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::array<unsigned long long, 3>, unsigned int> > > __table_;
} unordered_map<std::__1::array<unsigned long long, 3>, unsigned int, MTLSamplerDescriptorHashMap::hash_t, MTLSamplerDescriptorHashMap::equal_t, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned long long, 3>, unsigned int> > >;

typedef struct MTLSamplerDescriptorHashMap {
	unordered_map<std::__1::array<unsigned long long, 3>, unsigned int, MTLSamplerDescriptorHashMap::hash_t, MTLSamplerDescriptorHashMap::equal_t, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned long long, 3>, unsigned int> > > _map;
	unsigned _limit;
} MTLSamplerDescriptorHashMap;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::hash<unsigned long long>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::hash<unsigned long long>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::equal_to<unsigned long long>, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::equal_to<unsigned long long>, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned long long> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned long long>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::hash<unsigned long long>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::equal_to<unsigned long long>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned long long> > >;

typedef struct unordered_map<unsigned long long, unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned long long> > > {
	hash_table<std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned long long>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned long long> > > __table_;
} unordered_map<unsigned long long, unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned long long> > >;

typedef struct ResourceTrackingDeferredAttachments {
	NSMutableArray* colorAttachments;
	MTLRenderPassDepthAttachmentDescriptorInternal* depthAttachment;
	MTLRenderPassStencilAttachmentDescriptorInternal* stencilAttachment;
} ResourceTrackingDeferredAttachments;

typedef struct {
	unsigned long long x;
	unsigned long long y;
	unsigned long long width;
	unsigned long long height;
} SCD_Struct_MT182;

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
} SCD_Struct_MT183;

typedef struct _compressed_pair<MTLViewport *, std::__1::allocator<MTLViewport> > {
	/*function pointer*/void* __value_;
} compressed_pair<MTLViewport *, std::__1::allocator<MTLViewport> >;

typedef struct vector<MTLViewport, std::__1::allocator<MTLViewport> > {
	/*function pointer*/void* __begin_;
	/*function pointer*/void* __end_;
	compressed_pair<MTLViewport *, std::__1::allocator<MTLViewport> > __end_cap_;
} vector<MTLViewport, std::__1::allocator<MTLViewport> >;

typedef struct _compressed_pair<MTLScissorRect *, std::__1::allocator<MTLScissorRect> > {
	/*function pointer*/void* __value_;
} compressed_pair<MTLScissorRect *, std::__1::allocator<MTLScissorRect> >;

typedef struct vector<MTLScissorRect, std::__1::allocator<MTLScissorRect> > {
	/*function pointer*/void* __begin_;
	/*function pointer*/void* __end_;
	compressed_pair<MTLScissorRect *, std::__1::allocator<MTLScissorRect> > __end_cap_;
} vector<MTLScissorRect, std::__1::allocator<MTLScissorRect> >;

typedef struct _NSZone* NSZoneRef;

typedef struct MTLTelemetryKernelStateRec {
	int pbAlloc;
	int spmRenderCount;
	int tiledSceneBytes;
	int renderCount;
} MTLTelemetryKernelStateRec;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct MTLNormalPixelFormatInfo {
	unsigned long long pixelBytes;
	unsigned char componentCount;
	unsigned char alignment;
	unsigned long long pixelBytesRender;
	unsigned long long pixelBytesRenderMSAA;
} MTLNormalPixelFormatInfo;

typedef struct MTLCompressedPixelFormatInfo {
	unsigned long long blockBytes;
	unsigned long long blockWidth;
	unsigned long long blockHeight;
	unsigned long long blockDepth;
} MTLCompressedPixelFormatInfo;

typedef struct MTLPixelFormatInfo {
	char* name;
	unsigned flags;
	unsigned long long castClass;
	/*function pointer*/void* type;
	MTLNormalPixelFormatInfo normal;
	MTLCompressedPixelFormatInfo) compressed;
} MTLPixelFormatInfo;

