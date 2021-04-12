/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SceneIntelligence.framework/SceneIntelligence
*/

typedef struct {
	void plan;
	int network_index;
} SCD_Struct_SI0;

typedef struct {
	float bias_r;
	float bias_g;
	float bias_b;
	float scale;
	BOOL network_wants_bgr;
} SCD_Struct_SI1;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct vImage_Buffer {
	void data;
	unsigned long long height;
	unsigned long long width;
	unsigned long long rowBytes;
} vImage_Buffer;

typedef struct outputparams_t {
	CGSize resolution;
} outputparams_t;

typedef struct inputparams_t {
	SCD_Struct_SI1 preprocessor;
	CGSize resolution;
} inputparams_t;

typedef struct networkparams_t {
	inputparams_t input;
	outputparams_t output;
	vImage_Buffer temp;
} networkparams_t;

typedef struct {
	void data;
	void reserved;
	unsigned long long dim[4];
	unsigned long long stride[4];
	unsigned long long width;
	unsigned long long height;
	unsigned long long channels;
	unsigned long long batch_number;
	unsigned long long sequence_length;
	unsigned long long stride_width;
	unsigned long long stride_height;
	unsigned long long stride_channels;
	unsigned long long stride_batch_number;
	unsigned long long stride_sequence_length;
	int storage_type;
} SCD_Struct_SI7;

typedef struct outputvariables_t {
	vImage_Buffer labelImage;
	SCD_Struct_SI7 labelTensor;
	SCD_Struct_SI7 probabilitiesTensor;
	SCD_Struct_SI7 normalsTensor;
	__CVPixelBufferPool pool_label;
} outputvariables_t;

typedef struct vImage_CGImageFormat {
	unsigned bitsPerComponent;
	unsigned bitsPerPixel;
	CGColorSpace colorSpace;
	unsigned bitmapInfo;
	unsigned version;
	double decode;
	int renderingIntent;
} vImage_CGImageFormat;

typedef struct inputvariables_t {
	CGColorSpace colorSpace;
	vImage_CGImageFormat cgFormat;
	vImageCVImageFormat cvFormat;
	vImage_Buffer image;
} inputvariables_t;

typedef struct networkvariables_t {
	inputvariables_t input;
	outputvariables_t output;
} networkvariables_t;

typedef struct __CVBuffer* CVBufferRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct {
	unsigned long long width;
	unsigned long long height;
	unsigned long long depth;
} SCD_Struct_SI14;

typedef struct __CVPixelBufferPool* CVPixelBufferPoolRef;

typedef struct OpaqueVTPixelTransferSession* OpaqueVTPixelTransferSessionRef;

