/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class PGManager, PGGraph;

@interface PGSharingFeatureExtractor : NSObject {

	PGManager* _manager;
	PGGraph* _graph;

}
+(id)extractFeatureNodesFromAsset:(id)arg1 andPersonLocalIdentifiers:(id)arg2 inGraph:(id)arg3 ;
+(id)personLocalIdentifiersByAssetUUIDFromSharingRecords:(id)arg1 ;
+(id)featuresFilename;
+(id)recordsFilename;
+(void)invalideCacheForManager:(id)arg1 ;
-(id)persistedFeatures;
-(id)initWithManager:(id)arg1 graph:(id)arg2 ;
-(id)_loadAllPersistedSharingRecordsFromDisk;
-(void)prefetchMomentNodeAndAssetInSharingRecords:(id)arg1 ;
-(id)persistedSharingRecords;
-(id)persistedSharingRecordsForType:(unsigned long long)arg1 ;
-(BOOL)persistSharingRecords:(id)arg1 ;
-(id)extractSharingRecordsWithProgressBlock:(/*^block*/id)arg1 ;
-(BOOL)persistFeatures:(id)arg1 ;
-(id)extractFeaturesFromSharingRecords:(id)arg1 withProgressBlock:(/*^block*/id)arg2 ;
@end

