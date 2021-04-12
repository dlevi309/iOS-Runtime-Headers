/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOClientRankingModelFeatureIdentifier, GEOClientRankingModelFeatureFunction;

@interface GEOClientRankingModelFeature : NSObject {

	GEOClientRankingModelFeatureIdentifier* _featureIdentifier;
	GEOClientRankingModelFeatureFunction* _function;

}

@property (nonatomic,readonly) GEOClientRankingModelFeatureIdentifier * featureIdentifier;              //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (nonatomic,readonly) GEOClientRankingModelFeatureFunction * function;                         //@synthesize function=_function - In the implementation block
-(id)init;
-(GEOClientRankingModelFeatureFunction *)function;
-(GEOClientRankingModelFeatureIdentifier *)featureIdentifier;
-(id)initWithGEOPDClientRankingFeatureMetadata:(id)arg1 ;
-(id)initWithFeatureIdentifier:(id)arg1 function:(id)arg2 ;
@end

