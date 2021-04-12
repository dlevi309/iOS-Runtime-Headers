/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class MLModel, NSArray;

@interface PPRecordFeaturizer : NSObject {

	MLModel* _model;
	NSArray* _featureNames;

}
+(id)_flattenArraylikeToFeatures:(id)arg1 featureName:(id)arg2 ;
+(id)_flattenDictionarylikeToFeatures:(id)arg1 featureName:(id)arg2 ;
+(id)featuresForScoreDict:(id)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(id)initWithDomain:(unsigned char)arg1 trialWrapper:(id)arg2 ;
-(id)featurize:(id)arg1 sourceStats:(id)arg2 error:(id*)arg3 ;
@end

