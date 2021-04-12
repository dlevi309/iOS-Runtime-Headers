/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreServicesStore.framework/CoreServicesStore
*/

typedef struct __CSStore* CSStoreRef;

typedef struct array<unsigned int, 64> {
	unsigned __elems_[64];
} array<unsigned int, 64>;

typedef struct _cxx_atomic_impl<long long, std::__1::__cxx_atomic_base_impl<long long> > {
	Aq __a_value;
} cxx_atomic_impl<long long, std::__1::__cxx_atomic_base_impl<long long> >;

typedef struct optional<unsigned int> {
	/*function pointer*/void* ;
	char __null_state_;
	I) __val_;
	BOOL __engaged_;
} optional<unsigned int>;

typedef struct Pedigree {
	unsigned long long family;
	optional<unsigned int> generationAtCopyTime;
} Pedigree;

typedef struct atomic<long long> {
	cxx_atomic_impl<long long, std::__1::__cxx_atomic_base_impl<long long> > __a_;
} atomic<long long>;

typedef struct Store {
	id dataContainer;
	array<unsigned int, 64> tableOffsets;
	Table arrayTable;
	Table stringTable;
	atomic<long long> enumerationState;
	atomic<long long> getNSDataCallCount;
	Pedigree pedigree;
} Store;

typedef struct _NSZone* NSZoneRef;

