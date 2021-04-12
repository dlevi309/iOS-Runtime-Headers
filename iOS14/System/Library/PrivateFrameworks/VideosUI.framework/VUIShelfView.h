/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UICollectionView;

@interface VUIShelfView : UIView {

	UIView* _headerView;
	UICollectionView* _collectionView;

}

@property (nonatomic,retain) UIView * headerView;                            //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
-(void)setHeaderView:(UIView *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(UICollectionView *)collectionView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)headerView;
@end

