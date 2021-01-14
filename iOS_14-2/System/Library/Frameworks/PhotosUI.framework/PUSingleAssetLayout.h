/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTilingLayout.h>

@class PUAssetReference;

@interface PUSingleAssetLayout : PUTilingLayout {

	PUAssetReference* _assetReference;
	CGRect _assetRect;
	UIEdgeInsets _cropInsets;
	CGRect _contentsRect;

}

@property (nonatomic,retain) PUAssetReference * assetReference;              //@synthesize assetReference=_assetReference - In the implementation block
@property (assign,nonatomic) CGRect assetRect;                               //@synthesize assetRect=_assetRect - In the implementation block
@property (assign,nonatomic) UIEdgeInsets cropInsets;                        //@synthesize cropInsets=_cropInsets - In the implementation block
@property (assign,nonatomic) CGRect contentsRect;                            //@synthesize contentsRect=_contentsRect - In the implementation block
-(CGRect)contentBounds;
-(void)setAssetReference:(PUAssetReference *)arg1 ;
-(CGRect)assetRect;
-(void)setAssetRect:(CGRect)arg1 ;
-(CGRect)contentsRect;
-(id)layoutInfosForTilesInRect:(CGRect)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(void)setCropInsets:(UIEdgeInsets)arg1 ;
-(CGRect)visibleRectForScrollingToItemAtIndexPath:(id)arg1 scrollPosition:(long long)arg2 ;
-(id)layoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2 ;
-(PUAssetReference *)assetReference;
-(void)_invalidateSingleAssetLayout;
-(UIEdgeInsets)cropInsets;
@end

