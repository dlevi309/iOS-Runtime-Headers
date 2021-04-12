/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	int field1;
	int field2;
} SCD_Struct_VN1;

typedef struct {
	unsigned long long field1;
	SCD_Struct_VN1 field2;
	SCD_Struct_VN1 field3;
	SCD_Struct_VN1 field4;
} SCD_Struct_VN2;

typedef struct shared_ptr<vision::mod::FaceQualityPredictor> {
	FaceQualityPredictor __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::FaceQualityPredictor>;

typedef struct FaceQualityOptions {
	int preferred_device_id;
	int espresso_engine_id;
	int storage_type;
} FaceQualityOptions;

typedef struct shared_ptr<const vision::mod::FaceClustering> {
	FaceClustering __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<const vision::mod::FaceClustering>;

typedef struct shared_ptr<vision::mod::FaceClustering> {
	FaceClustering __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::FaceClustering>;

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

typedef struct shared_ptr<vision::mod::FaceprintAndAttributes> {
	FaceprintAndAttributes __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::FaceprintAndAttributes>;

typedef struct shared_ptr<vision::mod::FaceFrontalizer> {
	FaceFrontalizer __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::FaceFrontalizer>;

typedef struct vImage_Buffer {
	void data;
	unsigned long long height;
	unsigned long long width;
	unsigned long long rowBytes;
} vImage_Buffer;

typedef struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> {
	ImageClassifier_HierarchicalModel __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::ImageClassifier_HierarchicalModel>;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct CGImage* CGImageRef;

typedef struct shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector_v2> {
	ObjectDetector_DCNFaceDetector_v2 __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector_v2>;

typedef struct _NSZone* NSZoneRef;

typedef struct Projections_meanStdTable {
	float sumTable;
	float sumSqTable;
} Projections_meanStdTable;

typedef struct FastRegistration_Signatures {
	float piRow;
	unsigned long long nPiRow;
	Projections_meanStdTable piRowTable;
	float piCol;
	unsigned long long nPiCol;
	Projections_meanStdTable piColTable;
	char* _memoryContainer;
} FastRegistration_Signatures;

typedef struct GridROI_t {
	int startX;
	int startY;
	int endX;
	int endY;
} GridROI_t;

typedef struct {
	[3 columns];
} SCD_Struct_VN21;

typedef struct ImageRegistrationCtx_s* ImageRegistrationCtx_sRef;

typedef struct {
	unsigned long long field1;
	Class field2;
	unsigned long long field3;
} SCD_Struct_VN23;

typedef struct Geometry2D_point2D_ {
	float x;
	float y;
} Geometry2D_point2D_;

typedef struct Geometry2D_size2D_ {
	float height;
	float width;
} Geometry2D_size2D_;

typedef struct Geometry2D_rect2D_ {
	Geometry2D_point2D_ origin;
	Geometry2D_size2D_ size;
} Geometry2D_rect2D_;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct shared_ptr<vision::mod::LandmarkAttributes> {
	LandmarkAttributes __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::LandmarkAttributes>;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct __CFArray* CFArrayRef;

typedef const struct __CFDictionary* CFDictionaryRef;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector> {
	ObjectDetector_DCNFaceDetector __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector>;

typedef struct shared_ptr<vision::mod::FaceSegmenterDNN> {
	FaceSegmenterDNN __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::FaceSegmenterDNN>;

typedef struct {
	void field1;
	void field2;
	unsigned long long field3[4];
	unsigned long long field4[4];
	unsigned long long field5;
	unsigned long long field6;
	unsigned long long field7;
	unsigned long long field8;
	unsigned long long field9;
	unsigned long long field10;
	unsigned long long field11;
	unsigned long long field12;
	unsigned long long field13;
	unsigned long long field14;
	int field15;
} SCD_Struct_VN35;

typedef struct {
	void field1;
	int field2;
} SCD_Struct_Sh36;

typedef struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> {
	ImageDescriptorProcessorAbstract __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::ImageDescriptorProcessorAbstract>;

typedef struct shared_ptr<vision::mod::ImageClassifierAbstract> {
	ImageClassifierAbstract __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::ImageClassifierAbstract>;

typedef struct ACBSConfig* ACBSConfigRef;

typedef struct shared_ptr<vision::mod::FaceRegionMap> {
	FaceRegionMap __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::FaceRegionMap>;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct shared_ptr<vision::mod::FaceIDModel> {
	FaceIDModel __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::FaceIDModel>;

typedef struct {
	void plan;
	int network_index;
} SCD_Struct_VN43;

typedef struct shared_ptr<vision::mod::LandmarkDetectorERT> {
	LandmarkDetectorERT __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::LandmarkDetectorERT>;

typedef struct {
	float field1;
	float field2;
	Projections_meanStdTable field3[9];
	Projections_meanStdTable field4[9];
} SCD_Struct_VN45;

typedef struct _compressed_pair<float *, std::__1::allocator<float> > {
	float __value_;
} compressed_pair<float *, std::__1::allocator<float> >;

typedef struct vector<float, std::__1::allocator<float> > {
	float __begin_;
	float __end_;
	compressed_pair<float *, std::__1::allocator<float> > __end_cap_;
} vector<float, std::__1::allocator<float> >;

typedef struct _compressed_pair<cvml::util::model_file_cache *, std::__1::default_delete<cvml::util::model_file_cache> > {
	model_file_cache __value_;
} compressed_pair<cvml::util::model_file_cache *, std::__1::default_delete<cvml::util::model_file_cache> >;

typedef struct unique_ptr<cvml::util::model_file_cache, std::__1::default_delete<cvml::util::model_file_cache> > {
	compressed_pair<cvml::util::model_file_cache *, std::__1::default_delete<cvml::util::model_file_cache> > __ptr_;
} unique_ptr<cvml::util::model_file_cache, std::__1::default_delete<cvml::util::model_file_cache> >;

typedef struct shared_ptr<vision::mod::ImageDescriptorAugmenterFlip> {
	ImageDescriptorAugmenterFlip __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::ImageDescriptorAugmenterFlip>;

typedef struct shared_ptr<unsigned char> {
	char* __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<unsigned char>;

typedef struct _compressed_pair<vision::mod::ImageAnalyzer *, std::__1::default_delete<vision::mod::ImageAnalyzer> > {
	ImageAnalyzer __value_;
} compressed_pair<vision::mod::ImageAnalyzer *, std::__1::default_delete<vision::mod::ImageAnalyzer> >;

typedef struct unique_ptr<vision::mod::ImageAnalyzer, std::__1::default_delete<vision::mod::ImageAnalyzer> > {
	compressed_pair<vision::mod::ImageAnalyzer *, std::__1::default_delete<vision::mod::ImageAnalyzer> > __ptr_;
} unique_ptr<vision::mod::ImageAnalyzer, std::__1::default_delete<vision::mod::ImageAnalyzer> >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, std::__1::hash<unsigned long>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, std::__1::hash<unsigned long>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, std::__1::equal_to<unsigned long>, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, std::__1::equal_to<unsigned long>, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > > > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, std::__1::hash<unsigned long>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, std::__1::equal_to<unsigned long>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > > > >;

typedef struct unordered_map<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > >, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > > > > {
	hash_table<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > >, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > > > > __table_;
} unordered_map<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > >, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > > > >;

typedef struct _compressed_pair<vision::mod::ImageAnalyzer_PCA *, std::__1::default_delete<vision::mod::ImageAnalyzer_PCA> > {
	ImageAnalyzer_PCA __value_;
} compressed_pair<vision::mod::ImageAnalyzer_PCA *, std::__1::default_delete<vision::mod::ImageAnalyzer_PCA> >;

typedef struct unique_ptr<vision::mod::ImageAnalyzer_PCA, std::__1::default_delete<vision::mod::ImageAnalyzer_PCA> > {
	compressed_pair<vision::mod::ImageAnalyzer_PCA *, std::__1::default_delete<vision::mod::ImageAnalyzer_PCA> > __ptr_;
} unique_ptr<vision::mod::ImageAnalyzer_PCA, std::__1::default_delete<vision::mod::ImageAnalyzer_PCA> >;

typedef struct shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> {
	ImageAnalyzer_CustomClassifier __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>;

typedef struct _compressed_pair<std::__1::tuple<std::__1::basic_string<char>, float, bool> *, std::__1::allocator<std::__1::tuple<std::__1::basic_string<char>, float, bool> > > {
	tuple<std::__1::basic_string<char>, float, bool> __value_;
} compressed_pair<std::__1::tuple<std::__1::basic_string<char>, float, bool> *, std::__1::allocator<std::__1::tuple<std::__1::basic_string<char>, float, bool> > >;

typedef struct vector<std::__1::tuple<std::__1::basic_string<char>, float, bool>, std::__1::allocator<std::__1::tuple<std::__1::basic_string<char>, float, bool> > > {
	tuple<std::__1::basic_string<char>, float, bool> __begin_;
	tuple<std::__1::basic_string<char>, float, bool> __end_;
	compressed_pair<std::__1::tuple<std::__1::basic_string<char>, float, bool> *, std::__1::allocator<std::__1::tuple<std::__1::basic_string<char>, float, bool> > > __end_cap_;
} vector<std::__1::tuple<std::__1::basic_string<char>, float, bool>, std::__1::allocator<std::__1::tuple<std::__1::basic_string<char>, float, bool> > >;

typedef struct shared_ptr<vision::mod::LandmarkDetectorDNN> {
	LandmarkDetectorDNN __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::LandmarkDetectorDNN>;

typedef struct _compressed_pair<_Geometry2D_point2D_ *, std::__1::allocator<_Geometry2D_point2D_> > {
	_Geometry2D_point2D_ __value_;
} compressed_pair<_Geometry2D_point2D_ *, std::__1::allocator<_Geometry2D_point2D_> >;

typedef struct vector<_Geometry2D_point2D_, std::__1::allocator<_Geometry2D_point2D_> > {
	_Geometry2D_point2D_ __begin_;
	_Geometry2D_point2D_ __end_;
	compressed_pair<_Geometry2D_point2D_ *, std::__1::allocator<_Geometry2D_point2D_> > __end_cap_;
} vector<_Geometry2D_point2D_, std::__1::allocator<_Geometry2D_point2D_> >;

typedef struct _compressed_pair<std::__1::shared_ptr<espresso_buffer_t> *, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > > {
	shared_ptr<espresso_buffer_t> __value_;
} compressed_pair<std::__1::shared_ptr<espresso_buffer_t> *, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > >;

typedef struct vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > > {
	shared_ptr<espresso_buffer_t> __begin_;
	shared_ptr<espresso_buffer_t> __end_;
	compressed_pair<std::__1::shared_ptr<espresso_buffer_t> *, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > > __end_cap_;
} vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > >;

typedef struct shared_ptr<vision::mod::FaceBoxPoseAligner<signed char> > {
	FaceBoxPoseAligner<signed char> __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::FaceBoxPoseAligner<signed char> >;

typedef struct shared_ptr<vision::mod::ObjectTrackerAbstract> {
	ObjectTrackerAbstract __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<vision::mod::ObjectTrackerAbstract>;

