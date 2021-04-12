/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@class NSIndexPath, UICollectionViewLayoutAttributes;

@interface GKCollectionFocusingLayout : UICollectionViewFlowLayout {

	double _topHeaderHeight;
	double _focusScaleFactor;
	NSIndexPath* _focusedIndexPath;
	double _focusHeaderOffset;
	double _headerToItemSpacing;
	UICollectionViewLayoutAttributes* _topHeaderAttributes;

}

@property (assign,nonatomic) double topHeaderHeight;                                              //@synthesize topHeaderHeight=_topHeaderHeight - In the implementation block
@property (assign,nonatomic) double focusScaleFactor;                                             //@synthesize focusScaleFactor=_focusScaleFactor - In the implementation block
@property (nonatomic,retain) NSIndexPath * focusedIndexPath;                                      //@synthesize focusedIndexPath=_focusedIndexPath - In the implementation block
@property (assign,nonatomic) double focusHeaderOffset;                                            //@synthesize focusHeaderOffset=_focusHeaderOffset - In the implementation block
@property (assign,nonatomic) double headerToItemSpacing;                                          //@synthesize headerToItemSpacing=_headerToItemSpacing - In the implementation block
@property (nonatomic,retain) UICollectionViewLayoutAttributes * topHeaderAttributes;              //@synthesize topHeaderAttributes=_topHeaderAttributes - In the implementation block
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)prepareLayout;
-(id)init;
-(void)setHeaderToItemSpacing:(double)arg1 ;
-(double)headerToItemSpacing;
-(void)setFocusScaleFactor:(double)arg1 ;
-(double)topHeaderHeight;
-(void)setFocusHeaderOffset:(double)arg1 ;
-(void)setTopHeaderAttributes:(UICollectionViewLayoutAttributes *)arg1 ;
-(UICollectionViewLayoutAttributes *)topHeaderAttributes;
-(CGSize)sizeForHeaderInSection:(long long)arg1 ;
-(double)minimumLineSpacingForSectionAtIndex:(long long)arg1 ;
-(double)minimumInteritemSpacingForSectionAtIndex:(long long)arg1 ;
-(CGSize)sizeForItemAtIndexPath:(id)arg1 ;
-(CGSize)sizeForFooterInSection:(long long)arg1 ;
-(id)focusAdjustedAttributesForItemAttributes:(id)arg1 ;
-(id)focusAdjustedAttributesForSupplementaryViewAttributes:(id)arg1 ;
-(void)applyDefaults;
-(NSIndexPath *)focusedIndexPath;
-(void)setFocusedIndexPath:(NSIndexPath *)arg1 ;
-(UIEdgeInsets)sectionInset;
-(BOOL)shouldUpdateVisibleCellLayoutAttributes;
-(void)setTopHeaderHeight:(double)arg1 ;
-(void)awakeFromNib;
-(void)_updateFocusOffsetsForSectionHeadersWithAnimationCoordinator:(id)arg1 ;
-(double)focusScaleFactor;
-(void)_updateFocusFrameForCellAtIndexPath:(id)arg1 ;
-(double)focusHeaderOffset;
-(void)dealloc;
@end

