/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


#import <PhotoImaging/PhotoImaging-Structs.h>
@interface PIVideoReframePipelineStateSetting : NSObject {

	long long _sampleMode;
	SCD_Struct_PI7 _time;
	SCD_Struct_PI7 _rawTime;

}

@property (assign,nonatomic) SCD_Struct_PI7 time;                 //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) SCD_Struct_PI7 rawTime;              //@synthesize rawTime=_rawTime - In the implementation block
@property (assign,nonatomic) long long sampleMode;                //@synthesize sampleMode=_sampleMode - In the implementation block
-(SCD_Struct_PI7)time;
-(void)setTime:(SCD_Struct_PI7)arg1 ;
-(void)setSampleMode:(long long)arg1 ;
-(SCD_Struct_PI7)rawTime;
-(void)setRawTime:(SCD_Struct_PI7)arg1 ;
-(long long)sampleMode;
-(id)nu_evaluateWithPipelineState:(id)arg1 error:(out id*)arg2 ;
@end

