/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@interface GKLeaderboardScoreFlowLayout : UICollectionViewFlowLayout {

	BOOL _isInsertingItemsAbove;
	double _heightOfInsertedItems;
	double _initialContentOffset;
	CGSize _contentSizeBeforeInsertingItemsAbove;

}

@property (assign,nonatomic) BOOL isInsertingItemsAbove;                               //@synthesize isInsertingItemsAbove=_isInsertingItemsAbove - In the implementation block
@property (assign,nonatomic) double heightOfInsertedItems;                             //@synthesize heightOfInsertedItems=_heightOfInsertedItems - In the implementation block
@property (assign,nonatomic) CGSize contentSizeBeforeInsertingItemsAbove;              //@synthesize contentSizeBeforeInsertingItemsAbove=_contentSizeBeforeInsertingItemsAbove - In the implementation block
@property (assign,nonatomic) double initialContentOffset;                              //@synthesize initialContentOffset=_initialContentOffset - In the implementation block
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)setInitialContentOffset:(double)arg1 ;
-(double)initialContentOffset;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(double)heightOfInsertedItems;
-(void)setHeightOfInsertedItems:(double)arg1 ;
-(BOOL)isInsertingItemsAbove;
-(void)setIsInsertingItemsAbove:(BOOL)arg1 ;
-(CGSize)contentSizeBeforeInsertingItemsAbove;
-(void)setContentSizeBeforeInsertingItemsAbove:(CGSize)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
@end

