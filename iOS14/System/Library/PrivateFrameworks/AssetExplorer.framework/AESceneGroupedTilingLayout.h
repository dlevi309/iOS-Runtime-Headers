/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <PhotosUICore/PXAssetsTilingLayout.h>

@protocol AEBrowserLayoutDelegate, AETileLayoutInfo;
@class AEProgressViewModelSnapshot;

@interface AESceneGroupedTilingLayout : PXAssetsTilingLayout {

	CGRect* _sectionBounds;
	CGSize _cachedGradientOverlaySize;
	BOOL _portraitOrientation;
	AEProgressViewModelSnapshot* _progressSnapshot;
	id<AEBrowserLayoutDelegate> _delegate;
	long long _layoutStyle;
	id<AETileLayoutInfo> __gradientTileLayoutInfo;

}

@property (nonatomic,readonly) id<AETileLayoutInfo> _gradientTileLayoutInfo;                     //@synthesize _gradientTileLayoutInfo=__gradientTileLayoutInfo - In the implementation block
@property (nonatomic,retain) AEProgressViewModelSnapshot * progressSnapshot;                     //@synthesize progressSnapshot=_progressSnapshot - In the implementation block
@property (assign,nonatomic,__weak) id<AEBrowserLayoutDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long layoutStyle;                                            //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,getter=isPortraitOrientation,nonatomic) BOOL portraitOrientation;              //@synthesize portraitOrientation=_portraitOrientation - In the implementation block
-(CGRect)contentBounds;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)prepareLayout;
-(void)setReferenceSize:(CGSize)arg1 ;
-(id<AEBrowserLayoutDelegate>)delegate;
-(long long)layoutStyle;
-(void)setDelegate:(id<AEBrowserLayoutDelegate>)arg1 ;
-(void)enumerateTilesInRect:(CGRect)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)getGeometry:(out PXTileGeometry*)arg1 group:(out unsigned long long*)arg2 userData:(out id*)arg3 forTileWithIdentifier:(PXTileIdentifier)arg4 ;
-(void)setSelectedIndexPaths:(id)arg1 ;
-(void)setVisibleOrigin:(CGPoint)arg1 ;
-(void)dealloc;
-(id)initWithDataSource:(id)arg1 layoutStyle:(long long)arg2 gradientTileInfo:(id)arg3 orientation:(long long)arg4 ;
-(long long)_thumbnailRowsForCurrentLayoutStyle;
-(void)setPortraitOrientation:(BOOL)arg1 ;
-(void)setProgressSnapshot:(AEProgressViewModelSnapshot *)arg1 ;
-(CGSize)_safeReferenceSize;
-(void)_invalidateBadgeDecorations;
-(PXTileGeometry*)_geometryWithFrame:(CGRect)arg1 alpha:(double)arg2 zPosition:(double)arg3 ;
-(CGPoint)_boundedVisibleOrigin;
-(double)_zPositionForDecorativeTileSubitem:(unsigned long long)arg1 ;
-(CGRect)_gradientShadowFrameForItemFrame:(CGRect)arg1 ;
-(CGRect)_frameForGridTile:(long long)arg1 inSection:(long long)arg2 ;
-(CGRect)_progressFrameForGridTileFrame:(CGRect)arg1 ;
-(AEProgressViewModelSnapshot *)progressSnapshot;
-(BOOL)isPortraitOrientation;
-(id<AETileLayoutInfo>)_gradientTileLayoutInfo;
-(id)initWithDataSource:(id)arg1 layoutStyle:(long long)arg2 orientation:(long long)arg3 ;
@end

