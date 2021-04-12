/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXAssetsScene.h>
#import <libobjc.A.dylib/PXTilingControllerPreheatHandler.h>

@class NSMutableSet, NSMapTable, PXDebugAssetBadgeManager, PXUIMediaProvider, PXUIScrollViewController, NSString;

@interface PXUIAssetsScene : PXAssetsScene <PXTilingControllerPreheatHandler> {

	NSMutableSet* _tilesInUse;
	NSMapTable* _imageRequesterByAssetReference;
	SCD_Struct_PX38 _needsUpdateFlags;
	BOOL __supressingColorSettings;
	PXDebugAssetBadgeManager* __debugBadgeManager;
	double _contentTileCornerRadius;
	CGSize _maximumImageSize;

}

@property (assign,setter=_setSupressingColorSettings:,nonatomic) BOOL _supressingColorSettings;                        //@synthesize _supressingColorSettings=__supressingColorSettings - In the implementation block
@property (setter=_setDebugBadgeManager:,nonatomic,retain) PXDebugAssetBadgeManager * _debugBadgeManager;              //@synthesize _debugBadgeManager=__debugBadgeManager - In the implementation block
@property (assign,nonatomic) CGSize maximumImageSize;                                                                  //@synthesize maximumImageSize=_maximumImageSize - In the implementation block
@property (assign,nonatomic) double contentTileCornerRadius;                                                           //@synthesize contentTileCornerRadius=_contentTileCornerRadius - In the implementation block
@property (nonatomic,readonly) PXUIMediaProvider * mediaProvider; 
@property (nonatomic,readonly) PXUIScrollViewController * scrollViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)preloadResources;
-(BOOL)needsUpdate;
-(PXUIScrollViewController *)scrollViewController;
-(void)startPreheatingTilesForIdentifiers:(const PXTileIdentifier*)arg1 withGeometries:(const PXTileGeometry*)arg2 count:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)stopPreheatingTilesForIdentifiers:(const PXTileIdentifier*)arg1 withGeometries:(const PXTileGeometry*)arg2 count:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)reusableObjectPool:(id)arg1 didCreateReusableObject:(id)arg2 ;
-(void)reusableObjectPool:(id)arg1 didEvictReusableObject:(id)arg2 ;
-(void)checkInTile:(void*)arg1 withIdentifier:(PXTileIdentifier)arg2 ;
-(void*)checkOutTileForIdentifier:(PXTileIdentifier)arg1 layout:(id)arg2 ;
-(id)_assetsBySizeWithTileIdentifiers:(const PXTileIdentifier*)arg1 withGeometries:(const PXTileGeometry*)arg2 count:(unsigned long long)arg3 ;
-(void)updateIfNeeded;
-(void)_registerDefaultTiles;
-(id)initWithTilingController:(id)arg1 mediaProvider:(id)arg2 dataSourceManager:(id)arg3 selectionManager:(id)arg4 delegate:(id)arg5 ;
-(void)_setSupressingColorSettings:(BOOL)arg1 ;
-(id)_imageRequesterForIndexPath:(PXSimpleIndexPath)arg1 inDataSource:(id)arg2 ;
-(id)_imageRequesterForAssetReference:(id)arg1 ;
-(void)_invalidatePreheating;
-(void)_transitionImageRequestersToDataSource:(id)arg1 ;
-(void)_updatePreheatingIfNeeded;
-(void)willTransitionToDataSource:(id)arg1 ;
-(BOOL)_supressingColorSettings;
-(PXDebugAssetBadgeManager *)_debugBadgeManager;
-(void)_setDebugBadgeManager:(id)arg1 ;
-(double)contentTileCornerRadius;
-(void)setContentTileCornerRadius:(double)arg1 ;
-(id)badgeManager;
-(void)setMaximumImageSize:(CGSize)arg1 ;
-(CGSize)maximumImageSize;
-(void)dealloc;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

