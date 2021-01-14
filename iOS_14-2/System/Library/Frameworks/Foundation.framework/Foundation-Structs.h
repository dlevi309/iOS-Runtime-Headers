/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSData, NSDate, NSOperation, NSOperationQueue, NSMutableArray, NSHashTable, NSObject<OS_voucher>, _NSOperationQueueProgress, NSPointerArray, NSObject<OS_dispatch_queue>, NSString, NSObject, NSIndexSet, NSObject<OS_xpc_object>, OS_xpc_remote_connection;

typedef struct {
	unsigned val[8];
} SCD_Struct_NS0;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	double m11;
	double m12;
	double m21;
	double m22;
	double tX;
	double tY;
} SCD_Struct_NS2;

typedef struct {
	unsigned attributeFixingDisabled : 8;
	unsigned  : 24;
} SCD_Struct_NS3;

typedef struct NSSimpleAttributeDictionaryElement {
	unsigned long long hash;
	id key;
	id value;
} NSSimpleAttributeDictionaryElement;

typedef struct {
	NSData* data;
	char* dataBytes;
} SCD_Struct_NS5;

typedef struct {
	__CFStorage storage;
} SCD_Struct_NS6;

typedef union {
	SCD_Struct_NS5 d;
	SCD_Struct_NS6 s;
} SCD_Union_NS7;

typedef struct __CFStorage* CFStorageRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __CFBundle* CFBundleRef;

typedef struct __CFCharacterSet* CFCharacterSetRef;

typedef const struct _xpc_type_s* xpc_type_sRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	char* dst_ptr;
	unsigned long long dst_size;
	char* src_ptr;
	unsigned long long src_size;
	void state;
} SCD_Struct_NS14;

typedef struct __CFDateFormatter* CFDateFormatterRef;

typedef struct {
	unsigned field1 : 8;
	unsigned field2 : 4;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 18;
	unsigned short field6[8];
} SCD_Struct_NS16;

typedef struct __CFString* CFStringRef;

typedef struct timespec {
	long long tv_sec;
	long long tv_nsec;
} timespec;

typedef struct stat {
	int st_dev;
	unsigned short st_mode;
	unsigned short st_nlink;
	unsigned long long st_ino;
	unsigned st_uid;
	unsigned st_gid;
	int st_rdev;
	timespec st_atimespec;
	timespec st_mtimespec;
	timespec st_ctimespec;
	timespec st_birthtimespec;
	long long st_size;
	long long st_blocks;
	int st_blksize;
	unsigned st_flags;
	unsigned st_gen;
	int st_lspare;
	long long st_qspare[2];
} stat;

typedef struct fields {
	unsigned extensionHidden : 1;
	unsigned creationDate : 1;
	unsigned reserved : 30;
} fields;

typedef struct {
	BOOL extensionHidden;
	NSDate* creationDate;
	fields validFields;
} SCD_Struct_NS21;

typedef struct {
	BOOL field1;
	id field2;
	_ field3;
	fields field4;
} SCD_Struct_NS22;

typedef struct __CFURLEnumerator* CFURLEnumeratorRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_NS24;

typedef struct NSSlice {
	void items;
	BOOL wantsStrong;
	BOOL wantsWeak;
	BOOL wantsARC;
	BOOL shouldCopyIn;
	BOOL usesStrong;
	BOOL usesWeak;
	BOOL usesARC;
	BOOL usesSentinel;
	BOOL pointerPersonality;
	BOOL integerPersonality;
	BOOL simpleReadClear;
	/*function pointer*/void* sizeFunction;
	/*function pointer*/void* hashFunction;
	/*function pointer*/void* isEqualFunction;
	/*function pointer*/void* describeFunction;
	/*function pointer*/void* acquireFunction;
	/*function pointer*/void* relinquishFunction;
	/*function pointer*/void* allocateFunction;
	/*function pointer*/void* freeFunction;
	/*function pointer*/void* readAt;
	/*function pointer*/void* clearAt;
	/*function pointer*/void* storeAt;
} NSSlice;

typedef struct {
	/*function pointer*/void* hash;
	/*function pointer*/void* isEqual;
	/*function pointer*/void* retain;
	/*function pointer*/void* release;
	/*function pointer*/void* describe;
} SCD_Struct_NS26;

typedef struct __CFBasicHash* CFBasicHashRef;

typedef struct {
	long long field1;
	long long field2;
	long long field3;
	long long field4;
	unsigned long long field5;
	long long field6;
	long long field7;
	long long field8;
	long long field9;
	long long field10;
	long long field11;
	long long field12;
	long long field13;
	long long field14;
	long long field15;
	long long field16;
	long long field17;
	long long field18;
	long long field19;
	BOOL field20;
	BOOL field21;
	BOOL field22;
} SCD_Struct_NS28;

typedef struct {
	long long usage;
	long long sensitivity;
	long long partOfSpeech;
	unsigned long long genders;
} SCD_Struct_NS29;

typedef struct {
	long long usage;
	long long sensitivity;
	long long person;
	long long partOfSpeech;
	unsigned long long genders;
	long long number;
	long long mood;
	long long tense;
	long long aspect;
	long long verbForm;
	long long grammaticalCase;
	long long deictic;
	long long affixType;
	long long determinationType;
	long long politeness;
	long long directObjectGender;
	long long directObjectNumber;
	long long indirectObjectNumber;
	long long indirectObjectPerson;
	BOOL isAbbreviation;
	BOOL isNotToBeSuggested;
	BOOL isNoncapitalizable;
} SCD_Struct_NS30;

typedef struct {
	void _data;
	void _reserved;
} SCD_Struct_NS31;

typedef struct {
	NSRange _range;
} SCD_Struct_NS32;

typedef union {
	SCD_Struct_NS32 _singleRange;
	SCD_Struct_NS31 _multipleRanges;
} SCD_Union_NS33;

typedef struct __CFListFormatter* CFListFormatterRef;

typedef struct objc_method* objc_methodRef;

typedef struct objc_ivar* objc_ivarRef;

typedef struct {
	id field1;
	id field2;
} SCD_Struct_NS37;

typedef struct {
	Class field1;
	Class field2;
	__CFSet field3;
	_ field4;
	_ field5;
	void* field6;
	_ field7;
	o field8;
	p field9;
	a field10;
	long long field11;
	u field12;
	e field13;
	_ field14;
	p field15;
	t field16;
	h field17;
	const  field18;
	e field19;
	a field20;
	double field21;
	_ field22;
	m field23;
	u field24;
	t field25;
	e field26;
	x field27;
	_ field28;
	t field29;
	BOOL field30;
} SCD_Struct_NS38;

typedef struct __CFRelativeDateTimeFormatter* CFRelativeDateTimeFormatterRef;

typedef struct __CFSet* CFSetRef;

typedef struct __CFReadStream* CFReadStreamRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct {
	/*function pointer*/void* hash;
	/*function pointer*/void* isEqual;
	/*function pointer*/void* retain;
	/*function pointer*/void* release;
	/*function pointer*/void* describe;
	void notAKeyMarker;
} SCD_Struct_NS44;

typedef struct {
	/*function pointer*/void* retain;
	/*function pointer*/void* release;
	/*function pointer*/void* describe;
} SCD_Struct_NS45;

typedef struct {
	id field1;
	void field2;
	long long field3;
} SCD_Struct_NS46;

typedef union {
	unsigned short fat;
	char* thin;
} SCD_Union_NS47;

typedef struct __CFNotificationCenter* CFNotificationCenterRef;

typedef struct __CFNumberFormatter* CFNumberFormatterRef;

typedef struct opaque_pthread_cond_t {
	long long __sig;
	char __opaque[40];
} opaque_pthread_cond_t;

typedef struct {
	NSOperation* __prevOp;
	NSOperation* __nextOp;
	NSOperation* __nextPriOp;
	NSOperationQueue* __queue;
	NSMutableArray* __dependencies;
	NSHashTable* __down_dependencies;
	long long __unfinished_deps;
	id __completion;
	__obsInfo ;
	__implicitObsInfo v;
	__thread_prio v;
	__nameBuffer d;
	_voucher *;
	__schedule ^NSObject<OS_voucher>;
	__wait_mutex @?;
	__wait_cond opaque_pthread_mutex_t;
	__lock opaque_pthread_cond_t;
	_shouldRemoveDependenciesAfterFinish os_unfair_lock_s;
	__state B;
	__prio AC;
	__cached_isReady c;
	__isCancelled AB;
	__propertyQoS AB;
	__isExecutingObserverCount AC;
	__isFinishedObserverCount AC;
	__isReadyObserverCount AC;
	__isCancelledObserverCount AC;
} SCD_Struct_NS51;

typedef struct {
	os_unfair_lock_s __queueLock;
	NSOperation* __firstOperation;
	NSOperation* __lastOperation;
	NSOperation* __firstPriOperation[6];
	NSOperation* __lastPriOperation[6];
	NSMutableArray* _barriers;
	_NSOperationQueueProgress* _progress;
	AQ __operationCount;
	NSPointerArray* __activeThreads;
	long long __maxNumOps;
	int __actualMaxNumOps;
	int __numExecOps;
	NSObject<OS_dispatch_queue>* __dispatch_queue;
	NSObject<OS_dispatch_queue>* __backingQueue;
	NSString* __name;
	char __nameBuffer[300];
	AB __suspended;
	AB __overcommit;
	AC __propertyQoS;
	AC __operationsObserverCount;
	AC __operationCountObserverCount;
	AC __progressReporting;
	unsigned char __mainQ;
} SCD_Struct_NS52;

typedef struct {
	_NSOrderedChange buffer;
	unsigned long long availableIndex;
	unsigned long long capacity;
	unsigned long long changesIndex;
	unsigned long long lastIndex;
	unsigned long long count;
} SCD_Struct_NS53;

typedef struct {
	id objects;
	BOOL isMutable;
	SCD_Struct_NS53 list;
} SCD_Struct_NS54;

typedef struct __CFLocale* CFLocaleRef;

typedef struct {
	long long field1;
	long long field2;
	long long field3;
} SCD_Struct_NS56;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct {
	long long field1;
	void field2;
	/*function pointer*/void* field3;
	/*function pointer*/void* field4;
	/*function pointer*/void* field5;
} SCD_Struct_NS58;

typedef struct opaque_pthread_attr_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_attr_t;

typedef struct pthread_override_s* pthread_override_sRef;

typedef struct __CFURLComponents* CFURLComponentsRef;

typedef struct {
	unsigned long long kind;
	NSObject* oldValue;
	NSObject* newValue;
	NSIndexSet* indexes;
	id extraData;
} SCD_Struct_NS62;

typedef struct {
	unsigned long long field1;
	id field2;
	id field3;
	id field4;
	id field5;
} SCD_Struct_NS63;

typedef struct UAMeasureFormat* UAMeasureFormatRef;

typedef struct UPluralRules* UPluralRulesRef;

typedef struct InodeDevPair {
	int dev;
	unsigned long long inode;
} InodeDevPair;

typedef struct __FSEventStream* FSEventStreamRef;

typedef union {
	NSObject<OS_xpc_object>* xpc;
	OS_xpc_remote_connection* remote;
} SCD_Union_NS68;

typedef struct USet* USetRef;

typedef struct {
	unsigned long long collectionSizeOffset[1024];
	long long collectionRecursionIndex;
	unsigned long long dataLen;
	unsigned long long dataSize;
	char* data;
	__CFDictionary _objectReferences;
	__CFDictionary _stringReferences;
	__CFDictionary _asciiReferences;
	BOOL isVM;
	BOOL isStack;
} SCD_Struct_NS70;

typedef struct {
	char* data;
	unsigned long long dataLen;
	__CFDictionary objectReferences;
} SCD_Struct_NS71;

typedef struct {
	unsigned long long offset;
	int type;
} SCD_Struct_NS72;

typedef struct NSProgressFraction {
	long long completed;
	long long total;
	BOOL overflowed;
} NSProgressFraction;
