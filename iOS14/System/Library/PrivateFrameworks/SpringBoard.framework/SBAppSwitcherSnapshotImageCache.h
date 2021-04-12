/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBUIActiveOrientationObserver.h>

@protocol OS_dispatch_queue, BSInvalidatable, SBAppSwitcherSnapshotImageCacheDelegate;
@class NSObject, NSMutableDictionary, SBAppSwitcherSettings, SBIconController, SBApplicationController, SBOrientationLockManager, NSArray, NSString;

@interface SBAppSwitcherSnapshotImageCache : NSObject <SBUIActiveOrientationObserver> {

	NSObject*<OS_dispatch_queue> _snapshotQueue;
	NSObject*<OS_dispatch_queue> _controlQueue;
	NSMutableDictionary* _cachedSnapshots;
	NSMutableDictionary* _cacheEntryUpdateObservers;
	NSMutableDictionary* _snapshotRequestsCurrentlyBeingLoaded;
	unsigned long long _snapshotRequestSequenceID;
	long long _lastKnownInterfaceOrientation;
	long long _lastKnownUserInterfaceStyle;
	SBAppSwitcherSettings* _settings;
	id<BSInvalidatable> _stateCaptureInvalidatable;
	BOOL _shouldPurgeNilEntries;
	SBIconController* _iconController;
	SBApplicationController* _applicationController;
	SBOrientationLockManager* _orientationLockManager;
	BOOL _reloadsSnapshotsForActiveInterfaceOrientationChange;
	NSArray* _queue_cachableAppLayouts;
	NSArray* _queue_fullSizeCachableAppLayouts;
	id<SBAppSwitcherSnapshotImageCacheDelegate> _delegate;
	NSString* _debugName;

}

@property (assign,nonatomic,__weak) id<SBAppSwitcherSnapshotImageCacheDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * cachableAppLayouts;                                               //@synthesize queue_cachableAppLayouts=_queue_cachableAppLayouts - In the implementation block
@property (nonatomic,copy) NSArray * fullSizeCachableAppLayouts;                                       //@synthesize queue_fullSizeCachableAppLayouts=_queue_fullSizeCachableAppLayouts - In the implementation block
@property (assign,nonatomic) BOOL reloadsSnapshotsForActiveInterfaceOrientationChange;                 //@synthesize reloadsSnapshotsForActiveInterfaceOrientationChange=_reloadsSnapshotsForActiveInterfaceOrientationChange - In the implementation block
@property (nonatomic,copy) NSString * debugName;                                                       //@synthesize debugName=_debugName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)cachableAppLayouts;
-(BOOL)_keepGoingForRequest:(id)arg1 ;
-(void)setFullSizeCachableAppLayouts:(NSArray *)arg1 ;
-(void)setDebugName:(NSString *)arg1 ;
-(NSArray *)fullSizeCachableAppLayouts;
-(void)_purgeLowPriorityFullSizeSnapshots;
-(void)_updateObserversForDisplayItem:(id)arg1 inAppLayout:(id)arg2 withCacheEntry:(id)arg3 ;
-(id)init;
-(void)_purgeSnapshotsForKey:(id)arg1 ;
-(id<SBAppSwitcherSnapshotImageCacheDelegate>)delegate;
-(void)_updateActiveOrientationObservingIfNeeded;
-(void)_purgeSnapshotRequestsForDisplayItem:(id)arg1 withReason:(id)arg2 ;
-(void)addSnapshotUpdateObserver:(id)arg1 forDisplayItem:(id)arg2 inAppLayout:(id)arg3 ;
-(void)_purgeSnapshotRequest:(id)arg1 withReason:(id)arg2 ;
-(CGImageRef)_createDecodedImageIfPossible:(CGImageRef)arg1 ;
-(void)setCachableAppLayouts:(NSArray *)arg1 ;
-(void)_purgeLowPrioritySnapshots;
-(void)_purgeAllSnapshotRequests;
-(void)setDelegate:(id<SBAppSwitcherSnapshotImageCacheDelegate>)arg1 ;
-(void)_setSnapshotNeedsUpdateForDisplayItem:(id)arg1 ;
-(NSString *)description;
-(double)_scaleForDownscaledSnapshotsForAppLayout:(id)arg1 ;
-(void)_enqueueNextSnapshotRequestIfNecessary;
-(id)initWithDelegate:(id)arg1 ;
-(long long)_orientationForAppLayout:(id)arg1 ;
-(void)removeSnapshotObserver:(id)arg1 ;
-(void)setReloadsSnapshotsForActiveInterfaceOrientationChange:(BOOL)arg1 ;
-(id)_initWithDelegate:(id)arg1 iconController:(id)arg2 applicationController:(id)arg3 orientationLockManager:(id)arg4 settings:(id)arg5 ;
-(void)_updateCache;
-(void)_updateCacheForDisplayItem:(id)arg1 ;
-(id)_cachableAppLayoutsRequiringFullSizeSnapshots;
-(BOOL)reloadsSnapshotsForActiveInterfaceOrientationChange;
-(BOOL)_isValidSnapshotRequest:(id)arg1 ;
-(void)_purgeAllSnapshots;
-(void)_snapshotChanged:(id)arg1 ;
-(id)_uiImageForCGImage:(CGImageRef)arg1 forSnapshotRequest:(id)arg2 ;
-(BOOL)_isValidAppLayout:(id)arg1 withSnapshot:(id)arg2 givenCachableAppLayouts:(id)arg3 ;
-(id)_createSnapshotRequestWithDisplayItem:(id)arg1 inAppLayout:(id)arg2 forFullSizeSnapshot:(BOOL)arg3 ;
-(void)_cacheSnapshotForRequest:(id)arg1 withDisplayItem:(id)arg2 inAppLayout:(id)arg3 ;
-(void)_asynchronouslyLoadSnapshotFromRequest:(id)arg1 ;
-(void)reloadSnapshotsForInterfaceStyleChange:(long long)arg1 ;
-(void)_setShouldPurgeNilEntry:(BOOL)arg1 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(id)_representedApplicationSceneEntityForDisplayItem:(id)arg1 ;
-(id)_appLayoutsInPriorityOrder;
-(void)_purgeLowPrioritySnapshotRequests;
-(void)_purgeLowPriorityFullSizeSnapshotRequests;
-(void)_enqueueSnapshotRequestsForCachableAppLayouts:(id)arg1 forFullSizeSnapshots:(BOOL)arg2 ;
-(void)_loadSnapshotForRequest:(id)arg1 withDisplayItem:(id)arg2 inAppLayout:(id)arg3 ;
-(NSString *)debugName;
-(void)_snapshotImage:(id)arg1 finishedLoadingForRequest:(id)arg2 ;
-(void)_createDownscaledVariantForRequest:(id)arg1 snapshot:(id)arg2 displayItem:(id)arg3 sceneHandle:(id)arg4 application:(id)arg5 ;
-(void)dealloc;
-(void)_addCacheEntryForImage:(id)arg1 fromRequest:(id)arg2 ;
-(id)_cachableAppLayoutsForTesting;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(void)_addObserver:(id)arg1 forDisplayItem:(id)arg2 inAppLayout:(id)arg3 ;
@end

