/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUICore/PXGadgetCollectionViewLayout.h>

@protocol PUHorizontalAlbumListGadgetLayoutDelegate;
@interface PUHorizontalAlbumListGadgetLayout : PXGadgetCollectionViewLayout {

	BOOL _showsHorizontalScrollIndicator;
	id<PUHorizontalAlbumListGadgetLayoutDelegate> _horizontalLayoutDelegate;

}

@property (assign,nonatomic,__weak) id<PUHorizontalAlbumListGadgetLayoutDelegate> horizontalLayoutDelegate;              //@synthesize horizontalLayoutDelegate=_horizontalLayoutDelegate - In the implementation block
@property (nonatomic,readonly) CGSize albumCellSize; 
@property (nonatomic,readonly) BOOL showsHorizontalScrollIndicator;                                                      //@synthesize showsHorizontalScrollIndicator=_showsHorizontalScrollIndicator - In the implementation block
-(id)init;
-(unsigned long long)_numberOfAlbums;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)albumCellSize;
-(BOOL)showsHorizontalScrollIndicator;
-(id)initWithHorizontalLayoutDelegate:(id)arg1 showsHorizontalScrollIndicator:(BOOL)arg2 ;
-(id<PUHorizontalAlbumListGadgetLayoutDelegate>)horizontalLayoutDelegate;
-(void)setHorizontalLayoutDelegate:(id<PUHorizontalAlbumListGadgetLayoutDelegate>)arg1 ;
-(double)_horizontalScrollIndicatorSpacing;
@end

