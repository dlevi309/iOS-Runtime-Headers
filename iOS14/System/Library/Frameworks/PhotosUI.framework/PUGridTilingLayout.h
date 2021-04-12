/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUSectionedTilingLayout.h>

@interface PUGridTilingLayout : PUSectionedTilingLayout {

	long long _numberOfColumns;
	CGSize _itemSize;
	CGSize _interItemSpacing;

}

@property (assign,nonatomic) CGSize itemSize;                      //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) CGSize interItemSpacing;              //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
-(CGSize)interItemSpacing;
-(CGSize)itemSize;
-(void)setVisibleRect:(CGRect)arg1 ;
-(void)setInterItemSpacing:(CGSize)arg1 ;
-(void)prepareLayout;
-(CGSize)estimatedSectionSize;
-(id)init;
-(void)addLayoutInfosForTilesInRect:(CGRect)arg1 section:(long long)arg2 toSet:(id)arg3 ;
-(id)preferredScrollInfo;
-(long long)_numberOfColumns;
-(CGRect)_frameForItemAtIndexPath:(id)arg1 ;
-(id)layoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2 ;
-(CGSize)sizeForSection:(long long)arg1 numberOfItems:(long long)arg2 ;
-(void)setItemSize:(CGSize)arg1 ;
@end

