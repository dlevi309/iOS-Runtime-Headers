/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)cancelRequest:(int)arg1 ;
-(int)requestCloudResourceType:(unsigned long long)arg1 assetObjectID:(id)arg2 library:(id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_requestWithID:(int)arg1 ;
-(void)_setRequest:(id)arg1 forRequestID:(int)arg2 ;
@end

