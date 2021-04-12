/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

typedef struct objc_ivar* objc_ivarRef;

typedef struct {
	unsigned disallowsAutocomplete : 1;
	unsigned claimsToBeCurrentPasswordViaAutocompleteAttribute : 1;
	unsigned claimsToBeNewPasswordViaAutocompleteAttribute : 1;
	unsigned claimsToBeUsernameViaAutocompleteAttribute : 1;
	unsigned looksLikeCreditCardCardholderField : 1;
	unsigned looksLikeCreditCardCompositeExpirationDateField : 1;
	unsigned looksLikeCreditCardNumberField : 1;
	unsigned looksLikeCreditCardSecurityCodeField : 1;
	unsigned looksLikeCreditCardTypeField : 1;
	unsigned looksLikeDayField : 1;
	unsigned looksLikeMonthField : 1;
	unsigned looksLikeYearField : 1;
	unsigned looksLikeIgnoredDataTypeField : 1;
	unsigned looksLikePasswordCredentialField : 1;
	unsigned looksLikeOneTimeCodeField : 1;
	unsigned visible : 1;
	unsigned active : 1;
	unsigned disabled : 1;
	unsigned readOnly : 1;
	unsigned textField : 1;
	unsigned secureTextField : 1;
	unsigned autoFilledTextField : 1;
	unsigned userEditedTextField : 1;
	unsigned labeledUsernameField : 1;
} SCD_Struct_WB1;

typedef union {
	SCD_Struct_WB1 flags;
	long long asInteger;
} SCD_Union_WB2;

typedef struct _NSZone* NSZoneRef;

typedef struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> > {
	BookmarkAndHistoryCompletionMatch m_ptr;
} RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> >;

typedef struct {
	long long majorVersion;
	long long minorVersion;
	long long patchVersion;
} SCD_Struct_WB5;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
} SCD_Struct_WB6;

typedef struct _compressed_pair<SafariShared::SuddenTerminationDisabler *, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > {
	SuddenTerminationDisabler __value_;
} compressed_pair<SafariShared::SuddenTerminationDisabler *, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> >;

typedef struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > {
	compressed_pair<SafariShared::SuddenTerminationDisabler *, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > __ptr_;
} unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> >;

typedef struct duration<long long, std::__1::ratio<1, 1000000000> > {
	long long __rep_;
} duration<long long, std::__1::ratio<1, 1000000000> >;

typedef struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > {
	duration<long long, std::__1::ratio<1, 1000000000> > __d_;
} time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >;

typedef struct duration<long long, std::__1::ratio<1, 1000> > {
	long long __rep_;
} duration<long long, std::__1::ratio<1, 1000> >;

typedef struct {
	unsigned val[8];
} SCD_Struct_WB12;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_WB13;

typedef struct RetainPtr<_PCSIdentitySetData *> {
	void m_ptr;
} RetainPtr<_PCSIdentitySetData *>;

typedef struct RetainPtr<_OpaquePCSShareProtection *> {
	void m_ptr;
} RetainPtr<_OpaquePCSShareProtection *>;

typedef struct RetainPtr<const __CFData *> {
	void m_ptr;
} RetainPtr<const __CFData *>;

typedef struct __WBSFieldLabelPatternMatcherArray* WBSFieldLabelPatternMatcherArrayRef;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::hash<long long> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::hash<long long> >;

typedef struct _compressed_pair<float, std::__1::equal_to<long long> > {
	float __value_;
} compressed_pair<float, std::__1::equal_to<long long> >;

typedef struct _hash_node_base<std::__1::__hash_node<long long, void *> *> {
	__hash_node_base<std::__1::__hash_node<long long, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<long long, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *>, std::__1::allocator<std::__1::__hash_node<long long, void *> > > {
	hash_node_base<std::__1::__hash_node<long long, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *>, std::__1::allocator<std::__1::__hash_node<long long, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<long long, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> > >;

typedef struct _hash_table<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *> *>, std::__1::allocator<std::__1::__hash_node<long long, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::hash<long long> > __p2_;
	compressed_pair<float, std::__1::equal_to<long long> > __p3_;
} hash_table<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> >;

typedef struct unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> > {
	hash_table<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> > __table_;
} unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> >;

typedef struct HashTable<OpaqueFormAutoFillFrame *, WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata> > > >, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashMap<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata> >, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata> > > >::KeyValuePairTraits, WTF::HashTraits<OpaqueFormAutoFillFrame *> > {
	KeyValuePair<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata> > > m_table;
} HashTable<OpaqueFormAutoFillFrame *, WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata> > > >, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashMap<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata> >, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata> > > >::KeyValuePairTraits, WTF::HashTraits<OpaqueFormAutoFillFrame *> >;

typedef struct HashMap<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata> >, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata> > > > {
	HashTable<OpaqueFormAutoFillFrame *, WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata> > > >, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashMap<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata> >, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata> > > >::KeyValuePairTraits, WTF::HashTraits<OpaqueFormAutoFillFrame *> > m_impl;
} HashMap<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata> >, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata> > > >;

typedef struct OpaqueJSValue* OpaqueJSValueRef;

typedef struct OpaqueJSContext* OpaqueJSContextRef;

typedef struct _compressed_pair<WBSHistoryItemVisitCountScoresStorage *, std::__1::default_delete<WBSHistoryItemVisitCountScoresStorage> > {
	WBSHistoryItemVisitCountScoresStorage __value_;
} compressed_pair<WBSHistoryItemVisitCountScoresStorage *, std::__1::default_delete<WBSHistoryItemVisitCountScoresStorage> >;

typedef struct unique_ptr<WBSHistoryItemVisitCountScoresStorage, std::__1::default_delete<WBSHistoryItemVisitCountScoresStorage> > {
	compressed_pair<WBSHistoryItemVisitCountScoresStorage *, std::__1::default_delete<WBSHistoryItemVisitCountScoresStorage> > __ptr_;
} unique_ptr<WBSHistoryItemVisitCountScoresStorage, std::__1::default_delete<WBSHistoryItemVisitCountScoresStorage> >;

typedef struct Vector<double, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
	double m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<double, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>;

typedef struct RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > {
	HistoryURLCompletionItem m_ptr;
} RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> >;

typedef struct JSRetainPtr<OpaqueJSContext *> {
	OpaqueJSContext m_ptr;
} JSRetainPtr<OpaqueJSContext *>;

typedef struct _LXLexicon* LXLexiconRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct OpaqueJSScript* OpaqueJSScriptRef;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, WBSHistoryItem *>, std::__1::hash<long long>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, WBSHistoryItem *>, std::__1::hash<long long>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, WBSHistoryItem *>, std::__1::equal_to<long long>, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, WBSHistoryItem *>, std::__1::equal_to<long long>, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<long long, WBSHistoryItem *>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, WBSHistoryItem *>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, WBSHistoryItem *>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, WBSHistoryItem *> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, WBSHistoryItem *>, std::__1::hash<long long>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, WBSHistoryItem *>, std::__1::equal_to<long long>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<long long, WBSHistoryItem *>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, WBSHistoryItem *>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, WBSHistoryItem *>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, WBSHistoryItem *> > >;

typedef struct unordered_map<long long, WBSHistoryItem *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, WBSHistoryItem *> > > {
	hash_table<std::__1::__hash_value_type<long long, WBSHistoryItem *>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, WBSHistoryItem *>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, WBSHistoryItem *>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, WBSHistoryItem *> > > __table_;
} unordered_map<long long, WBSHistoryItem *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, WBSHistoryItem *> > >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::__1::hash<long long>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::__1::hash<long long>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::__1::equal_to<long long>, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::__1::equal_to<long long>, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::__1::hash<long long>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::__1::equal_to<long long>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak> > >;

typedef struct unordered_map<long long, WBSHistoryVisit *__weak, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, WBSHistoryVisit *__weak> > > {
	hash_table<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak> > > __table_;
} unordered_map<long long, WBSHistoryVisit *__weak, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, WBSHistoryVisit *__weak> > >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, long long>, std::__1::hash<long long>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, long long>, std::__1::hash<long long>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, long long>, std::__1::equal_to<long long>, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, long long>, std::__1::equal_to<long long>, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<long long, long long>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, long long>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, long long>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, long long> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, long long>, std::__1::hash<long long>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, long long>, std::__1::equal_to<long long>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<long long, long long>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, long long>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, long long>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, long long> > >;

typedef struct unordered_map<long long, long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, long long> > > {
	hash_table<std::__1::__hash_value_type<long long, long long>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, long long>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, long long>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, long long> > > __table_;
} unordered_map<long long, long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, long long> > >;

typedef struct __SecTrust* SecTrustRef;

typedef struct _cxx_atomic_impl<LoadingStatus, std::__1::__cxx_atomic_base_impl<LoadingStatus> > {
	Aq __a_value;
} cxx_atomic_impl<LoadingStatus, std::__1::__cxx_atomic_base_impl<LoadingStatus> >;

typedef struct atomic<LoadingStatus> {
	cxx_atomic_impl<LoadingStatus, std::__1::__cxx_atomic_base_impl<LoadingStatus> > __a_;
} atomic<LoadingStatus>;

typedef struct {
	int webProcessID;
	unsigned long long tabID;
} SCD_Struct_WB73;

typedef struct Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
	id m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>;

typedef struct _compressed_pair<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> >, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > > > *, std::__1::default_delete<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> >, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > > > > > {
	vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> >, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > > > __value_;
} compressed_pair<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> >, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > > > *, std::__1::default_delete<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> >, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > > > > >;

typedef struct unique_ptr<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> >, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > > >, std::__1::default_delete<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> >, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > > > > > {
	compressed_pair<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> >, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > > > *, std::__1::default_delete<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> >, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > > > > > __ptr_;
} unique_ptr<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> >, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > > >, std::__1::default_delete<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> >, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > > > > >;

typedef struct {
	unsigned short field1[27];
} SCD_Struct_WB77;

typedef struct {
	unsigned short field1;
	unsigned short field2;
} SCD_Struct_WB78;

typedef struct {
	SCD_Struct_WB78 field1[32];
	unsigned long long field2;
} SCD_Struct_WB79;

