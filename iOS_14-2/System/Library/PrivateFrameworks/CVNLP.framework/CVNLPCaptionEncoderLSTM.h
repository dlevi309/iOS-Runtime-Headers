/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
*/

#import <CVNLP/CVNLP-Structs.h>
#import <CVNLP/CVNLPCaptionEncoder.h>

@interface CVNLPCaptionEncoderLSTM : CVNLPCaptionEncoder {

	void* encoderPlan;
	void* encoderCtx;
	SCD_Struct_CV1* encoderNet;
	SCD_Struct_CV2* meanFeatsBlob;
	SCD_Struct_CV2* attFeatsBlob;
	SCD_Struct_CV2* pAttFeatsBlob;
	BOOL meanFeaturesPresent;

}
-(void)dealloc;
-(id)initWithOptions:(id)arg1 runTimeParams:(id)arg2 ;
-(void)_run:(vImage_Buffer*)arg1 meanFeatures:(id*)arg2 attnFeatures:(id*)arg3 projectedAttnFeatures:(id*)arg4 ;
-(void)computeCaptionForImage:(vImage_Buffer*)arg1 outputs:(id*)arg2 ;
@end

