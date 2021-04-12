/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSString, UICollectionView, VUISeparatorView, UIView;

@interface VUILibraryListPopoverView : UIView {

	UILabel* _titleLabel;
	NSString* _title;
	UICollectionView* _collectionView;
	VUISeparatorView* _separatorView;
	UIView* _titleContainerView;

}

@property (nonatomic,retain) VUISeparatorView * separatorView;                 //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) UIView * titleContainerView;                      //@synthesize titleContainerView=_titleContainerView - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
-(NSString *)title;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(VUISeparatorView *)separatorView;
-(UICollectionView *)collectionView;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 ;
-(UIView *)titleContainerView;
-(void)setTitleContainerView:(UIView *)arg1 ;
@end

