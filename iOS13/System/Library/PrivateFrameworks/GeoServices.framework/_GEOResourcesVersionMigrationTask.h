/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOActiveTileGroupMigrationTask.h>

@protocol OS_dispatch_queue, NSObject;
@class GEOActiveTileGroupMigrationTaskOptions, GEOResourcesVersionMigrator, NSObject, GEOResourceManifestConfiguration, GEOTileGroup, GEOResources, GEODataSetDescription, GEOActiveTileGroup, NSSet, GEOResourceLoader, NSArray, GEOReportedProgress, NSString, NSProgress;

@interface _GEOResourcesVersionMigrationTask : NSObject <GEOActiveTileGroupMigrationTask> {

	GEOResourcesVersionMigrator* _migrator;
	NSObject*<OS_dispatch_queue> _workQueue;
	BOOL _running;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	GEOTileGroup* _newTileGroup;
	GEOResources* _resourceManifest;
	GEODataSetDescription* _preferredDataSet;
	GEOActiveTileGroup* _oldTileGroup;
	NSSet* _activeScales;
	NSSet* _activeScenarios;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	GEOResourceLoader* _immediateResourceLoader;
	GEOResourceLoader* _wifiOnlyResourceLoader;
	NSArray* _loadedResources;
	NSArray* _unloadedConditionalResources;
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
+(Class)_resourceLoaderClass;
-(id)init;
-(GEOActiveTileGroupMigrationTaskOptions *)options;
-(void)cancel;
-(NSProgress *)progress;
-(void)setOptions:(GEOActiveTileGroupMigrationTaskOptions *)arg1 ;
-(id<NSObject>)transaction;
-(void)setTransaction:(id<NSObject>)arg1 ;
-(id)initWithMigrator:(id)arg1 manifestConfiguration:(id)arg2 newTileGroup:(id)arg3 inResourceManifest:(id)arg4 dataSet:(id)arg5 oldTileGroup:(id)arg6 activeScales:(id)arg7 activeScenarios:(id)arg8 ;
-(id)_staleResourceForResource:(id)arg1 ;
-(void)_loadImmediateResources:(id)arg1 conditionalWifiResources:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_resourcesDirectory;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(void)populateTileGroup:(id)arg1 ;
-(void)removeOldData:(id)arg1 ;
-(long long)estimatedWeight;
@end

