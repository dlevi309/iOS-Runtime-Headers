/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


@interface KnowledgeGraphKit.MALearningStreamUtils : NSObject {

	 momentClassifier;
	 assetClassifier;

}
+(id)extractFeaturesForMomentNodes:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
+(id)extractFeaturesWithGraph:(id)arg1 mappedAssetFeatures:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)init;
-(id)initWithClasses:(id)arg1 momentFeatureVectors:(id)arg2 assetFeatureVectors:(id)arg3 ;
-(id)classifyMomentsWithInputFeatureVectors:(id)arg1 ;
-(id)classifyAssetsWithInputFeatureVectors:(id)arg1 ;
@end

