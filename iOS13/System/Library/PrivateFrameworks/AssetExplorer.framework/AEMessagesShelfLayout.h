/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <PhotosUICore/PXAssetsTilingLayout.h>

@protocol AEMessagesShelfLayoutDelegate;
@interface AEMessagesShelfLayout : PXAssetsTilingLayout {

	CGRect* _itemFramesForCurrentDataSource;
	double _currentContentWidth;
	BOOL _wasPreparedAtLeastOnce;
	id<AEMessagesShelfLayoutDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AEMessagesShelfLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<AEMessagesShelfLayoutDelegate>)delegate;
-(void)setDelegate:(id<AEMessagesShelfLayoutDelegate>)arg1 ;
-(void)prepareLayout;
-(CGRect)contentBounds;
-(void)setReferenceSize:(CGSize)arg1 ;
-(void)enumerateTilesInRect:(CGRect)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)getGeometry:(PXTileGeometry*)arg1 group:(unsigned long long*)arg2 userData:(id*)arg3 forTileWithIdentifier:(PXTileIdentifier)arg4 ;
-(CGRect)_gradientShadowFrameForItemFrame:(CGRect)arg1 ;
-(double)_zPositionForShelfTileKind:(unsigned long long)arg1 atIndexPath:(PXSimpleIndexPath)arg2 ;
-(CGRect)_frameForGridItemAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(CGRect)_cancelButtonFrameForGridFrame:(CGRect)arg1 ;
-(CGRect)_irisToggleFrameForGridFrame:(CGRect)arg1 ;
-(CGRect)_loopBadgeFrameForItemFrame:(CGRect)arg1 ;
-(CGRect)_videoBadgeFrameForItemFrame:(CGRect)arg1 ;
-(CGRect)_videoDurationFrameForItemFrame:(CGRect)arg1 ;
@end

