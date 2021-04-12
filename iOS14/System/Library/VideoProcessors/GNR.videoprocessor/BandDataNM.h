/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/


#import <GNR.videoprocessor/GNR.videoprocessor-Structs.h>
@interface BandDataNM : NSObject {

	SCD_Struct_Ba25* luma_denoise_strength;
	SCD_Struct_Ba25* chroma_denoise_strength;
	SCD_Struct_Ba25* luma_remix_weight;
	SCD_Struct_Ba25* luma_denoise_strength_evm;
	SCD_Struct_Ba25* chroma_denoise_strength_evm;
	SCD_Struct_Ba25* luma_remix_weight_evm;
	SCD_Struct_Ba25* blue_boost;
	SCD_Struct_Ba25* flatness_boost;
	SCD_Struct_Ba25* flatness_threshold;
	SCD_Struct_Ba25* halo_suppression;
	SCD_Struct_Ba25* radial_sharpness_boost;
	SCD_Struct_Ba25* high_gain_denoise_boost;
	SCD_Struct_Ba25* low_gain_denoise_less;
	SCD_Struct_Ba25* local_gain_threshold;
	SCD_Struct_Ba25* radial_flatness_boost;

}
-(void)dealloc;
@end

