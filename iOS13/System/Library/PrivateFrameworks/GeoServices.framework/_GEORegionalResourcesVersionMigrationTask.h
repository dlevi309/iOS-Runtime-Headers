/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOActiveTileGroupMigrationTask.h>

@protocol OS_dispatch_queue, NSObject;
@class GEORegionalResourcesVersionMigrator, GEOResourceManifestConfiguration, GEOTileGroup, GEOResources, NSSet, NSObject, GEOReportedProgress, GEOActiveTileGroupMigrationTaskOptions, NSString, NSProgress;

@interface _GEORegionalResourcesVersionMigrationTask : NSObject <GEOActiveTileGroupMigrationTask> {

	GEORegionalResourcesVersionMigrator* _migrator;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	GEOTileGroup* _newTileGroup;
	GEOResources* _resourceManifest;
	NSSet* _activeScales;
	NSSet* _activeScenarios;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	GEOReportedProgress* _progress;
	id<NSObject> _transaction;
	GEOActiveTileGroupMigrationTaskOptions* _options;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSProgress * progress; 
@property (nonatomic,readonly) long long estimatedWeight; 
@property (nonatomic,retain) id<NSObject> transaction;                                      //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) GEOActiveTileGroupMigrationTaskOptions * options;              //@synthesize options=_options - In the implementation block
+(id)_resourcesDirectory:(id)arg1 ;
-(id)init;
-(GEOActiveTileGroupMigrationTaskOptions *)options;
-(void)cancel;
-(NSProgress *)progress;
-(void)setOptions:(GEOActiveTileGroupMigrationTaskOptions *)arg1 ;
-(id<NSObject>)transaction;
-(void)setTransaction:(id<NSObject>)arg1 ;
-(id)_resourcesDirectory;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(void)populateTileGroup:(id)arg1 ;
-(void)removeOldData:(id)arg1 ;
-(long long)estimatedWeight;
-(id)initWithMigrator:(id)arg1 manifestConfiguration:(id)arg2 newTileGroup:(id)arg3 inResourceManifest:(id)arg4 activeScales:(id)arg5 activeScenarios:(id)arg6 ;
@end

