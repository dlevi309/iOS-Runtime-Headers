/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DepthProcessor.bundle/DepthProcessor
*/


#import <DepthProcessor/DepthProcessor-Structs.h>
@interface BilateralGridHash : NSObject {

	unsigned _n_dims;
	unsigned _width;
	unsigned _height;
	unsigned _sigma_s;
	unsigned _sigma_r_luma;
	unsigned _sigma_r_chroma;
	unsigned long long _max_hash_table_size;
	unsigned _hash_table_size;
	BGHashMapContextRef _hash_map;
	SCD_Struct_Bi3* _hash_table;
	unsigned* _hash_matrix_data;
	unsigned* _blur_indices;
	unsigned* _coord_indices;
	unsigned* _coord_table;
	unsigned* _coord_indices_off;
	unsigned* _interp_indices;
	unsigned* _interp_table;
	char* _interp_pad;

}
-(void)clear;
-(unsigned)width;
-(unsigned)height;
-(int)sigma_s;
-(void)blur_n:(float*)arg1 ;
-(unsigned)countDims;
-(void)splat:(CVBufferRef)arg1 pout:(float*)arg2 ;
-(BOOL)_hashMapFindKey:(unsigned long long)arg1 to:(unsigned*)arg2 ;
-(void)_hashMapAddKey:(unsigned long long)arg1 andValue:(unsigned)arg2 ;
-(void)splat_ones:(float*)arg1 ;
-(int)sigma_r_luma;
-(int)sigma_r_chroma;
-(id)initWithWidth:(unsigned)arg1 height:(unsigned)arg2 maxHashTableSize:(unsigned long long)arg3 ;
-(void)splat_w_mul_x:(CVBufferRef)arg1 inPixelBuffer:(CVBufferRef)arg2 pout:(float*)arg3 ;
-(void)slice:(const float*)arg1 outPixelBuffer:(CVBufferRef)arg2 ;
-(void)blur:(const float*)arg1 pout:(float*)arg2 ;
-(void)slice_trilinear:(CVBufferRef)arg1 pin:(const float*)arg2 pout:(CVBufferRef)arg3 ;
-(void)normalize:(const float*)arg1 pout:(float*)arg2 ;
-(void)normalize_blur:(const float*)arg1 pout:(float*)arg2 ;
-(void)blur_ones:(float*)arg1 ;
-(const unsigned*)blur_indices:(int)arg1 n_blur_indices:(int*)arg2 ;
-(const void*)hash_table;
-(const unsigned*)hash_matrix;
-(const unsigned*)blur_table;
-(const unsigned*)coord_indices;
-(const unsigned*)coord_table;
-(const unsigned*)interp_indices;
-(const unsigned*)interp_table;
-(const char*)interp_pad;
-(void)releaseResources;
-(void)dealloc;
-(int)_computeBilateralSpace:(CVBufferRef)arg1 sigma_s:(unsigned)arg2 sigma_r_luma:(unsigned)arg3 sigma_r_chroma:(unsigned)arg4 ;
-(unsigned)hashTableSize;
-(int)_addHashKeyAtX:(unsigned)arg1 Y:(unsigned)arg2 key:(unsigned long long)arg3 ;
-(int)create:(CVBufferRef)arg1 sigma_s:(int)arg2 sigma_r_luma:(int)arg3 sigma_r_chroma:(int)arg4 ;
-(void)computeBlurIndices;
-(void)computeCoordIndices;
-(void)computeInterpIndices;
@end

