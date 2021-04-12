/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

typedef struct shared_ptr<DSPGraph::Graph> {
	Graph __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<DSPGraph::Graph>;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_SN1;

typedef struct {
	SCD_Struct_SN1 field1;
	SCD_Struct_SN1 field2;
} SCD_Struct_SN2;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_SN3;

typedef struct {
	SCD_Struct_SN3 start;
	SCD_Struct_SN3 duration;
} SCD_Struct_SN4;

typedef struct _NSZone* NSZoneRef;

typedef struct Box* BoxRef;

typedef struct _compressed_pair<DSPGraph::Graph *, std::__1::default_delete<DSPGraph::Graph> > {
	Graph __value_;
} compressed_pair<DSPGraph::Graph *, std::__1::default_delete<DSPGraph::Graph> >;

typedef struct unique_ptr<DSPGraph::Graph, std::__1::default_delete<DSPGraph::Graph> > {
	compressed_pair<DSPGraph::Graph *, std::__1::default_delete<DSPGraph::Graph> > __ptr_;
} unique_ptr<DSPGraph::Graph, std::__1::default_delete<DSPGraph::Graph> >;

typedef struct _compressed_pair<float *, std::__1::allocator<float> > {
	float __value_;
} compressed_pair<float *, std::__1::allocator<float> >;

typedef struct vector<float, std::__1::allocator<float> > {
	float __begin_;
	float __end_;
	compressed_pair<float *, std::__1::allocator<float> > __end_cap_;
} vector<float, std::__1::allocator<float> >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::ProcessingContext, void *> > > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::ProcessingContext, void *> > >;

typedef struct _list_node_base<SoundAnalysis::ProcessingContext, void *> {
	__list_node_base<SoundAnalysis::ProcessingContext, void *> __prev_;
	__list_node_base<SoundAnalysis::ProcessingContext, void *> __next_;
} list_node_base<SoundAnalysis::ProcessingContext, void *>;

typedef struct list<SoundAnalysis::ProcessingContext, std::__1::allocator<SoundAnalysis::ProcessingContext> > {
	list_node_base<SoundAnalysis::ProcessingContext, void *> __end_;
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::ProcessingContext, void *> > > __size_alloc_;
} list<SoundAnalysis::ProcessingContext, std::__1::allocator<SoundAnalysis::ProcessingContext> >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::FormatMatchingNode, void *> > > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::FormatMatchingNode, void *> > >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::SharedProcessingNode, void *> > > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::SharedProcessingNode, void *> > >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::AnalyzerNode, void *> > > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::AnalyzerNode, void *> > >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::ProcessingNode *, void *> > > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::ProcessingNode *, void *> > >;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct FormatAndBlockSize {
	AudioStreamBasicDescription mFormat;
	int mBlockSize;
} FormatAndBlockSize;

typedef struct _list_node_base<SoundAnalysis::ProcessingNode *, void *> {
	__list_node_base<SoundAnalysis::ProcessingNode *, void *> __prev_;
	__list_node_base<SoundAnalysis::ProcessingNode *, void *> __next_;
} list_node_base<SoundAnalysis::ProcessingNode *, void *>;

typedef struct list<SoundAnalysis::ProcessingNode *, std::__1::allocator<SoundAnalysis::ProcessingNode *> > {
	list_node_base<SoundAnalysis::ProcessingNode *, void *> __end_;
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::ProcessingNode *, void *> > > __size_alloc_;
} list<SoundAnalysis::ProcessingNode *, std::__1::allocator<SoundAnalysis::ProcessingNode *> >;

typedef struct RootNode {
	/*function pointer*/void* _vptr$ProcessingNode;
	ProcessingNode mUpstreamNode;
	list<SoundAnalysis::ProcessingNode *, std::__1::allocator<SoundAnalysis::ProcessingNode *> > mDownstreamNodes;
	Box mProcessingBox;
	FormatAndBlockSize mUpstreamFormat;
	FormatAndBlockSize mDownstreamFormat;
} RootNode;

typedef struct _list_node_base<SoundAnalysis::AnalyzerNode, void *> {
	__list_node_base<SoundAnalysis::AnalyzerNode, void *> __prev_;
	__list_node_base<SoundAnalysis::AnalyzerNode, void *> __next_;
} list_node_base<SoundAnalysis::AnalyzerNode, void *>;

typedef struct list<SoundAnalysis::AnalyzerNode, std::__1::allocator<SoundAnalysis::AnalyzerNode> > {
	list_node_base<SoundAnalysis::AnalyzerNode, void *> __end_;
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::AnalyzerNode, void *> > > __size_alloc_;
} list<SoundAnalysis::AnalyzerNode, std::__1::allocator<SoundAnalysis::AnalyzerNode> >;

typedef struct _list_node_base<SoundAnalysis::SharedProcessingNode, void *> {
	__list_node_base<SoundAnalysis::SharedProcessingNode, void *> __prev_;
	__list_node_base<SoundAnalysis::SharedProcessingNode, void *> __next_;
} list_node_base<SoundAnalysis::SharedProcessingNode, void *>;

typedef struct list<SoundAnalysis::SharedProcessingNode, std::__1::allocator<SoundAnalysis::SharedProcessingNode> > {
	list_node_base<SoundAnalysis::SharedProcessingNode, void *> __end_;
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::SharedProcessingNode, void *> > > __size_alloc_;
} list<SoundAnalysis::SharedProcessingNode, std::__1::allocator<SoundAnalysis::SharedProcessingNode> >;

typedef struct _list_node_base<SoundAnalysis::FormatMatchingNode, void *> {
	__list_node_base<SoundAnalysis::FormatMatchingNode, void *> __prev_;
	__list_node_base<SoundAnalysis::FormatMatchingNode, void *> __next_;
} list_node_base<SoundAnalysis::FormatMatchingNode, void *>;

typedef struct list<SoundAnalysis::FormatMatchingNode, std::__1::allocator<SoundAnalysis::FormatMatchingNode> > {
	list_node_base<SoundAnalysis::FormatMatchingNode, void *> __end_;
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SoundAnalysis::FormatMatchingNode, void *> > > __size_alloc_;
} list<SoundAnalysis::FormatMatchingNode, std::__1::allocator<SoundAnalysis::FormatMatchingNode> >;

typedef struct ProcessingTree {
	shared_ptr<DSPGraph::Graph> mGraph;
	list<SoundAnalysis::ProcessingContext, std::__1::allocator<SoundAnalysis::ProcessingContext> > mProcessingContexts;
	list<SoundAnalysis::FormatMatchingNode, std::__1::allocator<SoundAnalysis::FormatMatchingNode> > mFormatMatchingNodes;
	list<SoundAnalysis::SharedProcessingNode, std::__1::allocator<SoundAnalysis::SharedProcessingNode> > mSharedProcessingNodes;
	list<SoundAnalysis::AnalyzerNode, std::__1::allocator<SoundAnalysis::AnalyzerNode> > mAnalyzerNodes;
	RootNode mRootNode;
	int mMaxFramesPerSlice;
} ProcessingTree;

typedef struct _compressed_pair<DSPGraph::Interpreter *, std::__1::default_delete<DSPGraph::Interpreter> > {
	Interpreter __value_;
} compressed_pair<DSPGraph::Interpreter *, std::__1::default_delete<DSPGraph::Interpreter> >;

typedef struct unique_ptr<DSPGraph::Interpreter, std::__1::default_delete<DSPGraph::Interpreter> > {
	compressed_pair<DSPGraph::Interpreter *, std::__1::default_delete<DSPGraph::Interpreter> > __ptr_;
} unique_ptr<DSPGraph::Interpreter, std::__1::default_delete<DSPGraph::Interpreter> >;

