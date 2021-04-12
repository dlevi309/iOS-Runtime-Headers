/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBDeviceApplicationSceneHandle, SBAppSwitcherSnapshotCacheEntry;

@interface SBAppSwitcherSnapshotViewState : NSObject {

	BOOL _animatingTransition;
	SBDeviceApplicationSceneHandle* _sceneHandle;
	SBAppSwitcherSnapshotCacheEntry* _cacheEntry;

}

@property (nonatomic,retain) SBDeviceApplicationSceneHandle * sceneHandle;                       //@synthesize sceneHandle=_sceneHandle - In the implementation block
@property (nonatomic,retain) SBAppSwitcherSnapshotCacheEntry * cacheEntry;                       //@synthesize cacheEntry=_cacheEntry - In the implementation block
@property (assign,getter=isAnimatingTransition,nonatomic) BOOL animatingTransition;              //@synthesize animatingTransition=_animatingTransition - In the implementation block
-(SBAppSwitcherSnapshotCacheEntry *)cacheEntry;
-(SBDeviceApplicationSceneHandle *)sceneHandle;
-(BOOL)isAnimatingTransition;
-(void)setAnimatingTransition:(BOOL)arg1 ;
-(void)setSceneHandle:(SBDeviceApplicationSceneHandle *)arg1 ;
-(void)setCacheEntry:(SBAppSwitcherSnapshotCacheEntry *)arg1 ;
@end

