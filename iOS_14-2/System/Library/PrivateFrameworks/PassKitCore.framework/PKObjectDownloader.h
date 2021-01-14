/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSObject, NSURLSession;

@interface PKObjectDownloader : NSObject {

	NSMutableDictionary* _downloads;
	NSMutableOrderedSet* _pendingURLs;
	NSMutableSet* _downloadingURLs;
	NSObject*<OS_dispatch_queue> _queue;
	NSURLSession* _session;
	long long _concurrentRequests;

}

@property (retain) NSURLSession * session;                    //@synthesize session=_session - In the implementation block
@property (assign) long long concurrentRequests;              //@synthesize concurrentRequests=_concurrentRequests - In the implementation block
+(id)sharedImageAssetDownloader;
-(id)initWithSession:(id)arg1 ;
-(id)init;
-(void)downloadFromUrl:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSURLSession *)session;
-(id)_logStringFromResponse:(id)arg1 data:(id)arg2 ;
-(void)_schedulePendingDownloads;
-(long long)concurrentRequests;
-(id)_logStringFromRequest:(id)arg1 ;
-(void)_scheduleDownload:(id)arg1 forURL:(id)arg2 ;
-(id)_logStringFromCachedResponse:(id)arg1 data:(id)arg2 ;
-(void)downloadWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)_handleResponseForURL:(id)arg1 data:(id)arg2 response:(id)arg3 error:(id)arg4 ;
-(void)setConcurrentRequests:(long long)arg1 ;
-(id)cachedDataForURL:(id)arg1 ;
-(void)invalidate;
@end

