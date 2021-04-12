/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionView.h>

@class UICollectionViewLayout, UIRefreshControl, SKUIIndexBarControl;

@interface SKUICollectionView : UICollectionView {

	BOOL _delegateWantsWillLayoutSubviews;
	BOOL _externalShowsHorizontalScrollIndicator;
	BOOL _externalShowsVerticalScrollIndicator;
	double _overrideBoundsWidth;
	UICollectionViewLayout* _pendingCollectionViewLayout;
	UIRefreshControl* _refreshControl;
	SKUIIndexBarControl* _indexBarControl;

}

@property (nonatomic,retain) SKUIIndexBarControl * indexBarControl;              //@synthesize indexBarControl=_indexBarControl - In the implementation block
@property (nonatomic,retain) UIRefreshControl * refreshControl;                  //@synthesize refreshControl=_refreshControl - In the implementation block
@property (assign,nonatomic) double overrideBoundsWidth;                         //@synthesize overrideBoundsWidth=_overrideBoundsWidth - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(CGRect)bounds;
-(void)layoutSubviews;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIRefreshControl *)refreshControl;
-(id)collectionViewLayout;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2 ;
-(void)setShowsHorizontalScrollIndicator:(BOOL)arg1 ;
-(void)setShowsVerticalScrollIndicator:(BOOL)arg1 ;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(void)setIndexBarControl:(SKUIIndexBarControl *)arg1 ;
-(SKUIIndexBarControl *)indexBarControl;
-(void)setOverrideBoundsWidth:(double)arg1 ;
-(void)_updateIndexBarControlFrame;
-(void)_updateShowsScrollIndicators;
-(double)overrideBoundsWidth;
@end

