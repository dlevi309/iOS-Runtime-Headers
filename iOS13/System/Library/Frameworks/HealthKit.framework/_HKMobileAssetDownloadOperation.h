/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol OS_dispatch_queue;
@class MAAsset, MADownloadOptions, NSObject;

@interface _HKMobileAssetDownloadOperation : NSObject {

	MAAsset* _asset;
	MADownloadOptions* _downloadOptions;
	long long _state;
	/*^block*/id _completion;
	long long _retryCount;
	long long _maxNumberOfRetriesAllowed;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)run;
-(id)description;
-(id)initWithAsset:(id)arg1 queue:(id)arg2 downloadOptions:(id)arg3 maxNumberOfRetriesAllowed:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)_queue_transitionToInitialized;
-(void)_queue_run;
-(void)_queue_transitionToDownloadingAsset;
-(void)_queue_transitionToCompleted;
-(void)_queue_downloadAsset;
-(void)_queue_transitionToState:(long long)arg1 ;
-(void)_queue_callCompletionWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_queue_transitionToFailureWithDownloadResult:(long long)arg1 ;
@end

