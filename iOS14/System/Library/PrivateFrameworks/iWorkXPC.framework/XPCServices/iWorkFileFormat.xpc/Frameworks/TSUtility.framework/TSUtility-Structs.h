/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


@class NSString, NSUUID, TSUCustomFormat;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_TS1;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __CFDateFormatter* CFDateFormatterRef;

typedef struct __CFLocale* CFLocaleRef;

typedef struct __CFDate* CFDateRef;

typedef struct __CFString* CFStringRef;

typedef struct __CFArray* CFArrayRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct __CFBundle* CFBundleRef;

typedef struct __CFNumberFormatter* CFNumberFormatterRef;

typedef struct timeval {
	long long tv_sec;
	int tv_usec;
} timeval;

typedef struct TSUOpstat_s {
	BOOL running;
	unsigned long long count;
	timeval min_time;
	timeval max_time;
	timeval total_time;
	timeval last_time;
} TSUOpstat_s;

typedef struct sqlite3* sqlite3Ref;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct __CFSet* CFSetRef;

typedef struct _compressed_pair<std::__1::shared_ptr<TSUStringChunk> *, std::__1::allocator<std::__1::shared_ptr<TSUStringChunk> > > {
	shared_ptr<TSUStringChunk> __value_;
} compressed_pair<std::__1::shared_ptr<TSUStringChunk> *, std::__1::allocator<std::__1::shared_ptr<TSUStringChunk> > >;

typedef struct vector<std::__1::shared_ptr<TSUStringChunk>, std::__1::allocator<std::__1::shared_ptr<TSUStringChunk> > > {
	shared_ptr<TSUStringChunk> __begin_;
	shared_ptr<TSUStringChunk> __end_;
	compressed_pair<std::__1::shared_ptr<TSUStringChunk> *, std::__1::allocator<std::__1::shared_ptr<TSUStringChunk> > > __end_cap_;
} vector<std::__1::shared_ptr<TSUStringChunk>, std::__1::allocator<std::__1::shared_ptr<TSUStringChunk> > >;

typedef struct TSUIndexRange {
	long long _begin;
	long long _end;
} TSUIndexRange;

typedef struct TSUIndexSet {
	unsigned _isEmpty : 1;
	unsigned _hasSingleRange : 1;
	TSUIndexRange _singleRange;
	/*function pointer*/void* _multipleRanges;
} TSUIndexSet;

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

typedef struct CGPath* CGPathRef;

typedef struct {
	unsigned mCurrencyCodeIndex : 16;
	unsigned mDecimalPlaces : 8;
	unsigned mNegativeStyle : 3;
	unsigned mShowThousandsSeparator : 1;
	unsigned mUseAccountingStyle : 1;
} SCD_Struct_TS25;

typedef struct {
	unsigned mFractionAccuracy : 8;
} SCD_Struct_TS26;

typedef struct {
	unsigned mBase : 8;
	unsigned mBasePlaces : 8;
	unsigned mBaseUseMinusSign : 1;
} SCD_Struct_TS27;

typedef struct {
	unsigned mSuppressDateFormat : 1;
	unsigned mSuppressTimeFormat : 1;
	NSString* mDateTimeFormat;
} SCD_Struct_TS28;

typedef struct {
	unsigned mUseAutomaticUnits : 1;
	int mDurationUnitSmallest;
	int mDurationUnitLargest;
	int mDurationStyle;
} SCD_Struct_TS29;

typedef struct {
	NSUUID* mCustomFormatKey;
	TSUCustomFormat* mCustomFormat;
	unsigned mLegacyID;
	unsigned char mAppliedConditionKey;
} SCD_Struct_TS30;

typedef struct {
	unsigned mFormatType;
	/*function pointer*/void* ;
	SCD_Struct_TS25 mNumberFormatStruct;
	SCD_Struct_TS26 mFractionFormatStruct;
	SCD_Struct_TS27 mBaseFormatStruct;
	SCD_Struct_TS28 mDateFormatStruct;
	SCD_Struct_TS29 mDurationFormatStruct;
	SCD_Struct_TS30) mCustomFormatStruct;
} SCD_Struct_TS31;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	id field3;
} SCD_Struct_TS32;

typedef struct {
	id field1;
	id field2;
	unsigned field3;
	unsigned char field4;
} SCD_Struct_TS33;

typedef struct {
	unsigned( field1;
	/*function pointer*/void* field2;
	= field3;
	SCD_Struct_TS25 field4;
	SCD_Struct_TS26 field5;
	SCD_Struct_TS27 field6;
	SCD_Struct_TS29 field7;
	SCD_Struct_TS32 field8;
	SCD_Struct_TS33) field9;
} SCD_Struct_TS34;

typedef struct _cxx_atomic_impl<unsigned long, std::__1::__cxx_atomic_base_impl<unsigned long> > {
	AQ __a_value;
} cxx_atomic_impl<unsigned long, std::__1::__cxx_atomic_base_impl<unsigned long> >;

typedef struct atomic<unsigned long> {
	cxx_atomic_impl<unsigned long, std::__1::__cxx_atomic_base_impl<unsigned long> > __a_;
} atomic<unsigned long>;

typedef struct {
	long long field1;
	/*function pointer*/void* field2;
	/*function pointer*/void* field3;
	/*function pointer*/void* field4;
	/*function pointer*/void* field5;
	/*function pointer*/void* field6;
} SCD_Struct_TS37;

typedef struct {
	long long field1;
	/*function pointer*/void* field2;
	/*function pointer*/void* field3;
	/*function pointer*/void* field4;
	/*function pointer*/void* field5;
} SCD_Struct_TS38;

typedef struct _compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > {
	_NSRange __value_;
} compressed_pair<_NSRange *, std::__1::allocator<_NSRange> >;

typedef struct vector<_NSRange, std::__1::allocator<_NSRange> > {
	_NSRange __begin_;
	_NSRange __end_;
	compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > __end_cap_;
} vector<_NSRange, std::__1::allocator<_NSRange> >;

typedef struct CGImage* CGImageRef;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct CGContext* CGContextRef;

typedef struct _CCCryptor* CCCryptorRef;

typedef struct _xmlTextReader* xmlTextReaderRef;

typedef struct CGDataProvider* CGDataProviderRef;

typedef struct z_stream_s {
	char* next_in;
	unsigned avail_in;
	unsigned long long total_in;
	char* next_out;
	unsigned avail_out;
	unsigned long long total_out;
	char* msg;
	internal_state state;
	/*function pointer*/void* zalloc;
	/*function pointer*/void* zfree;
	void opaque;
	int data_type;
	unsigned long long adler;
	unsigned long long reserved;
} z_stream_s;

typedef struct _compressed_pair<CGRect *, std::__1::allocator<CGRect> > {
	CGRect __value_;
} compressed_pair<CGRect *, std::__1::allocator<CGRect> >;

typedef struct vector<CGRect, std::__1::allocator<CGRect> > {
	CGRect __begin_;
	CGRect __end_;
	compressed_pair<CGRect *, std::__1::allocator<CGRect> > __end_cap_;
} vector<CGRect, std::__1::allocator<CGRect> >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::hash<TSUUUID> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::hash<TSUUUID> >;

typedef struct _compressed_pair<float, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> > > {
	float __value_;
} compressed_pair<float, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> > >;

typedef struct _hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> {
	__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *>, std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> > > {
	hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *>, std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> > >;

typedef struct _hash_table<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *>, std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::hash<TSUUUID> > __p2_;
	compressed_pair<float, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> > > __p3_;
} hash_table<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >;

typedef struct unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > {
	hash_table<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > __table_;
} unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >;

typedef struct {
	char* dst_ptr;
	unsigned long long dst_size;
	char* src_ptr;
	unsigned long long src_size;
	void state;
} SCD_Struct_TS60;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct CGColor* CGColorRef;

typedef struct _compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > {
	UUIDData<TSP::UUIDData> __value_;
} compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >;

typedef struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > {
	UUIDData<TSP::UUIDData> __begin_;
	UUIDData<TSP::UUIDData> __end_;
	compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > __end_cap_;
} vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >;

