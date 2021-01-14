/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOActiveTileGroupMigrator.h>

@class GEOResourceManifestConfiguration, NSString;

@interface GEOServiceURLsActiveTileGroupMigrator : NSObject <GEOActiveTileGroupMigrator> {

	GEOResourceManifestConfiguration* _manifestConfiguration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithManifestConfiguration:(id)arg1 mapLayerDataManager:(id)arg2 ;
-(id)taskForNewTileGroup:(id)arg1 inResourceManifest:(id)arg2 oldTileGroup:(id)arg3 activeScales:(id)arg4 activeScenarios:(id)arg5 dataSet:(id)arg6 updateType:(long long)arg7 ;
-(BOOL)needsMigrationForNewTileGroup:(id)arg1 inResourceManifest:(id)arg2 oldTileGroup:(id)arg3 dataSet:(id)arg4 ;
@end

