/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/


#import <GNR.videoprocessor/GNR.videoprocessor-Structs.h>
@interface BandDataFusion : NSObject {

	SCD_Struct_Ba25* sharpening;
	SCD_Struct_Ba25* adaptive_blur;
	SCD_Struct_Ba25* diff_weight;
	SCD_Struct_Ba25* luma_fusion_strength;
	SCD_Struct_Ba25* chroma_fusion_strength;
	SCD_Struct_Ba25* black_threshold;
	SCD_Struct_Ba25* chroma_black_threshold;
	SCD_Struct_Ba25* diff_weight_dense;
	SCD_Struct_Ba25* luma_fusion_strength_dense;
	SCD_Struct_Ba25* chroma_fusion_strength_dense;
	SCD_Struct_Ba25* static_ois_sharpening;

}
-(void)dealloc;
@end

