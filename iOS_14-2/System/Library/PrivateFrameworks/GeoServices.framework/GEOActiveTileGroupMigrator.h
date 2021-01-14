/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOActiveTileGroupMigrator <NSObject>
@optional
-(id)opportunisticTaskForNewTileGroup:(id)arg1 inResourceManifest:(id)arg2 oldTileGroup:(id)arg3 activeScales:(id)arg4 activeScenarios:(id)arg5 dataSet:(id)arg6;
-(BOOL)needsMigrationForNewTileGroup:(id)arg1 inResourceManifest:(id)arg2 oldTileGroup:(id)arg3 dataSet:(id)arg4;

@required
-(id)initWithManifestConfiguration:(id)arg1 mapLayerDataManager:(id)arg2;
-(id)taskForNewTileGroup:(id)arg1 inResourceManifest:(id)arg2 oldTileGroup:(id)arg3 activeScales:(id)arg4 activeScenarios:(id)arg5 dataSet:(id)arg6 updateType:(long long)arg7;

@end

