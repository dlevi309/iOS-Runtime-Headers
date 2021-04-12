/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/

#import <libobjc.A.dylib/DDSAssetProvidingDelegate.h>
#import <libobjc.A.dylib/DDSReachabilityObserverDelegate.h>
#import <libobjc.A.dylib/DDSAssetTrackingDelegate.h>
#import <libobjc.A.dylib/DDSManaging.h>

@protocol DDSManagingDelegate, DDSAssetTracking, DDSAssetProviding;
@class DDSScheduledTimer, DDSAssetSyncState, DDSReachabilityObserver, NSString;

@interface DDSManager : NSObject <DDSAssetProvidingDelegate, DDSReachabilityObserverDelegate, DDSAssetTrackingDelegate, DDSManaging> {

	id<DDSManagingDelegate> _delegate;
	id<DDSAssetTracking> _tracker;
	id<DDSAssetProviding> _provider;
	DDSScheduledTimer* _timer;
	DDSAssetSyncState* _syncState;
	DDSReachabilityObserver* _reachabilityObserver;

}

@property (nonatomic,readonly) id<DDSAssetTracking> tracker;                                //@synthesize tracker=_tracker - In the implementation block
@property (nonatomic,readonly) id<DDSAssetProviding> provider;                              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) DDSScheduledTimer * timer;                                   //@synthesize timer=_timer - In the implementation block
@property (nonatomic,readonly) DDSAssetSyncState * syncState;                               //@synthesize syncState=_syncState - In the implementation block
@property (nonatomic,readonly) DDSReachabilityObserver * reachabilityObserver;              //@synthesize reachabilityObserver=_reachabilityObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<DDSManagingDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<DDSManagingDelegate>)delegate;
-(void)setDelegate:(id<DDSManagingDelegate>)arg1 ;
-(DDSScheduledTimer *)timer;
-(id<DDSAssetTracking>)tracker;
-(id<DDSAssetProviding>)provider;
-(void)beginUpdate;
-(DDSAssetSyncState *)syncState;
-(void)setTimer;
-(void)addAssertionForQuery:(id)arg1 policy:(id)arg2 assertionID:(id)arg3 clientID:(id)arg4 ;
-(void)removeAssertionWithID:(id)arg1 ;
-(void)assertionIDsForClientID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)didUpdateManifestWithError:(id)arg1 ;
-(void)didCompleteDownloadForAssertion:(id)arg1 error:(id)arg2 ;
-(void)didChangeDownloadState:(unsigned long long)arg1 forAsset:(id)arg2 ;
-(void)reachabilityStateDidChange:(BOOL)arg1 ;
-(void)didCompleteDownloadForAssertions:(id)arg1 error:(id)arg2 ;
-(void)handleNewAssertions:(id)arg1 ;
-(void)handleRemovedAssertions:(id)arg1 ;
-(id)initWithProvider:(id)arg1 tracker:(id)arg2 ;
-(void)checkSyncState;
-(void)deleteV1AssetsIfNecessary;
-(DDSReachabilityObserver *)reachabilityObserver;
@end

