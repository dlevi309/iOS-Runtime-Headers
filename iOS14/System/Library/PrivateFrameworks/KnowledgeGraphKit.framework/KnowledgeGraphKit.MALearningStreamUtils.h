/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


@interface KnowledgeGraphKit.MALearningStreamUtils : NSObject {

	 momentClassifier;
	 assetClassifier;

}
+(id)extractFeaturesWithGraph:(id)arg1 mappedAssetFeatures:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
+(id)extractFeaturesForMomentNodes:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)init;
-(id)classifyMomentsWithInputFeatureVectors:(id)arg1 ;
-(id)classifyAssetsWithInputFeatureVectors:(id)arg1 ;
-(id)initWithClasses:(id)arg1 momentFeatureVectors:(id)arg2 assetFeatureVectors:(id)arg3 ;
@end

