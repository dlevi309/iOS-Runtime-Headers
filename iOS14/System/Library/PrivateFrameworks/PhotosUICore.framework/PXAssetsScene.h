/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXReusableObjectPoolDelegate.h>
#import <libobjc.A.dylib/PXAssetsDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXTileSource.h>
#import <libobjc.A.dylib/PXTilingControllerScrollDelegate.h>
#import <libobjc.A.dylib/PXTilingControllerTransitionDelegate.h>

@protocol PXAssetsSceneDelegate;
@class PXTilingController, PXMediaProvider, PXAssetsDataSourceManager, PXSectionedSelectionManager, PXAssetBadgeManager, PXScrollViewSpeedometer, PXReusableObjectPool, PXAssetsDataSource, NSMutableArray, PXAssetsTilingLayout, NSString;

@interface PXAssetsScene : NSObject <PXReusableObjectPoolDelegate, PXAssetsDataSourceManagerObserver, PXChangeObserver, PXTileSource, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate> {

	BOOL _isPerformingChanges;
	BOOL _isPerformingUpdates;
	BOOL _hasScheduledUpdate;
	SCD_Struct_PX38 _needsUpdateFlags;
	SCD_Struct_PX51 _delegateFlags;
	BOOL _isAskingForTileIdentifierConverter;
	BOOL _isAskingForTransitionAnimationCoordinator;
	BOOL _animatesContent;
	BOOL _autoplayTilesWaitForInput;
	id<PXAssetsSceneDelegate> _delegate;
	PXTilingController* _tilingController;
	PXMediaProvider* _mediaProvider;
	PXAssetsDataSourceManager* _dataSourceManager;
	PXSectionedSelectionManager* _selectionManager;
	PXAssetBadgeManager* _badgeManager;
	PXScrollViewSpeedometer* _scrollSpeedometer;
	PXReusableObjectPool* _viewTileReusePool;
	PXAssetsDataSource* __dataSource;
	NSMutableArray* __anchors;
	unsigned long long _autoplayBehavior;

}

@property (setter=_setDataSource:,nonatomic,retain) PXAssetsDataSource * _dataSource;              //@synthesize _dataSource=__dataSource - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _anchors;                                          //@synthesize _anchors=__anchors - In the implementation block
@property (assign,nonatomic) unsigned long long autoplayBehavior;                                  //@synthesize autoplayBehavior=_autoplayBehavior - In the implementation block
@property (assign,nonatomic) BOOL autoplayTilesWaitForInput;                                       //@synthesize autoplayTilesWaitForInput=_autoplayTilesWaitForInput - In the implementation block
@property (assign,nonatomic,__weak) id<PXAssetsSceneDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PXTilingController * tilingController;                              //@synthesize tilingController=_tilingController - In the implementation block
@property (nonatomic,readonly) PXMediaProvider * mediaProvider;                                    //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSourceManager * dataSourceManager;                      //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager;                     //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,readonly) PXAssetBadgeManager * badgeManager;                                 //@synthesize badgeManager=_badgeManager - In the implementation block
@property (nonatomic,readonly) PXScrollViewSpeedometer * scrollSpeedometer;                        //@synthesize scrollSpeedometer=_scrollSpeedometer - In the implementation block
@property (nonatomic,readonly) PXReusableObjectPool * viewTileReusePool;                           //@synthesize viewTileReusePool=_viewTileReusePool - In the implementation block
@property (nonatomic,readonly) PXAssetsTilingLayout * targetLayout; 
@property (nonatomic,readonly) PXAssetsTilingLayout * currentLayout; 
@property (assign,nonatomic) BOOL animatesContent;                                                 //@synthesize animatesContent=_animatesContent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXSectionedSelectionManager *)selectionManager;
-(PXMediaProvider *)mediaProvider;
-(BOOL)needsUpdate;
-(void)_configureLayout:(id)arg1 ;
-(void)setNeedsUpdate;
-(id)init;
-(id<PXAssetsSceneDelegate>)delegate;
-(PXAssetsTilingLayout *)currentLayout;
-(void)_updateDataSourceIfNeeded;
-(void)_setDataSource:(id)arg1 ;
-(void)checkInTile:(void*)arg1 withIdentifier:(PXTileIdentifier)arg2 ;
-(void*)checkOutTileForIdentifier:(PXTileIdentifier)arg1 layout:(id)arg2 ;
-(PXTilingController *)tilingController;
-(BOOL)providesTileForIdentifier:(PXTileIdentifier)arg1 ;
-(void)updateIfNeeded;
-(PXAssetsTilingLayout *)targetLayout;
-(void)setDelegate:(id<PXAssetsSceneDelegate>)arg1 ;
-(id)initWithTilingController:(id)arg1 mediaProvider:(id)arg2 dataSourceManager:(id)arg3 selectionManager:(id)arg4 delegate:(id)arg5 ;
-(void)willTransitionToDataSource:(id)arg1 ;
-(PXAssetsDataSourceManager *)dataSourceManager;
-(PXAssetBadgeManager *)badgeManager;
-(PXAssetsDataSource *)_dataSource;
-(id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1 ;
-(NSMutableArray *)_anchors;
-(id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2 ;
-(id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2 ;
-(CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2 ;
-(CGPoint)tilingController:(id)arg1 targetVisibleOriginForLayout:(id)arg2 proposedVisibleOrigin:(CGPoint)arg3 ;
-(void)_updateLayoutIfNeeded;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)_invalidateLayout;
-(void)transitionToLayout:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)initWithTilingController:(id)arg1 mediaProvider:(id)arg2 dataSourceManager:(id)arg3 delegate:(id)arg4 ;
-(void)didTransitionToDataSource:(id)arg1 ;
-(void)setAnimatesContent:(BOOL)arg1 ;
-(void)_saveAnchorAsset;
-(PXScrollViewSpeedometer *)scrollSpeedometer;
-(PXReusableObjectPool *)viewTileReusePool;
-(BOOL)animatesContent;
-(unsigned long long)autoplayBehavior;
-(void)setAutoplayBehavior:(unsigned long long)arg1 ;
-(BOOL)autoplayTilesWaitForInput;
-(void)setAutoplayTilesWaitForInput:(BOOL)arg1 ;
@end

