/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/DisparityV4.bundle/DisparityV4
*/


#import <DisparityV4/DisparityV4-Structs.h>
@interface StereoDisparityEstimatorPreprocessingParameters : NSObject {

	 _channel_mixer_b0;
	 _channel_mixer_b1;
	SCD_Struct_St15 _channel_mixer_a0;
	SCD_Struct_St15 _channel_mixer_a1;

}

@property (assign,nonatomic) SCD_Struct_St15 channel_mixer_a0;              //@synthesize channel_mixer_a0=_channel_mixer_a0 - In the implementation block
@property (assign,nonatomic)  channel_mixer_b0;                             //@synthesize channel_mixer_b0=_channel_mixer_b0 - In the implementation block
@property (assign,nonatomic) SCD_Struct_St15 channel_mixer_a1;              //@synthesize channel_mixer_a1=_channel_mixer_a1 - In the implementation block
@property (assign,nonatomic)  channel_mixer_b1;                             //@synthesize channel_mixer_b1=_channel_mixer_b1 - In the implementation block
-(SCD_Struct_St15)channel_mixer_a0;
-(void)setChannel_mixer_a0:(SCD_Struct_St15)arg1 ;
-()channel_mixer_b0;
-(void)setChannel_mixer_b0:;
-(SCD_Struct_St15)channel_mixer_a1;
-(void)setChannel_mixer_a1:(SCD_Struct_St15)arg1 ;
-()channel_mixer_b1;
-(void)setChannel_mixer_b1:;
@end

