/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/

typedef struct _compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > {
	unsigned long long __value_;
} compressed_pair<unsigned long *, std::__1::allocator<unsigned long> >;

typedef struct vector<unsigned long, std::__1::allocator<unsigned long> > {
	unsigned long long __begin_;
	unsigned long long __end_;
	compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > __end_cap_;
} vector<unsigned long, std::__1::allocator<unsigned long> >;

typedef struct _LXLexicon* LXLexiconRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct vImage_Buffer {
	void data;
	unsigned long long height;
	unsigned long long width;
	unsigned long long rowBytes;
} vImage_Buffer;

typedef struct {
	void data;
	void reserved;
	unsigned long long dim[4];
	unsigned long long stride[4];
	unsigned long long width;
	unsigned long long height;
	unsigned long long channels;
	unsigned long long batch_number;
	unsigned long long sequence_length;
	unsigned long long stride_width;
	unsigned long long stride_height;
	unsigned long long stride_channels;
	unsigned long long stride_batch_number;
	unsigned long long stride_sequence_length;
	int storage_type;
} SCD_Struct_CR5;

typedef struct {
	void plan;
	int network_index;
} SCD_Struct_CR6;

typedef struct _compressed_pair<const char **, std::__1::allocator<const char *> > {
	char* __value_;
} compressed_pair<const char **, std::__1::allocator<const char *> >;

typedef struct vector<const char *, std::__1::allocator<const char *> > {
	char* __begin_;
	char* __end_;
	compressed_pair<const char **, std::__1::allocator<const char *> > __end_cap_;
} vector<const char *, std::__1::allocator<const char *> >;

typedef struct CRCtcCandidate {
	int symbol;
	float prob;
} CRCtcCandidate;

typedef struct CRCTCPriorityQueuepriority_queue<CRCtcCandidate, std::__1::vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> >, CRCTCPriorityQueue::QueueComparison>vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> >CRCtcCandidateCRCtcCandidate__compressed_pair<CRCtcCandidate *, std::__1::allocator<CRCtcCandidate> >CRCtcCandidateQueueComparisonBvector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> >CRCtcCandidateCRCtcCandidate__compressed_pair<CRCtcCandidate *, std::__1::allocator<CRCtcCandidate> >CRCtcCandidate* RCTCPriorityQueueRef;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long>, std::__1::less<unsigned int>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long>, std::__1::less<unsigned int>, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned long>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned long>, void *> > >;

typedef struct _tree<std::__1::__value_type<unsigned int, unsigned long>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned long> > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned long>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long>, std::__1::less<unsigned int>, true> > __pair3_;
} tree<std::__1::__value_type<unsigned int, unsigned long>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned long> > >;

typedef struct map<unsigned int, unsigned long, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long> > > {
	tree<std::__1::__value_type<unsigned int, unsigned long>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned long> > > __tree_;
} map<unsigned int, unsigned long, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long> > >;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, int>, std::__1::less<unsigned int>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, int>, std::__1::less<unsigned int>, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, int>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, int>, void *> > >;

typedef struct _tree<std::__1::__value_type<unsigned int, int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, int> > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, int>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, int>, std::__1::less<unsigned int>, true> > __pair3_;
} tree<std::__1::__value_type<unsigned int, int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, int> > >;

typedef struct map<unsigned int, int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, int> > > {
	tree<std::__1::__value_type<unsigned int, int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, int> > > __tree_;
} map<unsigned int, int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, int> > >;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_CR20;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct _NSZone* NSZoneRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct _compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > {
	unsigned __value_;
} compressed_pair<unsigned int *, std::__1::allocator<unsigned int> >;

typedef struct vector<unsigned int, std::__1::allocator<unsigned int> > {
	unsigned __begin_;
	unsigned __end_;
	compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > __end_cap_;
} vector<unsigned int, std::__1::allocator<unsigned int> >;

typedef struct _compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > {
	_NSRange __value_;
} compressed_pair<_NSRange *, std::__1::allocator<_NSRange> >;

typedef struct vector<_NSRange, std::__1::allocator<_NSRange> > {
	_NSRange __begin_;
	_NSRange __end_;
	compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > __end_cap_;
} vector<_NSRange, std::__1::allocator<_NSRange> >;

typedef struct _LXCursor* LXCursorRef;

typedef struct CVNLPLanguageModel* CVNLPLanguageModelRef;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<nms::RectForest<unsigned short, double> > > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<nms::RectForest<unsigned short, double> > >;

typedef struct _compressed_pair<nms::RectForest<unsigned short, double> **, std::__1::allocator<nms::RectForest<unsigned short, double> *> > {
	RectForest<unsigned short, double> __value_;
} compressed_pair<nms::RectForest<unsigned short, double> **, std::__1::allocator<nms::RectForest<unsigned short, double> *> >;

typedef struct _split_buffer<nms::RectForest<unsigned short, double> *, std::__1::allocator<nms::RectForest<unsigned short, double> *> > {
	RectForest<unsigned short, double> __first_;
	RectForest<unsigned short, double> __begin_;
	RectForest<unsigned short, double> __end_;
	compressed_pair<nms::RectForest<unsigned short, double> **, std::__1::allocator<nms::RectForest<unsigned short, double> *> > __end_cap_;
} split_buffer<nms::RectForest<unsigned short, double> *, std::__1::allocator<nms::RectForest<unsigned short, double> *> >;

typedef struct deque<nms::RectForest<unsigned short, double>, std::__1::allocator<nms::RectForest<unsigned short, double> > > {
	split_buffer<nms::RectForest<unsigned short, double> *, std::__1::allocator<nms::RectForest<unsigned short, double> *> > __map_;
	unsigned long long __start_;
	compressed_pair<unsigned long, std::__1::allocator<nms::RectForest<unsigned short, double> > > __size_;
} deque<nms::RectForest<unsigned short, double>, std::__1::allocator<nms::RectForest<unsigned short, double> > >;

typedef struct PyramidTokenizerConfig {
	/*function pointer*/void* _vptr$PyramidTokenizerConfig;
	unsigned long long methodType;
	BOOL isRecursive;
	double spacingClipMin;
	double spacingUniformityMinThresholdClipMin;
	double spacingUniformityMinThresholdClipMax;
	double spacingUniformityMinThresholdTrueProbability;
	double spacingRatioMultiplier;
	BOOL useAdpativeSpacingRatioMultiplier;
	unsigned long long adpativeSpacingRatioMultiplierMinNumRects;
	double adaptiveSpacingRatioMultiplierMinVariationThreshold;
	double adaptiveSpacingRatioMultiplierLowerBound;
	unsigned long long singleTokenNumCharsMaxThreshold;
	unsigned long long singleTokenNumCutpointCandidatesMaxThreshold;
} PyramidTokenizerConfig;

typedef struct PyramidTokenizer<unsigned short, double> {
	/*function pointer*/void* _vptr$PyramidTokenizer;
	deque<nms::RectForest<unsigned short, double>, std::__1::allocator<nms::RectForest<unsigned short, double> > > pForests;
	PyramidTokenizerConfig config;
} PyramidTokenizer<unsigned short, double>;

typedef struct pc_session* pc_sessionRef;

typedef struct CGImage* CGImageRef;

