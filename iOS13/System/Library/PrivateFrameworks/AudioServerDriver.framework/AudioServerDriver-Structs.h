/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/

typedef struct _compressed_pair<AudioRingBuffer *, std::__1::default_delete<AudioRingBuffer> > {
	AudioRingBuffer __value_;
} compressed_pair<AudioRingBuffer *, std::__1::default_delete<AudioRingBuffer> >;

typedef struct unique_ptr<AudioRingBuffer, std::__1::default_delete<AudioRingBuffer> > {
	compressed_pair<AudioRingBuffer *, std::__1::default_delete<AudioRingBuffer> > __ptr_;
} unique_ptr<AudioRingBuffer, std::__1::default_delete<AudioRingBuffer> >;

typedef struct shared_ptr<DSPGraph::Graph> {
	Graph __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<DSPGraph::Graph>;

typedef struct _compressed_pair<ASDDSPStreamHelper *, std::__1::default_delete<ASDDSPStreamHelper> > {
	ASDDSPStreamHelper __value_;
} compressed_pair<ASDDSPStreamHelper *, std::__1::default_delete<ASDDSPStreamHelper> >;

typedef struct unique_ptr<ASDDSPStreamHelper, std::__1::default_delete<ASDDSPStreamHelper> > {
	compressed_pair<ASDDSPStreamHelper *, std::__1::default_delete<ASDDSPStreamHelper> > __ptr_;
} unique_ptr<ASDDSPStreamHelper, std::__1::default_delete<ASDDSPStreamHelper> >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<ASDDSPGraphHelper, void *> > > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<ASDDSPGraphHelper, void *> > >;

typedef struct _list_node_base<ASDDSPGraphHelper, void *> {
	__list_node_base<ASDDSPGraphHelper, void *> __prev_;
	__list_node_base<ASDDSPGraphHelper, void *> __next_;
} list_node_base<ASDDSPGraphHelper, void *>;

typedef struct list<ASDDSPGraphHelper, std::__1::allocator<ASDDSPGraphHelper> > {
	list_node_base<ASDDSPGraphHelper, void *> __end_;
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<ASDDSPGraphHelper, void *> > > __size_alloc_;
} list<ASDDSPGraphHelper, std::__1::allocator<ASDDSPGraphHelper> >;

typedef struct _compressed_pair<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences> *, std::__1::default_delete<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences> > > {
	guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences> __value_;
} compressed_pair<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences> *, std::__1::default_delete<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences> > >;

typedef struct unique_ptr<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>, std::__1::default_delete<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences> > > {
	compressed_pair<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences> *, std::__1::default_delete<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences> > > __ptr_;
} unique_ptr<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>, std::__1::default_delete<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences> > >;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct _compressed_pair<ASDSRCStreamHelper *, std::__1::default_delete<ASDSRCStreamHelper> > {
	ASDSRCStreamHelper __value_;
} compressed_pair<ASDSRCStreamHelper *, std::__1::default_delete<ASDSRCStreamHelper> >;

typedef struct unique_ptr<ASDSRCStreamHelper, std::__1::default_delete<ASDSRCStreamHelper> > {
	compressed_pair<ASDSRCStreamHelper *, std::__1::default_delete<ASDSRCStreamHelper> > __ptr_;
} unique_ptr<ASDSRCStreamHelper, std::__1::default_delete<ASDSRCStreamHelper> >;

typedef struct {
	unsigned char valid;
	double sampleTime;
	unsigned long long hostTime;
	unsigned long long seed;
} SCD_Struct_AS13;

typedef struct _compressed_pair<DSPGraph::Interpreter *, std::__1::default_delete<DSPGraph::Interpreter> > {
	Interpreter __value_;
} compressed_pair<DSPGraph::Interpreter *, std::__1::default_delete<DSPGraph::Interpreter> >;

typedef struct unique_ptr<DSPGraph::Interpreter, std::__1::default_delete<DSPGraph::Interpreter> > {
	compressed_pair<DSPGraph::Interpreter *, std::__1::default_delete<DSPGraph::Interpreter> > __ptr_;
} unique_ptr<DSPGraph::Interpreter, std::__1::default_delete<DSPGraph::Interpreter> >;

typedef struct _NSZone* NSZoneRef;

typedef struct AudioObjectPropertyAddress {
	unsigned mSelector;
	unsigned mScope;
	unsigned mElement;
} AudioObjectPropertyAddress;

typedef struct _compressed_pair<ASDBufferList *, std::__1::default_delete<ASDBufferList> > {
	ASDBufferList __value_;
} compressed_pair<ASDBufferList *, std::__1::default_delete<ASDBufferList> >;

typedef struct unique_ptr<ASDBufferList, std::__1::default_delete<ASDBufferList> > {
	compressed_pair<ASDBufferList *, std::__1::default_delete<ASDBufferList> > __ptr_;
} unique_ptr<ASDBufferList, std::__1::default_delete<ASDBufferList> >;

