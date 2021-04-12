/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HMDMobileAssetManagerDelegate, OS_dispatch_queue;
@class HMFTimer, NSObject, NSString;

@interface HMDMobileAssetManager : NSObject <HMFTimerDelegate> {

	id<HMDMobileAssetManagerDelegate> _delegate;
	HMFTimer* _periodicMobileCatalogUpdateTimer;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (retain) HMFTimer * periodicMobileCatalogUpdateTimer;                              //@synthesize periodicMobileCatalogUpdateTimer=_periodicMobileCatalogUpdateTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                         //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic,__weak) id<HMDMobileAssetManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<HMDMobileAssetManagerDelegate>)delegate;
-(void)setDelegate:(id<HMDMobileAssetManagerDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_updateMetadata;
-(void)timerDidFire:(id)arg1 ;
-(void)handleMetadataAssetUpdated:(id)arg1 ;
-(void)handleMetadataAssetUpdated;
-(void)_resetPeriodicMobileCatalogUpdateTimer;
-(void)_handleMetadataAssetUpdated;
-(void)_downloadNewAsset:(id)arg1 availableVersion:(unsigned long long)arg2 newVersion:(unsigned long long)arg3 ;
-(void)_installAvailableAsset:(id)arg1 version:(unsigned long long)arg2 ;
-(void)_startPeriodicMobileCatalogUpdateTimer;
-(void)_downloadCatalogAndUpdateMetadataIfAble;
-(HMFTimer *)periodicMobileCatalogUpdateTimer;
-(void)setPeriodicMobileCatalogUpdateTimer:(HMFTimer *)arg1 ;
-(void)registerForNotification;
-(void)purgeAllInstalledAssets;
@end

