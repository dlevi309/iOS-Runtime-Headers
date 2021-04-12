/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class NSURL;

@interface PHAPrivateFederatedLearningModelValidator : NSObject {

	NSURL* _espressoModelURL;
	NSURL* _espressoModelShapeURL;

}

@property (nonatomic,readonly) NSURL * espressoModelURL;                   //@synthesize espressoModelURL=_espressoModelURL - In the implementation block
@property (nonatomic,readonly) NSURL * espressoModelShapeURL;              //@synthesize espressoModelShapeURL=_espressoModelShapeURL - In the implementation block
-(BOOL)_generateError:(id*)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 underlyingError:(id)arg4 ;
-(id)initWithEspressoModelURL:(id)arg1 espressoModelShapeURL:(id)arg2 ;
-(BOOL)isValidWithFingerprintVersionName:(id)arg1 modelInputName:(id)arg2 modelOutputName:(id)arg3 labelName:(id)arg4 labelPolicyName:(id)arg5 lossName:(id)arg6 layersToTrain:(id)arg7 error:(id*)arg8 ;
-(long long)_featureVectorSizeForFingerprintVersionName:(id)arg1 error:(id*)arg2 ;
-(id)_dictionaryForJSONFileURL:(id)arg1 error:(id*)arg2 ;
-(id)_layerConfigForModelInputName:(id)arg1 modelConfig:(id)arg2 error:(id*)arg3 ;
-(id)_layerConfigForModelOutputName:(id)arg1 modelConfig:(id)arg2 error:(id*)arg3 ;
-(id)_layerConfigForLabelName:(id)arg1 modelConfig:(id)arg2 error:(id*)arg3 ;
-(id)_layerConfigForLayerName:(id)arg1 modelConfig:(id)arg2 error:(id*)arg3 ;
-(id)_layerConfigForName:(id)arg1 modelConfig:(id)arg2 attributeName:(id)arg3 useEquality:(BOOL)arg4 error:(id*)arg5 ;
-(id)_sizeForLayerName:(id)arg1 modelShape:(id)arg2 error:(id*)arg3 ;
-(BOOL)_isFingerprintVersionSupported:(long long)arg1 ;
-(NSURL *)espressoModelURL;
-(NSURL *)espressoModelShapeURL;
@end

