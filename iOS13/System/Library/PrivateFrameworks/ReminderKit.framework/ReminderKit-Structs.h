/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

typedef struct _NSZone* NSZoneRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _compressed_pair<CRDT::Document_DocObject **, std::__1::allocator<CRDT::Document_DocObject *> > {
	Document_DocObject __value_;
} compressed_pair<CRDT::Document_DocObject **, std::__1::allocator<CRDT::Document_DocObject *> >;

typedef struct vector<CRDT::Document_DocObject *, std::__1::allocator<CRDT::Document_DocObject *> > {
	Document_DocObject __begin_;
	Document_DocObject __end_;
	compressed_pair<CRDT::Document_DocObject **, std::__1::allocator<CRDT::Document_DocObject *> > __end_cap_;
} vector<CRDT::Document_DocObject *, std::__1::allocator<CRDT::Document_DocObject *> >;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_CR4;

typedef struct _compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > {
	TopoSubstring __value_;
} compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> >;

typedef struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > {
	TopoSubstring __begin_;
	TopoSubstring __end_;
	compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > __end_cap_;
} vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> >;

typedef struct _compressed_pair<std::__1::pair<TopoID, TopoID> *, std::__1::allocator<std::__1::pair<TopoID, TopoID> > > {
	pair<TopoID, TopoID> __value_;
} compressed_pair<std::__1::pair<TopoID, TopoID> *, std::__1::allocator<std::__1::pair<TopoID, TopoID> > >;

typedef struct vector<std::__1::pair<TopoID, TopoID>, std::__1::allocator<std::__1::pair<TopoID, TopoID> > > {
	pair<TopoID, TopoID> __begin_;
	pair<TopoID, TopoID> __end_;
	compressed_pair<std::__1::pair<TopoID, TopoID> *, std::__1::allocator<std::__1::pair<TopoID, TopoID> > > __end_cap_;
} vector<std::__1::pair<TopoID, TopoID>, std::__1::allocator<std::__1::pair<TopoID, TopoID> > >;

typedef struct vector<_NSRange, std::__1::allocator<_NSRange> >* vector<_NSRange, std::__1::allocator<_NSRange> >Ref;
