/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithGEOPDClientRankingFeatureMetadata:(id)arg1 ;
-(id)initWithFeatureIdentifier:(id)arg1 function:(id)arg2 ;
-(GEOClientRankingModelFeatureIdentifier *)featureIdentifier;
@end

