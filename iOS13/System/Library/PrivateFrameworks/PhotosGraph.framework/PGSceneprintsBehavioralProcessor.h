/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGBehavioralAlgorithm.h>

@class NSSet, NSMapTable;

@interface PGSceneprintsBehavioralProcessor : NSObject <PGBehavioralAlgorithm> {

	NSSet* _goldAssets;
	NSSet* _goldAssetUUIDs;
	NSMapTable* _goldAssetSceneprintsAndDates;
	double _similarityThreshold;

}

@property (nonatomic,readonly) NSSet * goldAssets;                                     //@synthesize goldAssets=_goldAssets - In the implementation block
@property (nonatomic,readonly) NSSet * goldAssetUUIDs;                                 //@synthesize goldAssetUUIDs=_goldAssetUUIDs - In the implementation block
@property (nonatomic,readonly) NSMapTable * goldAssetSceneprintsAndDates;              //@synthesize goldAssetSceneprintsAndDates=_goldAssetSceneprintsAndDates - In the implementation block
@property (assign,nonatomic) double similarityThreshold;                               //@synthesize similarityThreshold=_similarityThreshold - In the implementation block
-(id)initWithGoldAssets:(id)arg1 graph:(id)arg2 ;
-(id)initWithGoldAssets:(id)arg1 graph:(id)arg2 persistedData:(id)arg3 ;
-(void)preprocessWithProgressBlock:(/*^block*/id)arg1 ;
-(float)semanticScoreForAsset:(id)arg1 ;
-(id)semanticScoreByAssetUUIDForAssets:(id)arg1 ;
-(id)dataToPersist;
-(NSSet *)goldAssets;
-(NSSet *)goldAssetUUIDs;
-(NSMapTable *)goldAssetSceneprintsAndDates;
-(double)similarityThreshold;
-(void)setSimilarityThreshold:(double)arg1 ;
@end

