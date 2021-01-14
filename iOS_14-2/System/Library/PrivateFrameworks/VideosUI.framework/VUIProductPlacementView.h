/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIVideoAdvisoryViewLayout, _TVImageView, UIView, VUILabel;

@interface VUIProductPlacementView : UIView {

	VUIVideoAdvisoryViewLayout* _layout;
	_TVImageView* _logoImageView;
	UIView* _dividerView;
	VUILabel* _blockDescriptionLabel;

}

@property (nonatomic,retain) VUIVideoAdvisoryViewLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) _TVImageView * logoImageView;                     //@synthesize logoImageView=_logoImageView - In the implementation block
@property (nonatomic,retain) UIView * dividerView;                             //@synthesize dividerView=_dividerView - In the implementation block
@property (nonatomic,retain) VUILabel * blockDescriptionLabel;                 //@synthesize blockDescriptionLabel=_blockDescriptionLabel - In the implementation block
-(UIEdgeInsets)_margin;
-(BOOL)_isPortrait;
-(CGSize)_descriptionSize;
-(UIView *)dividerView;
-(void)setDividerView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_TVImageView *)logoImageView;
-(void)setLayout:(VUIVideoAdvisoryViewLayout *)arg1 ;
-(void)setLogoImageView:(_TVImageView *)arg1 ;
-(VUIVideoAdvisoryViewLayout *)layout;
-(CGSize)_logoSize;
-(void)_configureSubviewsWithDictionary:(id)arg1 ;
-(void)_showAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_hideAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(VUILabel *)blockDescriptionLabel;
-(CGSize)_dividerSize;
-(void)setBlockDescriptionLabel:(VUILabel *)arg1 ;
-(UIEdgeInsets)_logoMargin;
-(UIEdgeInsets)_dividerMargin;
-(UIEdgeInsets)_descriptionMargin;
-(void)_showWithAnimationWithCompletion:(/*^block*/id)arg1 ;
-(void)_hideWithAnimationWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithAdvisoryInfoDictionary:(id)arg1 ;
-(void)show:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
@end

