/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
*/


@class NSObject<OS_dispatch_queue>, NSXMLParser, NSURL, RBDisplayList, RBShape, RBFill, NSError, RBDevice, NSObject<OS_dispatch_semaphore>, <MTLDevice>;

typedef struct RBShapeData {
	int type;
	unsigned char data[144];
} RBShapeData;

typedef struct InlineHeap<256> {
	unsigned long long _page_size;
	Page _pages;
	char* _sbrk;
	unsigned long long _avail;
	unsigned char _buffer[256];
} InlineHeap<256>;

typedef struct CGPath* CGPathRef;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
} SCD_Struct_RB3;

typedef struct CGFont* CGFontRef;

typedef struct refcounted_ptr<RB::Device> {
	Device _p;
} refcounted_ptr<RB::Device>;

typedef struct objc_ptr<NSObject<OS_dispatch_queue> *> {
	NSObject<OS_dispatch_queue>* _p;
} objc_ptr<NSObject<OS_dispatch_queue> *>;

typedef struct _cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > {
	AI __a_value;
} cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> >;

typedef struct atomic<unsigned int> {
	cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > __a_;
} atomic<unsigned int>;

typedef struct CGImage* CGImageRef;

typedef struct _NSZone* NSZoneRef;

typedef struct _compressed_pair<RBStrokeElement *, std::__1::allocator<RBStrokeElement> > {
	unsigned char __value_;
} compressed_pair<RBStrokeElement *, std::__1::allocator<RBStrokeElement> >;

typedef struct vector<RBStrokeElement, std::__1::allocator<RBStrokeElement> > {
	unsigned char __begin_;
	unsigned char __end_;
	compressed_pair<RBStrokeElement *, std::__1::allocator<RBStrokeElement> > __end_cap_;
} vector<RBStrokeElement, std::__1::allocator<RBStrokeElement> >;

typedef struct _compressed_pair<float *, std::__1::allocator<float> > {
	float __value_;
} compressed_pair<float *, std::__1::allocator<float> >;

typedef struct vector<float, std::__1::allocator<float> > {
	float __begin_;
	float __end_;
	compressed_pair<float *, std::__1::allocator<float> > __end_cap_;
} vector<float, std::__1::allocator<float> >;

typedef struct cf_ptr<CGImage *> {
	CGImage _p;
} cf_ptr<CGImage *>;

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

typedef struct Heap {
	unsigned long long _page_size;
	Page _pages;
	char* _sbrk;
	unsigned long long _avail;
} Heap;

typedef struct DisplayList {
	Heap _heap;
	Layer _layer;
	State _state;
	State _free_state;
	Clip _all_clips;
	Style _all_styles;
	BOOL _empty;
} DisplayList;

typedef struct cf_ptr<CGContext *> {
	CGContext _p;
} cf_ptr<CGContext *>;

typedef struct CGContext* CGContextRef;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
} SCD_Struct_RB23;

typedef struct _compressed_pair<RB::Drawable *, std::__1::default_delete<RB::Drawable> > {
	Drawable __value_;
} compressed_pair<RB::Drawable *, std::__1::default_delete<RB::Drawable> >;

typedef struct unique_ptr<RB::Drawable, std::__1::default_delete<RB::Drawable> > {
	compressed_pair<RB::Drawable *, std::__1::default_delete<RB::Drawable> > __ptr_;
} unique_ptr<RB::Drawable, std::__1::default_delete<RB::Drawable> >;

typedef struct {
	float red;
	float green;
	float blue;
	float alpha;
} SCD_Struct_RB26;

typedef struct RBFillData {
	int type;
	unsigned char data[136];
} RBFillData;

typedef struct {
	int field1;
	void field2;
} SCD_Struct_RB28;

typedef struct objc_ptr<NSXMLParser *> {
	NSXMLParser* _p;
} objc_ptr<NSXMLParser *>;

typedef struct objc_ptr<NSURL *> {
	NSURL* _p;
} objc_ptr<NSURL *>;

typedef struct objc_ptr<RBDisplayList *> {
	RBDisplayList* _p;
} objc_ptr<RBDisplayList *>;

typedef struct objc_ptr<RBShape *> {
	RBShape* _p;
} objc_ptr<RBShape *>;

typedef struct objc_ptr<RBFill *> {
	RBFill* _p;
} objc_ptr<RBFill *>;

typedef struct objc_ptr<NSError *> {
	NSError* _p;
} objc_ptr<NSError *>;

typedef struct _long {
	char* __data_;
	unsigned long long __size_;
	unsigned long long __cap_;
} long;

typedef struct _raw {
	unsigned long long __words[3];
} raw;

typedef struct _short {
	char __data_[23];
	compressed_pair<RBStrokeElement *, std::__1::allocator<RBStrokeElement> > ;
} short;

typedef struct _rep {
	/*function pointer*/void* ;
	long __l;
	short __s;
	const aw) __r;
} rep;

typedef struct _compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > {
	const ep __value_;
} compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >;

typedef struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {
	compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > __r_;
} basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >;

typedef struct cf_ptr<__CFDictionary *> {
	__CFDictionary _p;
} cf_ptr<__CFDictionary *>;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<RB::XMLRecorder::Element *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<RB::XMLRecorder::Element *> >;

typedef struct refcounted_ptr<RB::XMLRecorder::Element> {
	Element _p;
} refcounted_ptr<RB::XMLRecorder::Element>;

typedef struct _compressed_pair<RB::XMLRecorder::Element ***, std::__1::allocator<RB::XMLRecorder::Element **> > {
	Element __value_;
} compressed_pair<RB::XMLRecorder::Element ***, std::__1::allocator<RB::XMLRecorder::Element **> >;

typedef struct _split_buffer<RB::XMLRecorder::Element **, std::__1::allocator<RB::XMLRecorder::Element **> > {
	Element __first_;
	Element __begin_;
	Element __end_;
	compressed_pair<RB::XMLRecorder::Element ***, std::__1::allocator<RB::XMLRecorder::Element **> > __end_cap_;
} split_buffer<RB::XMLRecorder::Element **, std::__1::allocator<RB::XMLRecorder::Element **> >;

typedef struct deque<RB::XMLRecorder::Element *, std::__1::allocator<RB::XMLRecorder::Element *> > {
	split_buffer<RB::XMLRecorder::Element **, std::__1::allocator<RB::XMLRecorder::Element **> > __map_;
	unsigned long long __start_;
	compressed_pair<unsigned long, std::__1::allocator<RB::XMLRecorder::Element *> > __size_;
} deque<RB::XMLRecorder::Element *, std::__1::allocator<RB::XMLRecorder::Element *> >;

typedef struct stack<RB::XMLRecorder::Element *, std::__1::deque<RB::XMLRecorder::Element *, std::__1::allocator<RB::XMLRecorder::Element *> > > {
	deque<RB::XMLRecorder::Element *, std::__1::allocator<RB::XMLRecorder::Element *> > c;
} stack<RB::XMLRecorder::Element *, std::__1::deque<RB::XMLRecorder::Element *, std::__1::allocator<RB::XMLRecorder::Element *> > >;

typedef struct Tree {
	const efcounted_ptr<RB::XMLRecorder::Element> _root;
	stack<RB::XMLRecorder::Element *, std::__1::deque<RB::XMLRecorder::Element *, std::__1::allocator<RB::XMLRecorder::Element *> > > _stack;
} Tree;

typedef struct _compressed_pair<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > *, std::__1::allocator<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > > > {
	pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > __value_;
} compressed_pair<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > *, std::__1::allocator<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > > >;

typedef struct vector<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> >, std::__1::allocator<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > > > {
	pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > __begin_;
	pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > __end_;
	compressed_pair<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > *, std::__1::allocator<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > > > __end_cap_;
} vector<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> >, std::__1::allocator<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > > >;

typedef struct objc_ptr<RBDevice *> {
	RBDevice* _p;
} objc_ptr<RBDevice *>;

typedef struct objc_ptr<NSObject<OS_dispatch_semaphore> *> {
	NSObject<OS_dispatch_semaphore>* _p;
} objc_ptr<NSObject<OS_dispatch_semaphore> *>;

typedef struct cf_ptr<_CAImageQueue *> {
	_CAImageQueue _p;
} cf_ptr<_CAImageQueue *>;

typedef struct _compressed_pair<RB::refcounted_ptr<(anonymous namespace)::Surface> *, std::__1::allocator<RB::refcounted_ptr<(anonymous namespace)::Surface> > > {
	const efcounted_ptr<(anonymous namespace)::Surface> __value_;
} compressed_pair<RB::refcounted_ptr<(anonymous namespace)::Surface> *, std::__1::allocator<RB::refcounted_ptr<(anonymous namespace)::Surface> > >;

typedef struct vector<RB::refcounted_ptr<(anonymous namespace)::Surface>, std::__1::allocator<RB::refcounted_ptr<(anonymous namespace)::Surface> > > {
	const efcounted_ptr<(anonymous namespace)::Surface> __begin_;
	const efcounted_ptr<(anonymous namespace)::Surface> __end_;
	compressed_pair<RB::refcounted_ptr<(anonymous namespace)::Surface> *, std::__1::allocator<RB::refcounted_ptr<(anonymous namespace)::Surface> > > __end_cap_;
} vector<RB::refcounted_ptr<(anonymous namespace)::Surface>, std::__1::allocator<RB::refcounted_ptr<(anonymous namespace)::Surface> > >;

typedef struct objc_ptr<id<MTLDevice> > {
	<MTLDevice>* _p;
} objc_ptr<id<MTLDevice> >;

typedef struct refcounted_ptr<RB::Texture> {
	Texture _p;
} refcounted_ptr<RB::Texture>;

typedef struct Bounds {
	int x;
	int y;
	int w;
	int h;
} Bounds;

