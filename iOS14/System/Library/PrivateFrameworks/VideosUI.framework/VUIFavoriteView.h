/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(VUILabel *)titleLabel;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setBottomSeparatorView:(VUISeparatorView *)arg1 ;
-(void)setTopSeparatorView:(VUISeparatorView *)arg1 ;
-(void)layoutSubviews;
-(VUISeparatorView *)topSeparatorView;
-(VUISeparatorView *)bottomSeparatorView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_TVImageView *)logoImageView;
-(void)setLayout:(VUIFavoriteViewLayout *)arg1 ;
-(_TVImageView *)accessoryImageView;
-(void)setLogoImageView:(_TVImageView *)arg1 ;
-(VUIFavoriteViewLayout *)layout;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)setAccessoryImageView:(_TVImageView *)arg1 ;
-(void)prepareForCellReuse;
@end

