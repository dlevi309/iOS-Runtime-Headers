/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTilingLayout.h>

@class NSCache, PUFilmstripDataSource;

@interface PUFilmstripTilingLayout : PUTilingLayout {

	CGRect _contentBounds;
	long long _numberOfItems;
	CGSize _itemSize;
	NSCache* _layoutInfoCache;
	CGSize _contentSize;

}

@property (nonatomic,readonly) CGSize contentSize;                            //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,retain) PUFilmstripDataSource * dataSource; 
-(CGRect)contentBounds;
-(void)prepareLayout;
-(id)layoutInfosForTilesInRect:(CGRect)arg1 ;
-(CGSize)contentSize;
-(id)preferredScrollInfo;
-(id)initWithContentSize:(CGSize)arg1 ;
-(id)_layoutInfoForTileWithIndex:(long long)arg1 kind:(id)arg2 ;
-(id)_layoutInfoForIndicatorInfo:(id)arg1 withIndex:(long long)arg2 ;
-(id)layoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2 ;
@end

