/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOActiveTileGroupMigrationTask.h>

@protocol OS_dispatch_queue, NSObject;
@class GEOActiveTileGroupMigrationTaskOptions, GEOResourcesVersionMigrator, NSObject, GEOResourceManifestConfiguration, GEOTileGroup, GEOResources, GEODataSetDescription, GEOActiveTileGroup, NSSet, GEOResourceLoader, NSArray, GEOReportedProgress, NSProgress, NSString;

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

@property (nonatomic,readonly) long long estimatedWeight; 
@property (nonatomic,retain) id<NSObject> transaction;                                      //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) GEOActiveTileGroupMigrationTaskOptions * options;              //@synthesize options=_options - In the implementation block
@property (readonly) NSProgress * progress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_resourceLoaderClass;
+(id)_resourcesDirectory:(id)arg1 ;
-(void)setTransaction:(id<NSObject>)arg1 ;
-(NSProgress *)progress;
-(id)init;
-(id<NSObject>)transaction;
-(GEOActiveTileGroupMigrationTaskOptions *)options;
-(void)setOptions:(GEOActiveTileGroupMigrationTaskOptions *)arg1 ;
-(id)initWithMigrator:(id)arg1 manifestConfiguration:(id)arg2 newTileGroup:(id)arg3 inResourceManifest:(id)arg4 dataSet:(id)arg5 oldTileGroup:(id)arg6 activeScales:(id)arg7 activeScenarios:(id)arg8 ;
-(id)_staleResourceForResource:(id)arg1 ;
-(long long)estimatedWeight;
-(void)removeOldData:(id)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(void)_loadImmediateResources:(id)arg1 conditionalWifiResources:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancel;
-(id)_resourcesDirectory;
-(void)populateTileGroup:(id)arg1 ;
@end

