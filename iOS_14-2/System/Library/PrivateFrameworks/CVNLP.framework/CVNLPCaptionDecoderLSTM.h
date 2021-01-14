/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
*/

#import <CVNLP/CVNLP-Structs.h>
#import <CVNLP/CVNLPCaptionDecoder.h>

@class NSDictionary;

@interface CVNLPCaptionDecoderLSTM : CVNLPCaptionDecoder {

	int startID;
	int endID;
	int maxCaptionLen;
	int beamSize;
	int vocabSize;
	NSDictionary* vocab;
	void* _decoderPlan;
	void* decoderCtx;
	SCD_Struct_CV1* decoderNet;
	SCD_Struct_CV2* meanFeatsPlaceholderBlob;
	SCD_Struct_CV2* attFeatsPlaceholderBlob;
	SCD_Struct_CV2* pAttFeatsPlaceholderBlob;
	SCD_Struct_CV2* lstmAttStateFeedBlob;
	SCD_Struct_CV2* lstmLangStateFeedBlob;
	SCD_Struct_CV2* inWordIDBlob;
	SCD_Struct_CV2* wordIDBlob;
	SCD_Struct_CV2* langProbBlob;
	SCD_Struct_CV2* newAttStateBlob;
	SCD_Struct_CV2* newLangStateBlob;
	CVNLPBeamSearchRef _beamSearch;
	BOOL meanFeaturesPresent;

}
-(void)dealloc;
-(id)initWithOptions:(id)arg1 runTimeParams:(id)arg2 ;
-(id)computeCaptionForImageWithInputs:(id)arg1 genderOption:(int)arg2 ;
-(id)packBeamID:(id)arg1 tokenID:(id)arg2 lstmAttnState:(SCD_Struct_CV2*)arg3 lstmLangState:(SCD_Struct_CV2*)arg4 softmax:(SCD_Struct_CV2*)arg5 ;
-(void)extractBeamID:(id*)arg1 tokenID:(id*)arg2 lstmAttnState:(SCD_Struct_CV2*)arg3 lstmLangState:(SCD_Struct_CV2*)arg4 fromFollowup:(id)arg5 ;
@end

