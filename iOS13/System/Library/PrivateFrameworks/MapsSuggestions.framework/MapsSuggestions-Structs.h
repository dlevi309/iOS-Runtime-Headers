/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/


@class NSObject<OS_dispatch_queue>, NSString;

typedef struct Queue {
	NSObject<OS_dispatch_queue>* _innerQueue;
	NSString* _name;
} Queue;

typedef struct ReadWriteQueue {
	NSObject<OS_dispatch_queue>* _innerQueue;
	NSString* _name;
} ReadWriteQueue;

typedef struct {
	double field1;
	double field2;
} SCD_Struct_Ma2;

typedef struct _NSZone* NSZoneRef;

typedef struct _compressed_pair<MSg::Queue *, std::__1::default_delete<MSg::Queue> > {
	Queue __value_;
} compressed_pair<MSg::Queue *, std::__1::default_delete<MSg::Queue> >;

typedef struct unique_ptr<MSg::Queue, std::__1::default_delete<MSg::Queue> > {
	compressed_pair<MSg::Queue *, std::__1::default_delete<MSg::Queue> > __ptr_;
} unique_ptr<MSg::Queue, std::__1::default_delete<MSg::Queue> >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MapsSuggestionsSignalType, std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__1::hash<MapsSuggestionsSignalType>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MapsSuggestionsSignalType, std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__1::hash<MapsSuggestionsSignalType>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<MapsSuggestionsSignalType, std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__1::equal_to<MapsSuggestionsSignalType>, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<MapsSuggestionsSignalType, std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__1::equal_to<MapsSuggestionsSignalType>, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__1::__unordered_map_hasher<MapsSuggestionsSignalType, std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__1::hash<MapsSuggestionsSignalType>, true>, std::__1::__unordered_map_equal<MapsSuggestionsSignalType, std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__1::equal_to<MapsSuggestionsSignalType>, true>, std::__1::allocator<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<MapsSuggestionsSignalType, std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__1::hash<MapsSuggestionsSignalType>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<MapsSuggestionsSignalType, std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__1::equal_to<MapsSuggestionsSignalType>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__1::__unordered_map_hasher<MapsSuggestionsSignalType, std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__1::hash<MapsSuggestionsSignalType>, true>, std::__1::__unordered_map_equal<MapsSuggestionsSignalType, std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__1::equal_to<MapsSuggestionsSignalType>, true>, std::__1::allocator<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal> > >;

typedef struct unordered_map<MapsSuggestionsSignalType, MSg::Signal, std::__1::hash<MapsSuggestionsSignalType>, std::__1::equal_to<MapsSuggestionsSignalType>, std::__1::allocator<std::__1::pair<const MapsSuggestionsSignalType, MSg::Signal> > > {
	hash_table<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__1::__unordered_map_hasher<MapsSuggestionsSignalType, std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__1::hash<MapsSuggestionsSignalType>, true>, std::__1::__unordered_map_equal<MapsSuggestionsSignalType, std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__1::equal_to<MapsSuggestionsSignalType>, true>, std::__1::allocator<std::__1::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal> > > __table_;
} unordered_map<MapsSuggestionsSignalType, MSg::Signal, std::__1::hash<MapsSuggestionsSignalType>, std::__1::equal_to<MapsSuggestionsSignalType>, std::__1::allocator<std::__1::pair<const MapsSuggestionsSignalType, MSg::Signal> > >;

typedef struct SignalPack {
	unordered_map<MapsSuggestionsSignalType, MSg::Signal, std::__1::hash<MapsSuggestionsSignalType>, std::__1::equal_to<MapsSuggestionsSignalType>, std::__1::allocator<std::__1::pair<const MapsSuggestionsSignalType, MSg::Signal> > > dict_;
} SignalPack;

typedef struct _compressed_pair<MapsSuggestionsEntryType *, std::__1::allocator<MapsSuggestionsEntryType> > {
	long long __value_;
} compressed_pair<MapsSuggestionsEntryType *, std::__1::allocator<MapsSuggestionsEntryType> >;

typedef struct vector<MapsSuggestionsEntryType, std::__1::allocator<MapsSuggestionsEntryType> > {
	long long __begin_;
	long long __end_;
	compressed_pair<MapsSuggestionsEntryType *, std::__1::allocator<MapsSuggestionsEntryType> > __end_cap_;
} vector<MapsSuggestionsEntryType, std::__1::allocator<MapsSuggestionsEntryType> >;

