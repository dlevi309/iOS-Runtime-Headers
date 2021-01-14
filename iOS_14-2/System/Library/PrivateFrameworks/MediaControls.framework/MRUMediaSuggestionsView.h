/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>

@class UICollectionViewCompositionalLayout, UICollectionView;

@interface MRUMediaSuggestionsView : UIView {

	BOOL _supportsHorizontalLayout;
	UICollectionViewCompositionalLayout* _collectionViewLayout;
	UICollectionView* _collectionView;
	long long _layout;
	UIEdgeInsets _contentEdgeInsets;

}

@property (nonatomic,readonly) UICollectionViewCompositionalLayout * collectionViewLayout;              //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                         //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) long long layout;                                                          //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) BOOL supportsHorizontalLayout;                                             //@synthesize supportsHorizontalLayout=_supportsHorizontalLayout - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                                            //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
-(void)updateLayout;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)numberOfRows;
-(UICollectionView *)collectionView;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(long long)numberOfColumns;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UICollectionViewCompositionalLayout *)collectionViewLayout;
-(UIEdgeInsets)contentEdgeInsets;
-(void)setLayout:(long long)arg1 ;
-(long long)layout;
-(void)setSupportsHorizontalLayout:(BOOL)arg1 ;
-(BOOL)supportsHorizontalLayout;
-(double)itemWidthForWidth:(double)arg1 ;
-(double)itemHeightForItemWidth:(double)arg1 ;
@end

