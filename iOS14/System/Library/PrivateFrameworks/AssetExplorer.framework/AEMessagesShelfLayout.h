/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)contentBounds;
-(void)prepareLayout;
-(void)setReferenceSize:(CGSize)arg1 ;
-(id<AEMessagesShelfLayoutDelegate>)delegate;
-(void)setDelegate:(id<AEMessagesShelfLayoutDelegate>)arg1 ;
-(void)enumerateTilesInRect:(CGRect)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)getGeometry:(PXTileGeometry*)arg1 group:(unsigned long long*)arg2 userData:(id*)arg3 forTileWithIdentifier:(PXTileIdentifier)arg4 ;
-(void)dealloc;
-(CGRect)_gradientShadowFrameForItemFrame:(CGRect)arg1 ;
-(double)_zPositionForShelfTileKind:(unsigned long long)arg1 atIndexPath:(PXSimpleIndexPath)arg2 ;
-(CGRect)_frameForGridItemAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(CGRect)_cancelButtonFrameForGridFrame:(CGRect)arg1 ;
-(CGRect)_irisToggleFrameForGridFrame:(CGRect)arg1 ;
-(CGRect)_loopBadgeFrameForItemFrame:(CGRect)arg1 ;
-(CGRect)_videoBadgeFrameForItemFrame:(CGRect)arg1 ;
-(CGRect)_videoDurationFrameForItemFrame:(CGRect)arg1 ;
@end

