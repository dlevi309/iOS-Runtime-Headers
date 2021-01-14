/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOActiveTileGroupMigrationTask.h>

@protocol NSObject;
@class GEOServiceURLsActiveTileGroupMigrator, GEOResourceManifestConfiguration, GEOTileGroup, GEOResources, GEOActiveTileGroup, GEODataSetDescription, GEOReportedProgress, GEOActiveTileGroupMigrationTaskOptions, NSProgress, NSString;

@interface _GEOServiceURLsActiveTileGroupMigrationTask : NSObject <GEOActiveTileGroupMigrationTask> {

	GEOServiceURLsActiveTileGroupMigrator* _migrator;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	GEOTileGroup* _newTileGroup;
	GEOResources* _resourceManifest;
	GEOActiveTileGroup* _oldTileGroup;
	GEODataSetDescription* _dataSetDescription;
	GEOReportedProgress* _progress;
	GEOActiveTileGroupMigrationTaskOptions* _options;
	id<NSObject> _transaction;

}

@property (nonatomic,readonly) long long estimatedWeight; 
@property (nonatomic,retain) id<NSObject> transaction;                                      //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) GEOActiveTileGroupMigrationTaskOptions * options;              //@synthesize options=_options - In the implementation block
@property (readonly) NSProgress * progress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTransaction:(id<NSObject>)arg1 ;
-(NSProgress *)progress;
-(id)init;
-(id<NSObject>)transaction;
-(GEOActiveTileGroupMigrationTaskOptions *)options;
-(void)setOptions:(GEOActiveTileGroupMigrationTaskOptions *)arg1 ;
-(long long)estimatedWeight;
-(void)removeOldData:(id)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(id)initWithMigrator:(id)arg1 manifestConfiguration:(id)arg2 newTileGroup:(id)arg3 inResourceManifest:(id)arg4 oldTileGroup:(id)arg5 dataSet:(id)arg6 ;
-(void)cancel;
-(void)populateTileGroup:(id)arg1 ;
@end

