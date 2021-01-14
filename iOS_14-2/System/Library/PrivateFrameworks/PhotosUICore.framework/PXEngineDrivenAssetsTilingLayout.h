/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXAssetsTilingLayout.h>

@protocol PXEngineDrivenAssetsTilingLayoutDelegate;
@class PXLayoutSnapshot;

@interface PXEngineDrivenAssetsTilingLayout : PXAssetsTilingLayout {

	{?=} _needsUpdateFlags;
	struct {
		BOOL respondsToEngineDrivenLayoutReferenceSizeDidChange;
		BOOL respondsToEngineDrivenLayoutAspectRatioForItemAtIndexPath;
		BOOL respondsToEngineDrivenLayoutZPositionForItemAtIndexPath;
		BOOL respondsToEngineDrivenLayoutContentsRectForItemAtIndexPathForAspectRatio;
		BOOL respondsToEngineDrivenLayoutPlayButtonSizeForItemAtIndexPathForAspectRatio;
	}  _delegateFlags;
	id<PXEngineDrivenAssetsTilingLayoutDelegate> _delegate;
	PXLayoutSnapshot* _layoutSnapshot;
	long long _contentMode;

}

@property (assign,nonatomic,__weak) id<PXEngineDrivenAssetsTilingLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PXLayoutSnapshot * layoutSnapshot;                                         //@synthesize layoutSnapshot=_layoutSnapshot - In the implementation block
@property (assign,nonatomic) long long contentMode;                                                     //@synthesize contentMode=_contentMode - In the implementation block
-(CGRect)contentBounds;
-(long long)contentMode;
-(void)setReferenceSize:(CGSize)arg1 ;
-(id<PXEngineDrivenAssetsTilingLayoutDelegate>)delegate;
-(id)initWithDataSource:(id)arg1 ;
-(id)dataSource;
-(void)_updateIfNeeded;
-(PXLayoutSnapshot *)layoutSnapshot;
-(void)setDelegate:(id<PXEngineDrivenAssetsTilingLayoutDelegate>)arg1 ;
-(id)initWithLayoutEngineSnapshot:(id)arg1 ;
-(void)enumerateTilesInRect:(CGRect)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)getGeometry:(PXTileGeometry*)arg1 group:(unsigned long long*)arg2 userData:(id*)arg3 forTileWithIdentifier:(PXTileIdentifier)arg4 ;
-(void)adjustGeometry:(PXTileGeometry*)arg1 forContentTileWithIndexPath:(PXSimpleIndexPath)arg2 ;
-(BOOL)getAdditionalTileIdentifier:(PXTileIdentifier*)arg1 group:(unsigned long long*)arg2 layoutGeometryKind:(unsigned long long)arg3 indexPath:(PXSimpleIndexPath)arg4 ;
-(void)adjustGeometry:(PXTileGeometry*)arg1 forAdditionalTileWithKind:(unsigned long long)arg2 indexPath:(PXSimpleIndexPath)arg3 ;
-(void)setLayoutSnapshot:(PXLayoutSnapshot *)arg1 ;
-(CGSize)playButtonSizeForItemAtIndexPath:(PXSimpleIndexPath)arg1 contentTileSize:(CGSize)arg2 ;
-(double)_aspectRatioForItemAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(double)_zPositionForItemAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(CGRect)_contentsRectForItemAtIndexPath:(PXSimpleIndexPath)arg1 forAspectRatio:(double)arg2 ;
-(BOOL)_needsUpdate;
-(void)_commonInit;
-(void)setContentMode:(long long)arg1 ;
@end

