/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


#import <PhotoImaging/PhotoImaging-Structs.h>
@interface PIVideoReframePipelineStateSetting : NSObject {

	long long _sampleMode;
	SCD_Struct_PI8 _time;

}

@property (assign,nonatomic) SCD_Struct_PI8 time;               //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) long long sampleMode;              //@synthesize sampleMode=_sampleMode - In the implementation block
-(SCD_Struct_PI8)time;
-(void)setTime:(SCD_Struct_PI8)arg1 ;
-(void)setSampleMode:(long long)arg1 ;
-(long long)sampleMode;
-(id)nu_evaluateWithPipelineState:(id)arg1 error:(out id*)arg2 ;
@end

