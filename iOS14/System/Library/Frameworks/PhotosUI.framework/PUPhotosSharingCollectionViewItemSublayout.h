/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class NSIndexPath, UICollectionViewLayoutAttributes;

@interface PUPhotosSharingCollectionViewItemSublayout : NSObject {

	CGPoint _selectionBadgeCenter;
	CGPoint _optionBadgeCenter;
	NSIndexPath* _indexPath;
	double _bottomBadgeInset;
	unsigned long long _badgesCorner;
	UICollectionViewLayoutAttributes* _selectionBadgeLayoutAttributes;
	UICollectionViewLayoutAttributes* _optionBadgeLayoutAttributes;
	UIOffset _badgesOffset;
	CGRect _itemFrame;
	CGRect _visibleItemFrame;
	CGRect _badgesContainerFrame;
	CGRect _floatingBadgesContainerFrame;

}

@property (nonatomic,readonly) NSIndexPath * indexPath;                                                        //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) CGRect itemFrame;                                                               //@synthesize itemFrame=_itemFrame - In the implementation block
@property (assign,nonatomic) CGRect visibleItemFrame;                                                          //@synthesize visibleItemFrame=_visibleItemFrame - In the implementation block
@property (assign,nonatomic) CGSize selectionBadgeSize; 
@property (assign,nonatomic) CGSize optionBadgeSize; 
@property (assign,nonatomic) double bottomBadgeInset;                                                          //@synthesize bottomBadgeInset=_bottomBadgeInset - In the implementation block
@property (assign,nonatomic) UIOffset badgesOffset;                                                            //@synthesize badgesOffset=_badgesOffset - In the implementation block
@property (assign,nonatomic) unsigned long long badgesCorner;                                                  //@synthesize badgesCorner=_badgesCorner - In the implementation block
@property (nonatomic,readonly) UICollectionViewLayoutAttributes * selectionBadgeLayoutAttributes;              //@synthesize selectionBadgeLayoutAttributes=_selectionBadgeLayoutAttributes - In the implementation block
@property (nonatomic,readonly) UICollectionViewLayoutAttributes * optionBadgeLayoutAttributes;                 //@synthesize optionBadgeLayoutAttributes=_optionBadgeLayoutAttributes - In the implementation block
@property (nonatomic,readonly) CGRect badgesContainerFrame;                                                    //@synthesize badgesContainerFrame=_badgesContainerFrame - In the implementation block
@property (nonatomic,readonly) CGRect floatingBadgesContainerFrame;                                            //@synthesize floatingBadgesContainerFrame=_floatingBadgesContainerFrame - In the implementation block
-(NSIndexPath *)indexPath;
-(CGRect)itemFrame;
-(CGSize)selectionBadgeSize;
-(void)setBadgesOffset:(UIOffset)arg1 ;
-(void)setBadgesCorner:(unsigned long long)arg1 ;
-(CGSize)optionBadgeSize;
-(id)initWithIndexPath:(id)arg1 itemFrame:(CGRect)arg2 ;
-(void)setSelectionBadgeSize:(CGSize)arg1 ;
-(void)setOptionBadgeSize:(CGSize)arg1 ;
-(void)prepareSublayout;
-(void)setFloatingOffset:(UIOffset)arg1 ;
-(CGRect)visibleItemFrame;
-(void)setVisibleItemFrame:(CGRect)arg1 ;
-(double)bottomBadgeInset;
-(void)setBottomBadgeInset:(double)arg1 ;
-(UICollectionViewLayoutAttributes *)selectionBadgeLayoutAttributes;
-(CGRect)badgesContainerFrame;
-(UICollectionViewLayoutAttributes *)optionBadgeLayoutAttributes;
-(CGRect)floatingBadgesContainerFrame;
-(UIOffset)badgesOffset;
-(unsigned long long)badgesCorner;
@end

