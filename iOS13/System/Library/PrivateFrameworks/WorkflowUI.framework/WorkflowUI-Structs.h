/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@class NSString, NSArray, NSSet, <WFVariableProvider>, <WFVariableUIDelegate>, NSAttributedString, UIColor, UIImage, WFVariableString, NSValue, UIFont, <WFTagFieldSuggestionsProvider>;

typedef struct _NSZone* NSZoneRef;

typedef struct SpringSolver<POP::Vector4<double> >* SpringSolver<POP::Vector4<double> >Ref;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *> > > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *> > >;

typedef struct _list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> {
	__list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> __prev_;
	__list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> __next_;
} list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *>;

typedef struct list<std::__1::shared_ptr<POPAnimatorItem>, std::__1::allocator<std::__1::shared_ptr<POPAnimatorItem> > > {
	list_node_base<std::__1::shared_ptr<POPAnimatorItem>, void *> __end_;
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<POPAnimatorItem>, void *> > > __size_alloc_;
} list<std::__1::shared_ptr<POPAnimatorItem>, std::__1::allocator<std::__1::shared_ptr<POPAnimatorItem> > >;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFRunLoopObserver* CFRunLoopObserverRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct {
	id field1;
	id field2;
	/*function pointer*/void* field3;
	id field4;
	/*function pointer*/void* field5;
	double field6;
} SCD_Struct_PO8;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CKTypedComponentAction<> {
	unsigned long long _variant;
	id _target;
	id _scopeHandle;
	 CKComponentScopeHandle;
	SEL _selector;
} CKTypedComponentAction<>;

typedef struct CKTypedComponentAction<WFAction *, WFParameter *> {
	unsigned long long _variant;
	id _target;
	id _scopeHandle;
	 CKComponentScopeHandle;
	SEL _selector;
} CKTypedComponentAction<WFAction *, WFParameter *>;

typedef struct CKTypedComponentAction<WFListEditorDeletionConfirmation *> {
	unsigned long long _variant;
	id _target;
	id _scopeHandle;
	 CKComponentScopeHandle;
	SEL _selector;
} CKTypedComponentAction<WFListEditorDeletionConfirmation *>;

typedef struct WFWrappingStackLayoutComponentStyle {
	unsigned long long direction;
	double spacing;
	unsigned long long alignItems;
	double rowHeight;
} WFWrappingStackLayoutComponentStyle;

typedef struct _compressed_pair<CKComponent *__strong *, std::__1::allocator<CKComponent *> > {
	id __value_;
} compressed_pair<CKComponent *__strong *, std::__1::allocator<CKComponent *> >;

typedef struct vector<CKComponent *, std::__1::allocator<CKComponent *> > {
	id __begin_;
	id __end_;
	compressed_pair<CKComponent *__strong *, std::__1::allocator<CKComponent *> > __end_cap_;
} vector<CKComponent *, std::__1::allocator<CKComponent *> >;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct WFContactFieldAttributes {
	BOOL editable;
	BOOL allowsTextEntry;
	NSString* placeholder;
	long long keyboardType;
	long long textAlignment;
	NSString* textContentType;
	long long autocorrectionType;
	long long autocapitalizationType;
	NSArray* entries;
	NSSet* supportedPersonProperties;
	<WFVariableProvider>* variableProvider;
	<WFVariableUIDelegate>* variableUIDelegate;
	NSSet* allowedVariableTypes;
	BOOL variablesDisabled;
} WFContactFieldAttributes;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	double start;
	double end;
	double dt;
} SCD_Struct_WF21;

typedef struct WFDragVelocitySample {
	CGPoint start;
	CGPoint end;
	double dt;
} WFDragVelocitySample;

typedef struct CKStateConfiguration {
	NSString* title;
	NSAttributedString* attributedTitle;
	UIColor* titleColor;
	UIImage* image;
	UIImage* backgroundImage;
} CKStateConfiguration;

typedef struct array<CKStateConfiguration, 8> {
	CKStateConfiguration __elems_[8];
} array<CKStateConfiguration, 8>;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<CKComponentViewAttribute, std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::__1::hash<CKComponentViewAttribute>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<CKComponentViewAttribute, std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::__1::hash<CKComponentViewAttribute>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<CKComponentViewAttribute, std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::__1::equal_to<CKComponentViewAttribute>, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<CKComponentViewAttribute, std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::__1::equal_to<CKComponentViewAttribute>, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::__1::__unordered_map_hasher<CKComponentViewAttribute, std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::__1::hash<CKComponentViewAttribute>, true>, std::__1::__unordered_map_equal<CKComponentViewAttribute, std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::__1::equal_to<CKComponentViewAttribute>, true>, std::__1::allocator<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue> > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<CKComponentViewAttribute, std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::__1::hash<CKComponentViewAttribute>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<CKComponentViewAttribute, std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::__1::equal_to<CKComponentViewAttribute>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::__1::__unordered_map_hasher<CKComponentViewAttribute, std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::__1::hash<CKComponentViewAttribute>, true>, std::__1::__unordered_map_equal<CKComponentViewAttribute, std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::__1::equal_to<CKComponentViewAttribute>, true>, std::__1::allocator<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue> > >;

typedef struct unordered_map<CKComponentViewAttribute, CKBoxedValue, std::__1::hash<CKComponentViewAttribute>, std::__1::equal_to<CKComponentViewAttribute>, std::__1::allocator<std::__1::pair<const CKComponentViewAttribute, CKBoxedValue> > > {
	hash_table<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::__1::__unordered_map_hasher<CKComponentViewAttribute, std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::__1::hash<CKComponentViewAttribute>, true>, std::__1::__unordered_map_equal<CKComponentViewAttribute, std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue>, std::__1::equal_to<CKComponentViewAttribute>, true>, std::__1::allocator<std::__1::__hash_value_type<CKComponentViewAttribute, CKBoxedValue> > > __table_;
} unordered_map<CKComponentViewAttribute, CKBoxedValue, std::__1::hash<CKComponentViewAttribute>, std::__1::equal_to<CKComponentViewAttribute>, std::__1::allocator<std::__1::pair<const CKComponentViewAttribute, CKBoxedValue> > >;

typedef struct CKTypedComponentAction<bool> {
	unsigned long long _variant;
	id _target;
	id _scopeHandle;
	 CKComponentScopeHandle;
	SEL _selector;
} CKTypedComponentAction<bool>;

typedef struct CKTypedComponentAction<unsigned long> {
	unsigned long long _variant;
	id _target;
	id _scopeHandle;
	 CKComponentScopeHandle;
	SEL _selector;
} CKTypedComponentAction<unsigned long>;

typedef struct WFTextInputAttributes {
	BOOL editable;
	BOOL multiline;
	BOOL secureTextEntry;
	NSString* placeholder;
	long long keyboardType;
	long long textAlignment;
	NSString* textContentType;
	long long autocorrectionType;
	long long autocapitalizationType;
	BOOL smartQuotesDisabled;
	BOOL smartDashesDisabled;
	BOOL becomeFirstResponder;
	WFVariableString* variableString;
	NSValue* selectedRange;
	<WFVariableProvider>* variableProvider;
	<WFVariableUIDelegate>* variableUIDelegate;
	NSSet* allowedVariableTypes;
	BOOL variablesDisabled;
	UIFont* font;
	BOOL throttleUpdates;
	UIEdgeInsets textContainerInset;
	UIColor* textColor;
	UIColor* backgroundColor;
	unsigned long long syntaxHighlightingType;
} WFTextInputAttributes;

typedef struct {
	CGSize field1;
	CGSize field2;
} SCD_Struct_WF38;

typedef struct WFTagFieldAttributes {
	BOOL editable;
	BOOL allowsTextEntry;
	NSString* placeholder;
	long long keyboardType;
	long long textAlignment;
	long long autocorrectionType;
	long long autocapitalizationType;
	NSString* tags;
	NSString* fieldTitle;
	<WFTagFieldSuggestionsProvider>* suggestionsProvider;
	<WFVariableProvider>* variableProvider;
	<WFVariableUIDelegate>* variableUIDelegate;
	NSSet* allowedVariableTypes;
	BOOL variablesDisabled;
} WFTagFieldAttributes;

typedef struct {
	long long curve;
} SCD_Struct_WF40;

typedef struct {
	double initialVelocity;
} SCD_Struct_WF41;

typedef union {
	SCD_Struct_WF40 basic;
	UIEdgeInsets spring;
	SCD_Struct_WF41 defaultSpring;
} SCD_Union_WF42;

typedef struct WFParameterLayoutComponentStyle {
	UIColor* backgroundColor;
	UIColor* highlightedBackgroundColor;
	UIFont* labelFont;
	UIColor* labelColor;
} WFParameterLayoutComponentStyle;

typedef struct WFCompressionResistance {
	int _type;
	double _value;
} WFCompressionResistance;

typedef struct CGContext* CGContextRef;

typedef struct WFNumberFieldAttributes {
	BOOL editable;
	NSString* placeholder;
	long long textAlignment;
	BOOL becomeFirstResponder;
	NSString* text;
	BOOL allowsDecimalNumbers;
	BOOL allowsNegatingNumbers;
	<WFVariableProvider>* variableProvider;
	<WFVariableUIDelegate>* variableUIDelegate;
	NSSet* allowedVariableTypes;
	BOOL variablesDisabled;
} WFNumberFieldAttributes;

typedef struct CKTypedComponentAction<WFModuleOutputModel *> {
	unsigned long long _variant;
	id _target;
	id _scopeHandle;
	 CKComponentScopeHandle;
	SEL _selector;
} CKTypedComponentAction<WFModuleOutputModel *>;

typedef struct CKTypedComponentAction<NSString *> {
	unsigned long long _variant;
	id _target;
	id _scopeHandle;
	 CKComponentScopeHandle;
	SEL _selector;
} CKTypedComponentAction<NSString *>;

