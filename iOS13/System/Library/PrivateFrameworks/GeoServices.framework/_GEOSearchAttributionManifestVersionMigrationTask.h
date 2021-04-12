/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOActiveTileGroupMigrationTask.h>

@protocol OS_dispatch_queue, GEORequestCounterTicket, NSObject;
@class GEOSearchAttributionManifestVersionMigrator, NSObject, NSURL, GEOActiveTileGroup, GEOReportedProgress, NSURLSession, NSURLSessionDataTask, GEOSearchAttributionManifest, GEOActiveTileGroupMigrationTaskOptions, NSString, NSProgress;

@interface _GEOSearchAttributionManifestVersionMigrationTask : NSObject <GEOActiveTileGroupMigrationTask> {

	GEOSearchAttributionManifestVersionMigrator* _migrator;
	NSObject*<OS_dispatch_queue> _workQueue;
	BOOL _running;
	NSURL* _newSearchAttributionManifestURL;
	GEOActiveTileGroup* _oldTileGroup;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	GEOReportedProgress* _progress;
	NSURLSession* _urlSession;
	NSURLSessionDataTask* _downloadTask;
	id<GEORequestCounterTicket> _requestCounterTicket;
	GEOSearchAttributionManifest* _attributionManifest;
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
-(id)init;
-(void)dealloc;
-(GEOActiveTileGroupMigrationTaskOptions *)options;
-(void)cancel;
-(NSProgress *)progress;
-(void)setOptions:(GEOActiveTileGroupMigrationTaskOptions *)arg1 ;
-(id<NSObject>)transaction;
-(void)setTransaction:(id<NSObject>)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(void)populateTileGroup:(id)arg1 ;
-(void)removeOldData:(id)arg1 ;
-(long long)estimatedWeight;
-(id)initWithMigrator:(id)arg1 newSearchAttributionManifestURL:(id)arg2 oldTileGroup:(id)arg3 ;
-(void)_completeWithError:(id)arg1 ;
-(void)_handleResponse:(id)arg1 withData:(id)arg2 error:(id)arg3 ;
@end

