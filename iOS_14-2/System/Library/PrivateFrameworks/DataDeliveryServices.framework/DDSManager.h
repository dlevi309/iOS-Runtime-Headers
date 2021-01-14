/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/

#import <libobjc.A.dylib/DDSAssetProvidingDelegate.h>
#import <libobjc.A.dylib/DDSAssetTrackingDelegate.h>
#import <libobjc.A.dylib/DDSRemoteSyncStateDelegate.h>
#import <libobjc.A.dylib/DDSAssetObservingDelegate.h>
#import <libobjc.A.dylib/DDSManaging.h>

@protocol DDSManagingDelegate, DDSAssetTracking, DDSAssetProviding, DDSAssetObserving, OS_dispatch_queue;
@class DDSScheduledTimer, DDSRemoteSyncState, NSMutableSet, NSObject, NSString;

@interface DDSManager : NSObject <DDSAssetProvidingDelegate, DDSAssetTrackingDelegate, DDSRemoteSyncStateDelegate, DDSAssetObservingDelegate, DDSManaging> {

	id<DDSManagingDelegate> _delegate;
	id<DDSAssetTracking> _tracker;
	id<DDSAssetProviding> _provider;
	id<DDSAssetObserving> _assetObserver;
	DDSScheduledTimer* _timer;
	DDSRemoteSyncState* _remoteSyncState;
	NSMutableSet* _pendingAssertionsToUpdate;
	NSObject*<OS_dispatch_queue> _pendingAssertionsQueue;

}

@property (nonatomic,readonly) id<DDSAssetTracking> tracker;                                     //@synthesize tracker=_tracker - In the implementation block
@property (nonatomic,readonly) id<DDSAssetProviding> provider;                                   //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) id<DDSAssetObserving> assetObserver;                              //@synthesize assetObserver=_assetObserver - In the implementation block
@property (nonatomic,readonly) DDSScheduledTimer * timer;                                        //@synthesize timer=_timer - In the implementation block
@property (nonatomic,readonly) DDSRemoteSyncState * remoteSyncState;                             //@synthesize remoteSyncState=_remoteSyncState - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingAssertionsToUpdate;                           //@synthesize pendingAssertionsToUpdate=_pendingAssertionsToUpdate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> pendingAssertionsQueue;              //@synthesize pendingAssertionsQueue=_pendingAssertionsQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<DDSManagingDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
-(DDSScheduledTimer *)timer;
-(void)didStartUpdateCycle;
-(void)handleRemovedAssertions:(id)arg1 ;
-(id)init;
-(void)didUpdateCatalogWithError:(id)arg1 ;
-(id<DDSManagingDelegate>)delegate;
-(id<DDSAssetProviding>)provider;
-(void)beginUpdateCycleForced:(BOOL)arg1 discretionaryDownload:(BOOL)arg2 ;
-(void)remoteSyncStateRequestsUpdate;
-(NSMutableSet *)pendingAssertionsToUpdate;
-(void)serverDidUpdateAssetsWithType:(id)arg1 ;
-(void)deleteV1AssetsIfNecessary;
-(void)setPendingAssertionsToUpdate:(NSMutableSet *)arg1 ;
-(void)setDelegate:(id<DDSManagingDelegate>)arg1 ;
-(void)triggerUpdate;
-(void)addAssertionForQuery:(id)arg1 policy:(id)arg2 assertionID:(id)arg3 clientID:(id)arg4 ;
-(void)triggerDump;
-(void)didEndUpdateCycleWithError:(id)arg1 ;
-(void)didCompleteDownloadForAssertions:(id)arg1 error:(id)arg2 ;
-(void)handleNewAssertions:(id)arg1 ;
-(void)removeAssertionWithID:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)pendingAssertionsQueue;
-(void)remoteSyncStateRequestsRetry;
-(id)initWithProvider:(id)arg1 tracker:(id)arg2 ;
-(void)willRetryUpdateCycle;
-(void)didBeginUpdateCatalog;
-(DDSRemoteSyncState *)remoteSyncState;
-(void)assertionIDsForClientID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)didChangeDownloadState:(unsigned long long)arg1 forAsset:(id)arg2 ;
-(id<DDSAssetTracking>)tracker;
-(id<DDSAssetObserving>)assetObserver;
-(void)didCompleteDownloadForAssertion:(id)arg1 error:(id)arg2 ;
@end

