/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/


@class NSData, MPSNNGraph, NSObject<OS_dispatch_semaphore>, NSNull, MPSImageCopyToMatrix, MPSMatrixCopyToImage, MPSMatrixMultiplication;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	long long field1;
	long long field2;
	long long field3;
} SCD_Struct_MP1;

typedef struct MPSImageCoordinate {
	unsigned long long x;
	unsigned long long y;
	unsigned long long channel;
} MPSImageCoordinate;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct {
	MPSImageCoordinate origin;
	MPSImageCoordinate size;
} SCD_Struct_MP4;

typedef struct NeuronInfo {
	int type;
	float a;
	float b;
	float c;
	NSData* aData;
} NeuronInfo;

typedef struct NodeList<ResourceGraphNode *> {
	ResourceGraphNode _items;
	unsigned long long _count;
	unsigned long long _storageSize;
} NodeList<ResourceGraphNode *>;

typedef struct NodeList<FilterGraphNode *> {
	FilterGraphNode _items;
	unsigned long long _count;
	unsigned long long _storageSize;
} NodeList<FilterGraphNode *>;

typedef struct Graph {
	NodeList<ResourceGraphNode *> _graphSourceImages;
	NodeList<ResourceGraphNode *> _graphSourceStates;
	NodeList<ResourceGraphNode *> _graphResultImages;
	NodeList<ResourceGraphNode *> _graphIntermediateImages;
	NodeList<ResourceGraphNode *> _graphResultStates;
	MPSNNGraph* _graph;
	NodeList<FilterGraphNode *> _filters;
	NodeList<ResourceGraphNode *> _images;
	NodeList<ResourceGraphNode *> _states;
	NSObject<OS_dispatch_semaphore>* _cpuUpdateSem;
	NSNull* _graphNull;
} Graph;

typedef struct FilterGraphNode* FilterGraphNodeRef;

typedef struct Region_params* Region_paramsRef;

typedef struct {
	long long x;
	long long y;
	long long z;
} SCD_Struct_MP11;

typedef struct MPSCNNGramFilters_s {
	MPSImageCopyToMatrix* i2mCopy;
	MPSMatrixCopyToImage* m2iCopy;
	MPSMatrixMultiplication* gemm_TN;
} MPSCNNGramFilters_s;

typedef struct MPSCNNGramGradientFilters_s {
	MPSCNNGramFilters_s fwdFilters;
	MPSMatrixMultiplication* gemm_NN;
} MPSCNNGramGradientFilters_s;

typedef struct _cxx_atomic_impl<long, std::__1::__cxx_atomic_base_impl<long> > {
	Aq __a_value;
} cxx_atomic_impl<long, std::__1::__cxx_atomic_base_impl<long> >;

typedef struct atomic<long> {
	cxx_atomic_impl<long, std::__1::__cxx_atomic_base_impl<long> > __a_;
} atomic<long>;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	SCD_Struct_MP1 field3;
	1 field4;
	SCD_Struct_MP1 field5;
	1 field6;
	unsigned long long field7;
	unsigned long long field8;
} SCD_Struct_MP16;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
	SCD_Struct_MP4 field4;
	unsigned long long field5;
} SCD_Struct_MP17;

typedef struct {
	M field1;
	P field2;
	unsigned short field3;
	unsigned field4;
	m field5;
	a field6;
	g field7;
	e field8;
	unsigned field9;
	n field10;
	float field11;
	o field12;
	MPSStateInfo field13;
	M field14;
	P field15;
	unsigned short field16;
	unsigned field17;
	m field18;
	a field19;
	g field20;
	e field21;
	unsigned field22;
	n field23;
	float field24;
	o field25;
	SCD_Struct_MP1 field26;
	SCD_Struct_MP4 field27;
	1 field28;
	unsigned long long field29;
	unsigned long long field30;
} SCD_Struct_MP18;

typedef struct {
	unsigned short field1;
	unsigned short field2;
	unsigned short field3;
	unsigned short field4;
} SCD_Struct_MP19;

typedef struct {
	unsigned short field1;
	unsigned short field2;
	unsigned short field3;
	unsigned short field4;
	unsigned short field5;
	unsigned short field6;
	SCD_Struct_MP1 field7;
	9 field8;
} SCD_Struct_MP20;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
	/*function pointer*/void* field4;
	unsigned field5;
	id field6;
	SCD_Struct_MP1 field7;
	unsigned field8;
	id field9;
	SCD_Struct_MP1 field10;
	9 field11;
	SCD_Struct_MP4 field12;
	SCD_Struct_MP20 field13;
	1 field14;
	unsigned long long field15;
	unsigned long long field16;
} SCD_Struct_MP21;

typedef struct {
	M field1;
	P field2;
	unsigned short field3;
	unsigned field4;
	m field5;
	a field6;
	g field7;
	e field8;
	unsigned field9;
	n field10;
	float field11;
	o field12;
	M field13;
	P field14;
	unsigned short field15;
	unsigned field16;
	m field17;
	a field18;
	g field19;
	e field20;
	unsigned field21;
	n field22;
	float field23;
	o field24;
	MPSStateInfo field25;
	M field26;
	P field27;
	unsigned short field28;
	unsigned field29;
	m field30;
	a field31;
	g field32;
	e field33;
	unsigned field34;
	n field35;
	float field36;
	o field37;
	SCD_Struct_MP1 field38;
	SCD_Struct_MP1 field39;
	1 field40;
	SCD_Struct_MP4 field41;
	1 field42;
	unsigned long long field43;
	unsigned long long field44;
	unsigned long long field45;
	unsigned long long field46;
	unsigned long long field47;
} SCD_Struct_MP22;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
	/*function pointer*/void* field4;
	unsigned field5;
	id field6;
	SCD_Struct_MP1 field7;
	unsigned field8;
	id field9;
	SCD_Struct_MP1 field10;
	9 field11;
	unsigned field12;
	id field13;
	SCD_Struct_MP1 field14;
	9 field15;
	SCD_Struct_MP1 field16;
	SCD_Struct_MP4 field17;
	1 field18;
	SCD_Struct_MP20 field19;
	1 field20;
	unsigned long long field21;
	unsigned long long field22;
	unsigned long long field23;
} SCD_Struct_MP23;

