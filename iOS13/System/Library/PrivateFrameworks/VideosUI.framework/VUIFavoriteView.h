/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIFavoriteViewLayout, VUILabel, _TVImageView, IKViewElement, VUISeparatorView;

@interface VUIFavoriteView : UIView {

	VUIFavoriteViewLayout* _layout;
	VUILabel* _titleLabel;
	_TVImageView* _logoImageView;
	_TVImageView* _accessoryImageView;
	IKViewElement* _viewElement;
	VUISeparatorView* _topSeparatorView;
	VUISeparatorView* _bottomSeparatorView;

}

@property (nonatomic,retain) VUIFavoriteViewLayout * layout;                      //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) _TVImageView * logoImageView;                        //@synthesize logoImageView=_logoImageView - In the implementation block
@property (nonatomic,retain) _TVImageView * accessoryImageView;                   //@synthesize accessoryImageView=_accessoryImageView - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                         //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUISeparatorView * topSeparatorView;                 //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
@property (nonatomic,retain) VUISeparatorView * bottomSeparatorView;              //@synthesize bottomSeparatorView=_bottomSeparatorView - In the implementation block
-(VUIFavoriteViewLayout *)layout;
-(void)setLayout:(VUIFavoriteViewLayout *)arg1 ;
-(VUILabel *)titleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(_TVImageView *)accessoryImageView;
-(VUISeparatorView *)topSeparatorView;
-(VUISeparatorView *)bottomSeparatorView;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(_TVImageView *)logoImageView;
-(void)setLogoImageView:(_TVImageView *)arg1 ;
-(void)setTopSeparatorView:(VUISeparatorView *)arg1 ;
-(void)setBottomSeparatorView:(VUISeparatorView *)arg1 ;
-(void)setAccessoryImageView:(_TVImageView *)arg1 ;
-(void)prepareForCellReuse;
@end

