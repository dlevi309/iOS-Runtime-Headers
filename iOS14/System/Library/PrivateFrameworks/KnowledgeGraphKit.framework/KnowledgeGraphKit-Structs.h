/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

typedef struct _NSZone* NSZoneRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _compressed_pair<degas::BitsetPtr *, std::__1::allocator<degas::BitsetPtr> > {
	BitsetPtr __value_;
} compressed_pair<degas::BitsetPtr *, std::__1::allocator<degas::BitsetPtr> >;

typedef struct vector<degas::BitsetPtr, std::__1::allocator<degas::BitsetPtr> > {
	BitsetPtr __begin_;
	BitsetPtr __end_;
	compressed_pair<degas::BitsetPtr *, std::__1::allocator<degas::BitsetPtr> > __end_cap_;
} vector<degas::BitsetPtr, std::__1::allocator<degas::BitsetPtr> >;

typedef struct Bitmap {
	unsigned long long _bitCount;
	unsigned long long _lastOffsetFoundAt;
	vector<degas::BitsetPtr, std::__1::allocator<degas::BitsetPtr> > _bitSets;
	BOOL _dirty;
} Bitmap;

