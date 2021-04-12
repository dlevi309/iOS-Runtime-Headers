/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOActiveTileGroupMigrator.h>

@class GEOResourceManifestConfiguration, geo_isolater, NSMutableArray, NSString;

@interface GEOResourcesVersionMigrator : NSObject <GEOActiveTileGroupMigrator> {

	GEOResourceManifestConfiguration* _manifestConfiguration;
	geo_isolater* _isolater;
	NSMutableArray* _runningTasks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithManifestConfiguration:(id)arg1 mapLayerDataManager:(id)arg2 ;
-(id)taskForNewTileGroup:(id)arg1 inResourceManifest:(id)arg2 oldTileGroup:(id)arg3 activeScales:(id)arg4 activeScenarios:(id)arg5 dataSet:(id)arg6 updateType:(long long)arg7 ;
-(void)_addRunningTask:(id)arg1 ;
-(void)_removeRunningTask:(id)arg1 ;
@end

