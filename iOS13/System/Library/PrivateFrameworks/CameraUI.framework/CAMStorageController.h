/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol CAMStorageControllerDelegate, OS_dispatch_queue;
#import <CameraUI/CameraUI-Structs.h>
@class NSDate, NSObject;

@interface CAMStorageController : NSObject {

	id<CAMStorageControllerDelegate> _delegate;
	long long __cachedVeryLowDiskThreshold;
	long long __cachedLowDiskThreshold;
	long long __cachedLegacyMGDiskThreshold;
	NSDate* __lastPurgeRequestUpdateTime;
	NSObject*<OS_dispatch_queue> __cacheDeleteQueryQueue;
	CacheDeleteTokenRef __queryQueue_currentToken;

}

@property (assign,nonatomic) long long _cachedVeryLowDiskThreshold;                              //@synthesize _cachedVeryLowDiskThreshold=__cachedVeryLowDiskThreshold - In the implementation block
@property (assign,nonatomic) long long _cachedLowDiskThreshold;                                  //@synthesize _cachedLowDiskThreshold=__cachedLowDiskThreshold - In the implementation block
@property (assign,nonatomic) long long _cachedLegacyMGDiskThreshold;                             //@synthesize _cachedLegacyMGDiskThreshold=__cachedLegacyMGDiskThreshold - In the implementation block
@property (nonatomic,retain) NSDate * _lastPurgeRequestUpdateTime;                               //@synthesize _lastPurgeRequestUpdateTime=__lastPurgeRequestUpdateTime - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _cacheDeleteQueryQueue;              //@synthesize _cacheDeleteQueryQueue=__cacheDeleteQueryQueue - In the implementation block
@property (assign,nonatomic) CacheDeleteTokenRef _queryQueue_currentToken;                       //@synthesize _queryQueue_currentToken=__queryQueue_currentToken - In the implementation block
@property (assign,nonatomic,__weak) id<CAMStorageControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<CAMStorageControllerDelegate>)delegate;
-(void)setDelegate:(id<CAMStorageControllerDelegate>)arg1 ;
-(void)_notifyDelegate;
-(void)reportLowDiskEventWithIdentifier:(id)arg1 ;
-(BOOL)hasDiskSpaceToAllowCaptureWithConfiguration:(id)arg1 allowPurging:(BOOL)arg2 ;
-(void)_loadFreeDiskThresholds;
-(void)_legacyDiskSpaceDidBecomeLowNotification;
-(long long)_totalFreeBytes;
-(long long)_absoluteMinimumBytesForMode:(long long)arg1 ;
-(void)_updatePurgeRequestStateForConfiguration:(id)arg1 totalFreeBytes:(long long)arg2 ;
-(NSObject*<OS_dispatch_queue>)_cacheDeleteQueryQueue;
-(void)_queryQueue_aggregateLowDiskEventWithIdentifier:(id)arg1 ;
-(id)_pathForStorageMountPoint;
-(void)_statMountPoint:(statfs*)arg1 ;
-(long long)_cachedVeryLowDiskThreshold;
-(long long)_cachedLegacyMGDiskThreshold;
-(void)set_cachedLegacyMGDiskThreshold:(long long)arg1 ;
-(void)set_cachedVeryLowDiskThreshold:(long long)arg1 ;
-(void)set_cachedLowDiskThreshold:(long long)arg1 ;
-(long long)_cachedLowDiskThreshold;
-(long long)_preferredMinimumBytesForVideoConfiguration:(long long)arg1 encodingBehavior:(long long)arg2 ;
-(NSDate *)_lastPurgeRequestUpdateTime;
-(long long)_preferredMinimumBytesForConfiguration:(id)arg1 ;
-(void)_queryQueue_updatePurgeRequestStateForTotalFreeBytes:(long long)arg1 preferredFreeBytes:(long long)arg2 ;
-(void)set_lastPurgeRequestUpdateTime:(NSDate *)arg1 ;
-(CacheDeleteTokenRef)_queryQueue_currentToken;
-(void)set_queryQueue_currentToken:(CacheDeleteTokenRef)arg1 ;
@end

