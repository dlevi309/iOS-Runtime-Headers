/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGFeatureValidator.h>

@interface PGFeatureAggregationValidator : PGFeatureValidator {

	long long _featureExtractorType;

}

@property (nonatomic,readonly) long long featureExtractorType;              //@synthesize featureExtractorType=_featureExtractorType - In the implementation block
-(long long)isValidEntity:(id)arg1 error:(id*)arg2 ;
-(long long)featureValidatorType;
-(id)initWithPredicate:(id)arg1 featureExtractor:(id)arg2 featureExtractorType:(long long)arg3 featureName:(id)arg4 ;
-(long long)isValidEntity:(id)arg1 graph:(id)arg2 assetFetchOptionPropertySet:(id)arg3 error:(id*)arg4 ;
-(id)_composeFeatureExtractorWithGraph:(id)arg1 error:(id*)arg2 ;
-(long long)featureExtractorType;
@end

