/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <AirTraffic/ATSessionTask.h>
#import <libobjc.A.dylib/ATAssetLinkControllerObserver.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableOrderedSet, NSMutableSet, NSString, NSObject, NSPredicate, ATAssetLinkController;

@interface ATAssetSessionTask : ATSessionTask <ATAssetLinkControllerObserver> {

	NSMutableOrderedSet* _remainingAssets;
	NSMutableSet* _failedAssets;
	NSMutableSet* _currentAssets;
	NSString* _dataClass;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _cancelAtStart;
	double _retryInterval;
	NSObject*<OS_dispatch_source> _retryTimer;
	BOOL _waitingForRetry;
	BOOL _retryUntilFinished;
	NSPredicate* _filterPredicate;
	/*^block*/id _shouldRetryAssetBlock;
	ATAssetLinkController* _assetLinkController;
	unsigned long long _failedAssetsCount;

}

@property (nonatomic,copy,readonly) NSString * dataClass;                              //@synthesize dataClass=_dataClass - In the implementation block
@property (nonatomic,copy) NSPredicate * filterPredicate;                              //@synthesize filterPredicate=_filterPredicate - In the implementation block
@property (nonatomic,copy) id shouldRetryAssetBlock;                                   //@synthesize shouldRetryAssetBlock=_shouldRetryAssetBlock - In the implementation block
@property (nonatomic,retain) ATAssetLinkController * assetLinkController;              //@synthesize assetLinkController=_assetLinkController - In the implementation block
@property (assign,nonatomic) BOOL retryUntilFinished;                                  //@synthesize retryUntilFinished=_retryUntilFinished - In the implementation block
@property (nonatomic,readonly) unsigned long long failedAssetsCount;                   //@synthesize failedAssetsCount=_failedAssetsCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)debugDescription;
-(void)cancel;
-(void)resume;
-(void)start;
-(void)suspend;
-(NSString *)dataClass;
-(id)remainingAssets;
-(NSPredicate *)filterPredicate;
-(void)setFilterPredicate:(NSPredicate *)arg1 ;
-(id)sessionGroupingKey;
-(id)initWithAssets:(id)arg1 ;
-(void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2 ;
-(void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2 ;
-(id)initWithDataClass:(id)arg1 ;
-(void)_finishAsset:(id)arg1 withError:(id)arg2 ;
-(void)cancelAllAssets;
-(void)setRetryUntilFinished:(BOOL)arg1 ;
-(void)setShouldRetryAssetBlock:(id)arg1 ;
-(ATAssetLinkController *)assetLinkController;
-(id)shouldRetryAssetBlock;
-(void)setAssetLinkController:(ATAssetLinkController *)arg1 ;
-(BOOL)retryUntilFinished;
-(unsigned long long)failedAssetsCount;
@end

