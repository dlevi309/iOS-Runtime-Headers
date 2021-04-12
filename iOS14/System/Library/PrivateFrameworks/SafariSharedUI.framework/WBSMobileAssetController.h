/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <libobjc.A.dylib/WBSMobileAssetControllerProtocol.h>

@protocol OS_dispatch_queue, WBSMobileAssetControllerDelegate;
@class NSObject, WBSPeriodicActivityScheduler, NSString, NSDate;

@interface WBSMobileAssetController : NSObject <WBSMobileAssetControllerProtocol> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	WBSPeriodicActivityScheduler* _scheduler;
	id<WBSMobileAssetControllerDelegate> _delegate;
	double _updateInterval;
	NSString* _assetType;
	NSString* _updateDateDefaultsKey;

}

@property (__weak) id<WBSMobileAssetControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetType;                          //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,copy,readonly) NSString * updateDateDefaultsKey;              //@synthesize updateDateDefaultsKey=_updateDateDefaultsKey - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdateDate; 
@property (nonatomic,readonly) double updateInterval;                              //@synthesize updateInterval=_updateInterval - In the implementation block
-(NSDate *)lastUpdateDate;
-(double)updateInterval;
-(NSString *)assetType;
-(id<WBSMobileAssetControllerDelegate>)delegate;
-(void)setLastUpdateDate:(NSDate *)arg1 ;
-(void)setDelegate:(id<WBSMobileAssetControllerDelegate>)arg1 ;
-(void)_update;
-(void)queryURL:(/*^block*/id)arg1 ;
-(id)initWithMobileAssetType:(id)arg1 updateInterval:(double)arg2 minimumDelay:(double)arg3 ;
-(id)initWithMobileAssetType:(id)arg1 updateDateDefaultsKey:(id)arg2 updateInterval:(double)arg3 minimumDelay:(double)arg4 ;
-(void)_queryMostRecentAsset:(/*^block*/id)arg1 ;
-(void)_downloadIfNecessary:(/*^block*/id)arg1 ;
-(void)_updateCatalog:(/*^block*/id)arg1 ;
-(void)_queryAssets:(/*^block*/id)arg1 ;
-(NSString *)updateDateDefaultsKey;
@end

