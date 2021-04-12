/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
	BOOL field5;
} SCD_Struct_MK1;

typedef struct CLLocationCoordinate2D {
	double latitude;
	double longitude;
} CLLocationCoordinate2D;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct {
	CGSize origin;
	CGSize size;
} SCD_Struct_MK6;

typedef struct {
	unsigned field1;
	void field2;
} SCD_Struct_MK7;

typedef struct {
	CGSize field1;
	CLLocationCoordinate2D field2;
} SCD_Struct_MK8;

typedef struct {
	double field1;
	CLLocationCoordinate2D field2;
} SCD_Struct_MK9;

typedef struct {
	BOOL field1;
} SCD_Struct_MK10;

typedef struct _NSZone* NSZoneRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	CLLocationCoordinate2D center;
	CGSize span;
} SCD_Struct_MK13;

typedef struct {
	CGPoint origin;
	CGPoint offset;
	long long position;
	CGPoint desiredPoint;
	CGRect desiredBounds;
} SCD_Struct_MK14;

typedef struct CGImage* CGImageRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct CGPath* CGPathRef;

typedef struct CGContext* CGContextRef;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
} SCD_Struct_MK19;

typedef struct {
	BOOL abbreviatedUnits;
	long long distanceDetailLevel;
	BOOL spoken;
	BOOL dropTimestampAMPM;
	BOOL rightToLeft;
	double referenceDate;
} SCD_Struct_MK20;

typedef struct CGColor* CGColorRef;

typedef struct {
	unsigned char timePeriod;
	unsigned char overlayType;
	unsigned char applicationState;
	unsigned char searchResultsType;
	BOOL mapHasLabels;
} SCD_Struct_MK22;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::hash<_MKAnnotationViewPair> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::hash<_MKAnnotationViewPair> >;

typedef struct _compressed_pair<float, std::__1::equal_to<_MKAnnotationViewPair> > {
	float __value_;
} compressed_pair<float, std::__1::equal_to<_MKAnnotationViewPair> >;

typedef struct _hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> {
	__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *>, std::__1::allocator<std::__1::__hash_node<_MKAnnotationViewPair, void *> > > {
	hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *>, std::__1::allocator<std::__1::__hash_node<_MKAnnotationViewPair, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *> > >;

typedef struct _hash_table<_MKAnnotationViewPair, std::__1::hash<_MKAnnotationViewPair>, std::__1::equal_to<_MKAnnotationViewPair>, std::__1::allocator<_MKAnnotationViewPair> > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *> *>, std::__1::allocator<std::__1::__hash_node<_MKAnnotationViewPair, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::hash<_MKAnnotationViewPair> > __p2_;
	compressed_pair<float, std::__1::equal_to<_MKAnnotationViewPair> > __p3_;
} hash_table<_MKAnnotationViewPair, std::__1::hash<_MKAnnotationViewPair>, std::__1::equal_to<_MKAnnotationViewPair>, std::__1::allocator<_MKAnnotationViewPair> >;

typedef struct unordered_set<_MKAnnotationViewPair, std::__1::hash<_MKAnnotationViewPair>, std::__1::equal_to<_MKAnnotationViewPair>, std::__1::allocator<_MKAnnotationViewPair> > {
	hash_table<_MKAnnotationViewPair, std::__1::hash<_MKAnnotationViewPair>, std::__1::equal_to<_MKAnnotationViewPair>, std::__1::allocator<_MKAnnotationViewPair> > __table_;
} unordered_set<_MKAnnotationViewPair, std::__1::hash<_MKAnnotationViewPair>, std::__1::equal_to<_MKAnnotationViewPair>, std::__1::allocator<_MKAnnotationViewPair> >;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_MK33;

typedef struct _compressed_pair<MKAnnotationView **, std::__1::allocator<MKAnnotationView *> > {
	id __value_;
} compressed_pair<MKAnnotationView **, std::__1::allocator<MKAnnotationView *> >;

typedef struct vector<MKAnnotationView *, std::__1::allocator<MKAnnotationView *> > {
	id __begin_;
	id __end_;
	compressed_pair<MKAnnotationView **, std::__1::allocator<MKAnnotationView *> > __end_cap_;
} vector<MKAnnotationView *, std::__1::allocator<MKAnnotationView *> >;

typedef struct __CTLine* CTLineRef;

typedef struct GEOOnce_s {
	os_unfair_lock_s lock;
	BOOL didRun;
} GEOOnce_s;

typedef struct UIOffset {
	double horizontal;
	double vertical;
} UIOffset;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct {
	long long field1;
	CLLocationCoordinate2D field2;
	CGPoint field3;
	CGPoint field4;
	id field5;
	BOOL field6;
} SCD_Struct_MK40;

typedef struct {
	long long field1;
	long long field2;
	long long field3;
	double field4;
} SCD_Struct_MK41;

typedef struct {
	long long x;
	long long y;
	long long z;
	double contentScaleFactor;
} SCD_Struct_MK42;

typedef struct GEOStandardTileKey {
	unsigned reserved : 40;
	unsigned z : 6;
	unsigned x : 26;
	unsigned y : 26;
	unsigned type : 14;
	unsigned pixelSize : 4;
	unsigned textScale : 4;
} GEOStandardTileKey;

typedef struct GEORegionalResourceKey {
	unsigned index : 32;
	unsigned scenarios : 8;
	unsigned type : 6;
	unsigned pixelSize : 8;
	unsigned textScale : 8;
} GEORegionalResourceKey;

typedef struct GEOSputnikMetadataKey {
	unsigned part : 32;
	unsigned region : 24;
	unsigned type : 14;
	unsigned pixelSize : 8;
} GEOSputnikMetadataKey;

typedef struct GEOFlyoverKey {
	unsigned z : 6;
	unsigned x : 26;
	unsigned y : 26;
	unsigned h : 8;
	unsigned region : 24;
	unsigned type : 14;
	unsigned pixelSize : 8;
	unsigned textScale : 8;
} GEOFlyoverKey;

typedef struct GEOTransitLineSelectionKey {
	unsigned z : 6;
	unsigned x : 25;
	unsigned y : 25;
	unsigned muid : 64;
} GEOTransitLineSelectionKey;

typedef struct GEOTileOverlayKey {
	unsigned z : 6;
	unsigned x : 26;
	unsigned y : 26;
	unsigned contentScale : 8;
	unsigned providerId : 32;
} GEOTileOverlayKey;

typedef struct GEOIdentifiedResourceKey {
	unsigned identifier;
	unsigned char levelOfDetail;
	unsigned char type;
} GEOIdentifiedResourceKey;

typedef struct GEOMuninMeshKey {
	unsigned pointId : 64;
	unsigned buildId : 32;
	unsigned bucketId : 16;
	unsigned cameraId : 5;
	unsigned lod : 3;
} GEOMuninMeshKey;

typedef struct GEOTileKey {
	unsigned provider : 7;
	unsigned expires : 1;
	/*function pointer*/void* ;
	GEOStandardTileKey standard;
	GEORegionalResourceKey regional;
	GEOSputnikMetadataKey sputnikMetadata;
	GEOFlyoverKey flyover;
	GEOTransitLineSelectionKey transitLineSelection;
	GEOTileOverlayKey tileOverlay;
	GEOIdentifiedResourceKey identifiedResource;
	GEOMuninMeshKey) muninMesh;
} GEOTileKey;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> > > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> > >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::__unordered_map_hasher<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true>, std::__1::__unordered_map_equal<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true>, std::__1::allocator<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> > > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true> > __p3_;
} hash_table<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::__unordered_map_hasher<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true>, std::__1::__unordered_map_equal<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true>, std::__1::allocator<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> > > >;

typedef struct unordered_map<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<const geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> > > > {
	hash_table<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::__unordered_map_hasher<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true>, std::__1::__unordered_map_equal<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true>, std::__1::allocator<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> > > > __table_;
} unordered_map<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<const geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> > > >;

typedef struct _list_node_base<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> {
	__list_node_base<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> __prev_;
	__list_node_base<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> __next_;
} list_node_base<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>;

typedef struct list<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, std::__1::allocator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr> > > {
	list_node_base<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> __end_;
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> > > __size_alloc_;
} list<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, std::__1::allocator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr> > >;

typedef struct mutex {
	opaque_pthread_mutex_t __m_;
} mutex;

typedef struct GEOGenericContainer<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> {
	mutex _lock;
	list<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, std::__1::allocator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr> > > _list;
	unordered_map<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<const geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> > > > _map;
	unsigned long long _maxCapacity;
	unsigned long long _maxCost;
	unsigned long long _currentCost;
	unsigned long long _currentCount;
} GEOGenericContainer<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type>;

typedef struct GEOGenericContainer<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, geo::GEOGenericContainerStrongReferenceTag, 64, 2097152, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> {
	mutex _lock;
	list<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, std::__1::allocator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr> > > _list;
	unordered_map<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<const geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> > > > _map;
	unsigned long long _maxCapacity;
	unsigned long long _maxCost;
	unsigned long long _currentCost;
	unsigned long long _currentCount;
} GEOGenericContainer<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, geo::GEOGenericContainerStrongReferenceTag, 64, 2097152, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type>;

typedef struct __IOHIDEventSystemClient* IOHIDEventSystemClientRef;

typedef struct _compressed_pair<double **, std::__1::allocator<double *> > {
	double __value_;
} compressed_pair<double **, std::__1::allocator<double *> >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<double> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<double> >;

typedef struct _split_buffer<double *, std::__1::allocator<double *> > {
	double __first_;
	double __begin_;
	double __end_;
	compressed_pair<double **, std::__1::allocator<double *> > __end_cap_;
} split_buffer<double *, std::__1::allocator<double *> >;

typedef struct deque<double, std::__1::allocator<double> > {
	split_buffer<double *, std::__1::allocator<double *> > __map_;
	unsigned long long __start_;
	compressed_pair<unsigned long, std::__1::allocator<double> > __size_;
} deque<double, std::__1::allocator<double> >;

typedef struct __IOHIDEvent* IOHIDEventRef;

typedef struct {
	CGSize field1;
	double field2;
	double field3;
	double field4;
	CGSize field5;
	double field6;
	double field7;
	double field8;
	long long field9;
	double field10;
	double field11;
	double field12;
	double field13;
	double field14;
	double field15;
	double field16;
	double field17;
	double field18;
	double field19;
	double field20;
	double field21;
	double field22;
	double field23;
	double field24;
	double field25;
	BOOL field26;
	double field27;
	double field28;
	double field29;
	BOOL field30;
	BOOL field31;
} SCD_Struct_MK75;

