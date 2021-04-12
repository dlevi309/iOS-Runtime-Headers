/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue, PLAssetDownloadManagerDelegate;
@class NSObject, NSMutableDictionary;

@interface PLAssetDownloadManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _requestsById;
	NSMutableDictionary* _progressById;
	Ai _currentRequestId;
	id<PLAssetDownloadManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PLAssetDownloadManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)defaultManager;
-(id)init;
-(id<PLAssetDownloadManagerDelegate>)delegate;
-(void)setDelegate:(id<PLAssetDownloadManagerDelegate>)arg1 ;
-(void)cancelRequest:(int)arg1 ;
-(void)_onQueueAsync:(/*^block*/id)arg1 ;
-(int)requestRequiredResourcesForManagedAssetObjectUUID:(id)arg1 library:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

