/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
*/


@class NSObject<OS_xpc_object>;

typedef struct HapticSharedMemory {
	/*function pointer*/void* _vptr$SharableMemoryBase;
	BOOL mIsOwner;
	BOOL mWasMapped;
	unsigned long long mSize;
	void mBuffer;
	unsigned mPort;
	int mFileDesc;
	int mSerial;
	NSObject<OS_xpc_object>* mXPCObject;
} HapticSharedMemory;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct mutex {
	opaque_pthread_mutex_t __m_;
} mutex;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, SequenceEntry *>, std::__1::less<unsigned long>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, SequenceEntry *>, std::__1::less<unsigned long>, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, SequenceEntry *>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, SequenceEntry *>, void *> > >;

typedef struct _tree<std::__1::__value_type<unsigned long, SequenceEntry *>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, SequenceEntry *>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, SequenceEntry *> > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, SequenceEntry *>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, SequenceEntry *>, std::__1::less<unsigned long>, true> > __pair3_;
} tree<std::__1::__value_type<unsigned long, SequenceEntry *>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, SequenceEntry *>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, SequenceEntry *> > >;

typedef struct map<unsigned long, SequenceEntry *, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, SequenceEntry *> > > {
	tree<std::__1::__value_type<unsigned long, SequenceEntry *>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, SequenceEntry *>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, SequenceEntry *> > > __tree_;
} map<unsigned long, SequenceEntry *, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, SequenceEntry *> > >;

typedef struct shared_ptr<HapticSession> {
	HapticSession __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<HapticSession>;

typedef struct shared_ptr<opaqueCMSession> {
	opaqueCMSession __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<opaqueCMSession>;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSMutableArray<ServerWrapper *> *>, std::__1::less<unsigned int>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSMutableArray<ServerWrapper *> *>, std::__1::less<unsigned int>, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, NSMutableArray<ServerWrapper *> *>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, NSMutableArray<ServerWrapper *> *>, void *> > >;

typedef struct _tree<std::__1::__value_type<unsigned int, NSMutableArray<ServerWrapper *> *>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSMutableArray<ServerWrapper *> *>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSMutableArray<ServerWrapper *> *> > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, NSMutableArray<ServerWrapper *> *>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSMutableArray<ServerWrapper *> *>, std::__1::less<unsigned int>, true> > __pair3_;
} tree<std::__1::__value_type<unsigned int, NSMutableArray<ServerWrapper *> *>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSMutableArray<ServerWrapper *> *>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSMutableArray<ServerWrapper *> *> > >;

typedef struct map<unsigned int, NSMutableArray<ServerWrapper *> *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, NSMutableArray<ServerWrapper *> *> > > {
	tree<std::__1::__value_type<unsigned int, NSMutableArray<ServerWrapper *> *>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSMutableArray<ServerWrapper *> *>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSMutableArray<ServerWrapper *> *> > > __tree_;
} map<unsigned int, NSMutableArray<ServerWrapper *> *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, NSMutableArray<ServerWrapper *> *> > >;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::bitset<255> >, std::__1::less<int>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::bitset<255> >, std::__1::less<int>, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, std::__1::bitset<255> >, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, std::__1::bitset<255> >, void *> > >;

typedef struct _tree<std::__1::__value_type<int, std::__1::bitset<255> >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::bitset<255> >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::bitset<255> > > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, std::__1::bitset<255> >, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::bitset<255> >, std::__1::less<int>, true> > __pair3_;
} tree<std::__1::__value_type<int, std::__1::bitset<255> >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::bitset<255> >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::bitset<255> > > >;

typedef struct map<int, std::__1::bitset<255>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::bitset<255> > > > {
	tree<std::__1::__value_type<int, std::__1::bitset<255> >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::bitset<255> >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::bitset<255> > > > __tree_;
} map<int, std::__1::bitset<255>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::bitset<255> > > >;

typedef const struct __CFDictionary* CFDictionaryRef;

typedef struct SSPlayerSynchronizer* SSPlayerSynchronizerRef;

typedef union {
	unsigned long long _eventType;
	unsigned long long _paramType;
} SCD_Union_AV20;

typedef struct AVHapticPlayerFixedParameter {
	unsigned long long type;
	float value;
} AVHapticPlayerFixedParameter;

