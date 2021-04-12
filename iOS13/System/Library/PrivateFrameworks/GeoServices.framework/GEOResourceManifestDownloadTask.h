/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEODataSessionTaskDelegate.h>

@protocol OS_dispatch_queue, NSObject;
@class NSObject, NSURL, NSString, GEODataSessionTask;

@interface GEOResourceManifestDownloadTask : NSObject <GEODataSessionTaskDelegate> {

	GEOOnce_s _started;
	GEOOnce_s _finished;
	NSObject*<OS_dispatch_queue> _queue;
	id<NSObject> _transaction;
	NSURL* _url;
	NSString* _existingETag;
	GEODataSessionTask* _task;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _callback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)cancel;
-(void)dataSession:(id)arg1 didCompleteTask:(id)arg2 ;
-(id)initWithURL:(id)arg1 eTag:(id)arg2 ;
-(void)startWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_finishWithUpdatedManifest:(id)arg1 newETag:(id)arg2 isExistingManifestCurrent:(BOOL)arg3 error:(id)arg4 ;
-(void)_captureNetworkEventForTask:(id)arg1 ;
@end

