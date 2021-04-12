/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DisparityV3.bundle/DisparityV3
*/


#import <DisparityV3/DisparityV3-Structs.h>
@interface StereoDisparityEstimatorPreprocessingParameters : NSObject {

	 _channel_mixer_b0;
	 _channel_mixer_b1;
	SCD_Struct_St0 _channel_mixer_a0;
	SCD_Struct_St0 _channel_mixer_a1;

}

@property (assign,nonatomic) SCD_Struct_St0 channel_mixer_a0;              //@synthesize channel_mixer_a0=_channel_mixer_a0 - In the implementation block
@property (assign,nonatomic)  channel_mixer_b0;                            //@synthesize channel_mixer_b0=_channel_mixer_b0 - In the implementation block
@property (assign,nonatomic) SCD_Struct_St0 channel_mixer_a1;              //@synthesize channel_mixer_a1=_channel_mixer_a1 - In the implementation block
@property (assign,nonatomic)  channel_mixer_b1;                            //@synthesize channel_mixer_b1=_channel_mixer_b1 - In the implementation block
-(SCD_Struct_St0)channel_mixer_a0;
-(void)setChannel_mixer_a0:(SCD_Struct_St0)arg1 ;
-()channel_mixer_b0;
-(void)setChannel_mixer_b0:;
-(SCD_Struct_St0)channel_mixer_a1;
-(void)setChannel_mixer_a1:(SCD_Struct_St0)arg1 ;
-()channel_mixer_b1;
-(void)setChannel_mixer_b1:;
@end

