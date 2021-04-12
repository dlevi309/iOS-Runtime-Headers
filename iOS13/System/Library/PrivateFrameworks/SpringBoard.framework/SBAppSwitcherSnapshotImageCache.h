/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBUIActiveOrientationObserver.h>

@protocol OS_dispatch_queue, BSInvalidatable, SBAppSwitcherSnapshotImageCacheDelegate;
@class NSObject, NSMutableDictionary, NSArray, SBAppSwitcherSettings, SBIconController, SBApplicationController, SBOrientationLockManager, NSString;

@interface SBAppSwitcherSnapshotImageCache : NSObject <SBUIActiveOrientationObserver> {

	NSObject*<OS_dispatch_queue> _snapshotQueue;
	NSObject*<OS_dispatch_queue> _controlQueue;
	NSMutableDictionary* _cachedSnapshots;
	NSMutableDictionary* _cacheEntryUpdateObservers;
	NSMutableDictionary* _snapshotRequestsCurrentlyBeingLoaded;
	unsigned long long _snapshotRequestSequenceID;
	NSArray* _appLayoutsInPriorityOrder;
	NSArray* _appLayoutsRequiringFullSizeSnapshots;
	NSArray* _defaultAppLayouts;
	long long _lastKnownInterfaceOrientation;
	long long _lastKnownUserInterfaceStyle;
	SBAppSwitcherSettings* _settings;
	id<BSInvalidatable> _stateCaptureInvalidatable;
	NSRange _lastVisibleRange;
	NSArray* _lastHighPriorityAppLayouts;
	NSArray* _lastAllAppLayouts;
	BOOL _lastPriorityBiasedForward;
	BOOL _shouldPurgeNilEntries;
	SBIconController* _iconController;
	SBApplicationController* _applicationController;
	SBOrientationLockManager* _orientationLockManager;
	BOOL _cachingEnabled;
	BOOL _reloadsSnapshotsForActiveInterfaceOrientationChange;
	id<SBAppSwitcherSnapshotImageCacheDelegate> _delegate;
	NSString* _debugName;
	unsigned long long _atomicNumberOfAppLayoutsToCache;

}

@property (assign) unsigned long long atomicNumberOfAppLayoutsToCache;                                 //@synthesize atomicNumberOfAppLayoutsToCache=_atomicNumberOfAppLayoutsToCache - In the implementation block
@property (assign,nonatomic,__weak) id<SBAppSwitcherSnapshotImageCacheDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL cachingEnabled;                                                    //@synthesize cachingEnabled=_cachingEnabled - In the implementation block
@property (assign,nonatomic) BOOL reloadsSnapshotsForActiveInterfaceOrientationChange;                 //@synthesize reloadsSnapshotsForActiveInterfaceOrientationChange=_reloadsSnapshotsForActiveInterfaceOrientationChange - In the implementation block
@property (nonatomic,copy) NSString * debugName;                                                       //@synthesize debugName=_debugName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id<SBAppSwitcherSnapshotImageCacheDelegate>)delegate;
-(void)setDelegate:(id<SBAppSwitcherSnapshotImageCacheDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSString *)debugName;
-(void)setDebugName:(NSString *)arg1 ;
-(void)disableCaching;
-(BOOL)cachingEnabled;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(void)reloadSnapshotsForInterfaceStyleChange:(long long)arg1 ;
-(void)enableCachingWithMaximumNumberOfAppLayoutsToCache:(unsigned long long)arg1 ;
-(void)updateCacheWithMaximumNumberOfAppLayoutsToCache:(unsigned long long)arg1 ;
-(void)setReloadsSnapshotsForActiveInterfaceOrientationChange:(BOOL)arg1 ;
-(void)_resetLastCachedValues;
-(id)_initWithDelegate:(id)arg1 iconController:(id)arg2 applicationController:(id)arg3 orientationLockManager:(id)arg4 settings:(id)arg5 ;
-(void)_snapshotChanged:(id)arg1 ;
-(void)_updateActiveOrientationObservingIfNeeded;
-(void)_setCachingEnabled:(BOOL)arg1 numberOfAppLayoutsToCache:(unsigned long long)arg2 ;
-(void)setAtomicNumberOfAppLayoutsToCache:(unsigned long long)arg1 ;
-(void)_updateAppLayoutPriorityList;
-(void)_purgeLowPriorityFullSizeSnapshots;
-(void)_purgeLowPriorityFullSizeSnapshotRequests;
-(void)_purgeLowPrioritySnapshots;
-(void)_purgeLowPrioritySnapshotRequests;
-(void)_enqueueNextSnapshotRequestIfNecessary;
-(void)_purgeSnapshotRequestsForDisplayItem:(id)arg1 withReason:(id)arg2 ;
-(void)_setSnapshotNeedsUpdateForDisplayItem:(id)arg1 ;
-(id)_cachableAppLayouts;
-(void)_addObserver:(id)arg1 forDisplayItem:(id)arg2 ;
-(void)_purgeSnapshotsForDisplayItem:(id)arg1 ;
-(void)_purgeAllSnapshots;
-(void)_purgeAllSnapshotRequests;
-(void)_updateCacheForDisplayItem:(id)arg1 ;
-(id)_highPriorityAppLayouts;
-(id)_allAppLayouts;
-(NSRange)_visibleAppLayoutRange;
-(BOOL)_biasForwardLoading;
-(id)_fullSizeSnapshotAppLayouts;
-(unsigned long long)atomicNumberOfAppLayoutsToCache;
-(id)_defaultAppLayouts;
-(void)_snapshotImage:(id)arg1 finishedLoadingForRequest:(id)arg2 ;
-(void)_asynchronouslyLoadSnapshotFromRequest:(id)arg1 ;
-(BOOL)_isValidSnapshotRequest:(id)arg1 ;
-(id)_representedApplicationSceneEntityForDisplayItem:(id)arg1 ;
-(long long)_orientationForAppLayout:(id)arg1 ;
-(BOOL)_isLoadingForDefaultDisplayItem:(id)arg1 ;
-(void)_createDownscaledVariantForRequest:(id)arg1 snapshot:(id)arg2 displayItem:(id)arg3 sceneHandle:(id)arg4 application:(id)arg5 ;
-(void)_cacheSnapshotForRequest:(id)arg1 withDisplayItem:(id)arg2 inAppLayout:(id)arg3 ;
-(double)_scaleForDownscaledSnapshots;
-(BOOL)reloadsSnapshotsForActiveInterfaceOrientationChange;
-(BOOL)_isValidAppLayout:(id)arg1 withSnapshot:(id)arg2 givenCachableAppLayouts:(id)arg3 ;
-(id)_cachableAppLayoutsRequiringFullSizeSnapshots;
-(void)_enqueueSnapshotRequestsForCachableAppLayouts:(id)arg1 forFullSizeSnapshots:(BOOL)arg2 ;
-(id)_createSnapshotRequestWithDisplayItem:(id)arg1 inAppLayout:(id)arg2 forFullSizeSnapshot:(BOOL)arg3 ;
-(void)_loadSnapshotForRequest:(id)arg1 withDisplayItem:(id)arg2 inAppLayout:(id)arg3 ;
-(void)_purgeSnapshotRequest:(id)arg1 withReason:(id)arg2 ;
-(void)_addCacheEntryForImage:(id)arg1 fromRequest:(id)arg2 ;
-(void)_updateObserversForDisplayItem:(id)arg1 withCacheEntry:(id)arg2 ;
-(BOOL)_keepGoingForRequest:(id)arg1 ;
-(id)_uiImageForCGImage:(CGImageRef)arg1 forSnapshotRequest:(id)arg2 ;
-(CGImageRef)_createDecodedImageIfPossible:(CGImageRef)arg1 ;
-(void)addSnapshotUpdateObserver:(id)arg1 forDisplayItem:(id)arg2 inAppLayout:(id)arg3 ;
-(void)removeSnapshotObserver:(id)arg1 ;
-(id)_appLayoutsInPriorityOrder;
-(id)_cachableAppLayoutsForTesting;
-(void)_setShouldPurgeNilEntry:(BOOL)arg1 ;
@end

