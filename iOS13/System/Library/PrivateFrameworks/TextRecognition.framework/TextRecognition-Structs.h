/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

typedef struct CGImage* CGImageRef;

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
} SCD_Struct_CR16;

typedef struct _NSZone* NSZoneRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

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

typedef struct _compressed_pair<unsigned long, std::__1::allocator<nms::RectForest<unsigned short, float> > > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<nms::RectForest<unsigned short, float> > >;

typedef struct _compressed_pair<nms::RectForest<unsigned short, float> **, std::__1::allocator<nms::RectForest<unsigned short, float> *> > {
	RectForest<unsigned short, float> __value_;
} compressed_pair<nms::RectForest<unsigned short, float> **, std::__1::allocator<nms::RectForest<unsigned short, float> *> >;

typedef struct _split_buffer<nms::RectForest<unsigned short, float> *, std::__1::allocator<nms::RectForest<unsigned short, float> *> > {
	RectForest<unsigned short, float> __first_;
	RectForest<unsigned short, float> __begin_;
	RectForest<unsigned short, float> __end_;
	compressed_pair<nms::RectForest<unsigned short, float> **, std::__1::allocator<nms::RectForest<unsigned short, float> *> > __end_cap_;
} split_buffer<nms::RectForest<unsigned short, float> *, std::__1::allocator<nms::RectForest<unsigned short, float> *> >;

typedef struct deque<nms::RectForest<unsigned short, float>, std::__1::allocator<nms::RectForest<unsigned short, float> > > {
	split_buffer<nms::RectForest<unsigned short, float> *, std::__1::allocator<nms::RectForest<unsigned short, float> *> > __map_;
	unsigned long long __start_;
	compressed_pair<unsigned long, std::__1::allocator<nms::RectForest<unsigned short, float> > > __size_;
} deque<nms::RectForest<unsigned short, float>, std::__1::allocator<nms::RectForest<unsigned short, float> > >;

typedef struct PyramidTokenizerConfig {
	/*function pointer*/void* _vptr$PyramidTokenizerConfig;
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

typedef struct PyramidTokenizer<unsigned short, float> {
	/*function pointer*/void* _vptr$PyramidTokenizer;
	deque<nms::RectForest<unsigned short, float>, std::__1::allocator<nms::RectForest<unsigned short, float> > > pForests;
	PyramidTokenizerConfig config;
} PyramidTokenizer<unsigned short, float>;

typedef struct _compressed_pair<bool **, std::__1::allocator<bool *> > {
	BOOL __value_;
} compressed_pair<bool **, std::__1::allocator<bool *> >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<bool> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<bool> >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::valarray<bool> > > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::valarray<bool> > >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::valarray<float> > > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::valarray<float> > >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::valarray<unsigned char> > > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::valarray<unsigned char> > >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > > > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > > >;

typedef struct PyramidNMSConfig {
	/*function pointer*/void* _vptr$PyramidNMSConfig;
	unsigned long long method;
	unsigned long long ipuNumSamples;
	double ipuValidMinThreshold;
	double ipuUniformityMinThreshold;
	double ipuNegativeHSpacingToWidthRatioMaxThreshold;
	double ipuNumNegativeHSpacingsMaxThreshold;
	BOOL ipuUseNumChars;
	unsigned long long ipuNumCharsUpperClip;
	BOOL ipuUseWidthUniformity;
	BOOL ipuUseAreaUniformoity;
	BOOL ipuUseHSpacingUniformity;
	BOOL ipuUseCenterHeightUniformity;
	BOOL ipuUseScaleIndex;
	double containmentIPUCompetingScaledMinThreshold;
	unsigned long long containmentNumLowerLevelDatumCompetingMinThreshold;
	double containmentContainingDatumCrossLevelIntersectionMaxThreshold;
	double containmentInvalidSubdatumPercentageMaxThreshold;
	double containmentInvalidDatumContainingIOMinMinThreshold;
	BOOL pendingInvalidRejectCompetingDatums;
	BOOL filterByIPUAndUniformity;
	BOOL processCoincidence;
	BOOL processContainment;
	BOOL processOverlap;
	BOOL useOverlappingWordsInProcessingContainment;
	BOOL processPendingInvalid;
	double lineCoincidenceIOUMinThreshold;
	double lineCoincidenceIOMinMinThreshold;
	double lineContainmentIOUMaxThreshold;
	double lineContainmentIOMinMinThreshold;
	double lineConstitutionIOUMaxThreshold;
	double lineConstitutionIOMinMinThreshold;
	double lineOverlapIOUMinThreshold;
	double lineOverlapIOUMaxThreshold;
	double lineOverlapIOMinMinThreshold;
	double lineOverlapIOMinMaxThreshold;
	double wordCoincidenceIOUMinThreshold;
	double wordCoincidenceIOMinMinThreshold;
	double wordContainmentIOUMaxThreshold;
	double wordContainmentIOMinMinThreshold;
	double wordConstitutionIOUMaxThreshold;
	double wordConstitutionIOMinMinThreshold;
	double wordOverlapIOUMinThreshold;
	double wordOverlapIOUMaxThreshold;
	double wordOverlapIOMinMinThreshold;
	double wordOverlapIOMinMaxThreshold;
} PyramidNMSConfig;

typedef struct _compressed_pair<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > **, std::__1::allocator<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > *> > {
	deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > __value_;
} compressed_pair<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > **, std::__1::allocator<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > *> >;

typedef struct _split_buffer<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > *, std::__1::allocator<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > *> > {
	deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > __first_;
	deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > __begin_;
	deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > __end_;
	compressed_pair<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > **, std::__1::allocator<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > *> > __end_cap_;
} split_buffer<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > *, std::__1::allocator<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > *> >;

typedef struct deque<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > >, std::__1::allocator<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > > > {
	split_buffer<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > *, std::__1::allocator<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > *> > __map_;
	unsigned long long __start_;
	compressed_pair<unsigned long, std::__1::allocator<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > > > __size_;
} deque<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > >, std::__1::allocator<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > > >;

typedef struct _compressed_pair<std::__1::valarray<unsigned char> **, std::__1::allocator<std::__1::valarray<unsigned char> *> > {
	valarray<unsigned char> __value_;
} compressed_pair<std::__1::valarray<unsigned char> **, std::__1::allocator<std::__1::valarray<unsigned char> *> >;

typedef struct _split_buffer<std::__1::valarray<unsigned char> *, std::__1::allocator<std::__1::valarray<unsigned char> *> > {
	valarray<unsigned char> __first_;
	valarray<unsigned char> __begin_;
	valarray<unsigned char> __end_;
	compressed_pair<std::__1::valarray<unsigned char> **, std::__1::allocator<std::__1::valarray<unsigned char> *> > __end_cap_;
} split_buffer<std::__1::valarray<unsigned char> *, std::__1::allocator<std::__1::valarray<unsigned char> *> >;

typedef struct deque<std::__1::valarray<unsigned char>, std::__1::allocator<std::__1::valarray<unsigned char> > > {
	split_buffer<std::__1::valarray<unsigned char> *, std::__1::allocator<std::__1::valarray<unsigned char> *> > __map_;
	unsigned long long __start_;
	compressed_pair<unsigned long, std::__1::allocator<std::__1::valarray<unsigned char> > > __size_;
} deque<std::__1::valarray<unsigned char>, std::__1::allocator<std::__1::valarray<unsigned char> > >;

typedef struct _compressed_pair<std::__1::valarray<float> **, std::__1::allocator<std::__1::valarray<float> *> > {
	valarray<float> __value_;
} compressed_pair<std::__1::valarray<float> **, std::__1::allocator<std::__1::valarray<float> *> >;

typedef struct _split_buffer<std::__1::valarray<float> *, std::__1::allocator<std::__1::valarray<float> *> > {
	valarray<float> __first_;
	valarray<float> __begin_;
	valarray<float> __end_;
	compressed_pair<std::__1::valarray<float> **, std::__1::allocator<std::__1::valarray<float> *> > __end_cap_;
} split_buffer<std::__1::valarray<float> *, std::__1::allocator<std::__1::valarray<float> *> >;

typedef struct deque<std::__1::valarray<float>, std::__1::allocator<std::__1::valarray<float> > > {
	split_buffer<std::__1::valarray<float> *, std::__1::allocator<std::__1::valarray<float> *> > __map_;
	unsigned long long __start_;
	compressed_pair<unsigned long, std::__1::allocator<std::__1::valarray<float> > > __size_;
} deque<std::__1::valarray<float>, std::__1::allocator<std::__1::valarray<float> > >;

typedef struct _compressed_pair<std::__1::valarray<bool> **, std::__1::allocator<std::__1::valarray<bool> *> > {
	valarray<bool> __value_;
} compressed_pair<std::__1::valarray<bool> **, std::__1::allocator<std::__1::valarray<bool> *> >;

typedef struct _split_buffer<std::__1::valarray<bool> *, std::__1::allocator<std::__1::valarray<bool> *> > {
	valarray<bool> __first_;
	valarray<bool> __begin_;
	valarray<bool> __end_;
	compressed_pair<std::__1::valarray<bool> **, std::__1::allocator<std::__1::valarray<bool> *> > __end_cap_;
} split_buffer<std::__1::valarray<bool> *, std::__1::allocator<std::__1::valarray<bool> *> >;

typedef struct deque<std::__1::valarray<bool>, std::__1::allocator<std::__1::valarray<bool> > > {
	split_buffer<std::__1::valarray<bool> *, std::__1::allocator<std::__1::valarray<bool> *> > __map_;
	unsigned long long __start_;
	compressed_pair<unsigned long, std::__1::allocator<std::__1::valarray<bool> > > __size_;
} deque<std::__1::valarray<bool>, std::__1::allocator<std::__1::valarray<bool> > >;

typedef struct _split_buffer<bool *, std::__1::allocator<bool *> > {
	BOOL __first_;
	BOOL __begin_;
	BOOL __end_;
	compressed_pair<bool **, std::__1::allocator<bool *> > __end_cap_;
} split_buffer<bool *, std::__1::allocator<bool *> >;

typedef struct deque<bool, std::__1::allocator<bool> > {
	split_buffer<bool *, std::__1::allocator<bool *> > __map_;
	unsigned long long __start_;
	compressed_pair<unsigned long, std::__1::allocator<bool> > __size_;
} deque<bool, std::__1::allocator<bool> >;

typedef struct PyramidNMS<unsigned short, float, unsigned char> {
	/*function pointer*/void* _vptr$PyramidNMS;
	deque<bool, std::__1::allocator<bool> > fullySpecifiedForests;
	deque<std::__1::valarray<bool>, std::__1::allocator<std::__1::valarray<bool> > > masksValid;
	deque<std::__1::valarray<bool>, std::__1::allocator<std::__1::valarray<bool> > > masksInvalid;
	deque<std::__1::valarray<bool>, std::__1::allocator<std::__1::valarray<bool> > > masksPendingInvalid;
	deque<std::__1::valarray<float>, std::__1::allocator<std::__1::valarray<float> > > ipus;
	deque<std::__1::valarray<unsigned char>, std::__1::allocator<std::__1::valarray<unsigned char> > > histsWordCoincide;
	deque<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > >, std::__1::allocator<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > > > idxsWordCoincide;
	deque<std::__1::valarray<unsigned char>, std::__1::allocator<std::__1::valarray<unsigned char> > > histsWordContain;
	deque<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > >, std::__1::allocator<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > > > idxsWordContain;
	deque<std::__1::valarray<unsigned char>, std::__1::allocator<std::__1::valarray<unsigned char> > > histsWordConstitute;
	deque<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > >, std::__1::allocator<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > > > idxsWordConstitute;
	deque<std::__1::valarray<unsigned char>, std::__1::allocator<std::__1::valarray<unsigned char> > > histsWordOverlap;
	deque<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > >, std::__1::allocator<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > > > idxsWordOverlap;
	deque<std::__1::valarray<unsigned char>, std::__1::allocator<std::__1::valarray<unsigned char> > > histsLineCoincide;
	deque<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > >, std::__1::allocator<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > > > idxsLineCoincide;
	deque<std::__1::valarray<unsigned char>, std::__1::allocator<std::__1::valarray<unsigned char> > > histsLineContain;
	deque<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > >, std::__1::allocator<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > > > idxsLineContain;
	deque<std::__1::valarray<unsigned char>, std::__1::allocator<std::__1::valarray<unsigned char> > > histsLineConstitute;
	deque<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > >, std::__1::allocator<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > > > idxsLineConstitute;
	deque<std::__1::valarray<unsigned char>, std::__1::allocator<std::__1::valarray<unsigned char> > > histsLineOverlap;
	deque<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > >, std::__1::allocator<std::__1::deque<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > >, std::__1::allocator<std::__1::deque<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::deque<unsigned short, std::__1::allocator<unsigned short> > > > > > > > idxsLineOverlap;
	deque<nms::RectForest<unsigned short, float>, std::__1::allocator<nms::RectForest<unsigned short, float> > > pForests;
	PyramidNMSConfig config;
} PyramidNMS<unsigned short, float, unsigned char>;

typedef struct pc_session* pc_sessionRef;

typedef struct vImage_Buffer {
	void data;
	unsigned long long height;
	unsigned long long width;
	unsigned long long rowBytes;
} vImage_Buffer;

