/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOActiveTileGroupMigrationTask.h>

@protocol OS_dispatch_queue, GEORequestCounterTicket, NSObject;
@class GEOSearchAttributionManifestVersionMigrator, NSObject, NSURL, GEOActiveTileGroup, GEOReportedProgress, NSURLSession, NSURLSessionDataTask, GEOSearchAttributionManifest, GEOActiveTileGroupMigrationTaskOptions, NSProgress, NSString;

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
-(void)_handleResponse:(id)arg1 withData:(id)arg2 error:(id)arg3 ;
-(void)setOptions:(GEOActiveTileGroupMigrationTaskOptions *)arg1 ;
-(long long)estimatedWeight;
-(void)_completeWithError:(id)arg1 ;
-(id)initWithMigrator:(id)arg1 newSearchAttributionManifestURL:(id)arg2 oldTileGroup:(id)arg3 ;
-(void)removeOldData:(id)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(void)cancel;
-(void)populateTileGroup:(id)arg1 ;
-(void)dealloc;
@end

