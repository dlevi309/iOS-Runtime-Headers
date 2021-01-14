/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOActiveTileGroupMigrationTask.h>

@protocol OS_dispatch_queue, NSObject;
@class GEORegionalResourcesVersionMigrator, GEOResourceManifestConfiguration, GEOTileGroup, GEOResources, NSSet, NSObject, GEOReportedProgress, GEOActiveTileGroupMigrationTaskOptions, NSProgress, NSString;

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

@property (nonatomic,readonly) long long estimatedWeight; 
@property (nonatomic,retain) id<NSObject> transaction;                                      //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) GEOActiveTileGroupMigrationTaskOptions * options;              //@synthesize options=_options - In the implementation block
@property (readonly) NSProgress * progress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_resourcesDirectory:(id)arg1 ;
-(void)setTransaction:(id<NSObject>)arg1 ;
-(NSProgress *)progress;
-(id)init;
-(id)initWithMigrator:(id)arg1 manifestConfiguration:(id)arg2 newTileGroup:(id)arg3 inResourceManifest:(id)arg4 activeScales:(id)arg5 activeScenarios:(id)arg6 ;
-(id<NSObject>)transaction;
-(GEOActiveTileGroupMigrationTaskOptions *)options;
-(void)setOptions:(GEOActiveTileGroupMigrationTaskOptions *)arg1 ;
-(long long)estimatedWeight;
-(void)removeOldData:(id)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(void)cancel;
-(id)_resourcesDirectory;
-(void)populateTileGroup:(id)arg1 ;
@end

