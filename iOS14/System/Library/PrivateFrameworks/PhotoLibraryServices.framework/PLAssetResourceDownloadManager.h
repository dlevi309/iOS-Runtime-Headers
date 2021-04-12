/*
* Generated on Thursday, January 14, 2021 at 2:22:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSOperationQueue, NSObject, NSMutableDictionary;

@interface PLAssetResourceDownloadManager : NSObject {

	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _requestIsolationQueue;
	os_unfair_lock_s _lock;
	NSMutableDictionary* _requestById;
	Ai _currentRequestId;

}
+(id)defaultManager;
-(id)init;
-(id)_requestWithID:(int)arg1 ;
-(void)_setRequest:(id)arg1 forRequestID:(int)arg2 ;
-(int)requestCloudResourceType:(unsigned long long)arg1 assetObjectID:(id)arg2 library:(id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)cancelRequest:(int)arg1 ;
@end

