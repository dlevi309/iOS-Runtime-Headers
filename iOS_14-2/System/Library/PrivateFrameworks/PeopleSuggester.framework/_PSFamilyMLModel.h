/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@class NSDictionary;

@interface _PSFamilyMLModel : NSObject {

	NSDictionary* _models;

}

@property (nonatomic,readonly) NSDictionary * models;              //@synthesize models=_models - In the implementation block
-(id)init;
-(id)loadModelFromUrlResource:(id)arg1 ;
-(id)predictionForContact:(id)arg1 ;
-(id)familyProbability:(id)arg1 ;
-(id)getFeatureDictForContact:(id)arg1 ;
-(id)ensemblePredictionForInputFeatures:(id)arg1 ;
-(id)defaultPredictionForInputFeatures:(id)arg1 ;
-(id)predictionsForContacts:(id)arg1 featureDicts:(id)arg2 ;
-(id)getFeatureDictsForContacts:(id)arg1 ;
-(id)getModelWithModelName:(id)arg1 ;
-(id)defaultModelForPrediction;
-(id)getPredictionFromModel:(id)arg1 withInputFeatures:(id)arg2 ;
-(BOOL)isFamilyContact:(id)arg1 ;
-(id)familiesPredictionForContacts:(id)arg1 withMaxSuggestion:(long long)arg2 ;
-(id)predictionsForContacts:(id)arg1 ;
-(id)familyRelationsOfContacts:(id)arg1 featureDicts:(id)arg2 ;
-(NSDictionary *)models;
-(id)initWithModels:(id)arg1 ;
@end

