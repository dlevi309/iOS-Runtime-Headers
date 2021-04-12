/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class IKViewElement, VUICollectionHeaderViewLayout, VUILabel, _TVImageView, UIButton, VUISeparatorView;

@interface VUICollectionHeaderView : UICollectionReusableView {

	/*^block*/id _selectionHandler;
	IKViewElement* _viewElement;
	IKViewElement* _buttonViewElement;
	IKViewElement* _imageViewElement;
	VUICollectionHeaderViewLayout* _layout;
	VUILabel* _titleTextView;
	VUILabel* _subtitleTextView;
	_TVImageView* _imageView;
	UIButton* _headerButton;
	VUISeparatorView* _separatorView;
	UIEdgeInsets _padding;

}

@property (nonatomic,retain) IKViewElement * viewElement;                         //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) IKViewElement * buttonViewElement;                   //@synthesize buttonViewElement=_buttonViewElement - In the implementation block
@property (nonatomic,retain) IKViewElement * imageViewElement;                    //@synthesize imageViewElement=_imageViewElement - In the implementation block
@property (nonatomic,retain) VUICollectionHeaderViewLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUILabel * titleTextView;                            //@synthesize titleTextView=_titleTextView - In the implementation block
@property (nonatomic,retain) VUILabel * subtitleTextView;                         //@synthesize subtitleTextView=_subtitleTextView - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                            //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIButton * headerButton;                             //@synthesize headerButton=_headerButton - In the implementation block
@property (nonatomic,retain) VUISeparatorView * separatorView;                    //@synthesize separatorView=_separatorView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                //@synthesize padding=_padding - In the implementation block
@property (nonatomic,copy) id selectionHandler;                                   //@synthesize selectionHandler=_selectionHandler - In the implementation block
+(id)configureCollectionHeaderViewWithTitle:(id)arg1 subtitle:(id)arg2 buttonString:(id)arg3 existingView:(id)arg4 ;
+(id)configureCollectionHeaderViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(VUICollectionHeaderViewLayout *)layout;
-(void)setLayout:(VUICollectionHeaderViewLayout *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(_TVImageView *)imageView;
-(VUISeparatorView *)separatorView;
-(UIEdgeInsets)padding;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(void)setImageView:(_TVImageView *)arg1 ;
-(VUILabel *)titleTextView;
-(void)setTitleTextView:(VUILabel *)arg1 ;
-(UIButton *)headerButton;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)setSelectionHandler:(id)arg1 ;
-(id)selectionHandler;
-(void)_selectButtonAction:(id)arg1 ;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(VUILabel *)subtitleTextView;
-(void)setButtonViewElement:(IKViewElement *)arg1 ;
-(id)_buttonWithString:(id)arg1 existingButton:(id)arg2 ;
-(void)setImageViewElement:(IKViewElement *)arg1 ;
-(void)setSubtitleTextView:(VUILabel *)arg1 ;
-(void)setHeaderButton:(UIButton *)arg1 ;
-(IKViewElement *)buttonViewElement;
-(IKViewElement *)imageViewElement;
@end

