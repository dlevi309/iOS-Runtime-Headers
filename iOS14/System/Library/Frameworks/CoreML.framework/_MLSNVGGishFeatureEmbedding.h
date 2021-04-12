/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/MLCustomModel.h>

@protocol MLCustomModel;
@class MLModelDescription;

@interface _MLSNVGGishFeatureEmbedding : NSObject <MLCustomModel> {

	id<MLCustomModel> _featureEmbeddingModel;
	MLModelDescription* _modelDescription;

}

@property (nonatomic,readonly) MLModelDescription * modelDescription;              //@synthesize modelDescription=_modelDescription - In the implementation block
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3 ;
-(MLModelDescription *)modelDescription;
@end

