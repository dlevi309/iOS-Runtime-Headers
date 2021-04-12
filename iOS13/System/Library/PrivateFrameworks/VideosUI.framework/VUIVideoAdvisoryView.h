/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIVideoAdvisoryViewLayout, _TVImageView, UIView, NSArray;

@interface VUIVideoAdvisoryView : UIView {

	VUIVideoAdvisoryViewLayout* _layout;
	_TVImageView* _logoImageView;
	UIView* _dividerView;
	NSArray* _legendViews;

}

@property (nonatomic,retain) VUIVideoAdvisoryViewLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) _TVImageView * logoImageView;                     //@synthesize logoImageView=_logoImageView - In the implementation block
@property (nonatomic,retain) UIView * dividerView;                             //@synthesize dividerView=_dividerView - In the implementation block
@property (nonatomic,copy) NSArray * legendViews;                              //@synthesize legendViews=_legendViews - In the implementation block
-(VUIVideoAdvisoryViewLayout *)layout;
-(void)setLayout:(VUIVideoAdvisoryViewLayout *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)_margin;
-(BOOL)_isPortrait;
-(CGSize)_dividerSize;
-(_TVImageView *)logoImageView;
-(void)setLogoImageView:(_TVImageView *)arg1 ;
-(UIView *)dividerView;
-(void)setDividerView:(UIView *)arg1 ;
-(CGSize)_logoSize;
-(id)initWithRatingInfoDictionary:(id)arg1 ;
-(void)show:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(CGSize)_legendSize;
-(UIEdgeInsets)_logoMargin;
-(UIEdgeInsets)_legendsMargin;
-(UIEdgeInsets)_dividerMargin;
-(void)_configureSubviewsWithDictionary:(id)arg1 ;
-(NSArray *)legendViews;
-(void)setLegendViews:(NSArray *)arg1 ;
-(void)_showAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_hideAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_showWithAnimationWithCompletion:(/*^block*/id)arg1 ;
-(void)_hideWithAnimationWithCompletion:(/*^block*/id)arg1 ;
@end

