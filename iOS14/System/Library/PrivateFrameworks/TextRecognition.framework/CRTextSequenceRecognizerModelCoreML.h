/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/

#import <TextRecognition/CRTextSequenceRecognizerModel.h>

@class CRRecognizerConfiguration, MLModel;

@interface CRTextSequenceRecognizerModelCoreML : CRTextSequenceRecognizerModel {

	CRRecognizerConfiguration* _configuration;
	MLModel* _model;

}

@property (nonatomic,readonly) MLModel * model;              //@synthesize model=_model - In the implementation block
-(MLModel *)model;
-(id)init;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionFromFeatures:(id)arg1 error:(id*)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(id)configuration;
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)predictFromInputs:(id)arg1 error:(id*)arg2 ;
-(id)initWithMLConfiguration:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldSaturateInputBatchesForConfiguration:(id)arg1 ;
-(id)predictionFromImg_input:(id)arg1 error:(id*)arg2 ;
-(id)inputBatchFromTextFeatures:(id)arg1 image:(id)arg2 featureWidth:(double)arg3 configuration:(id)arg4 ;
@end

