/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UIView.h>

@class IKViewElement, _TVImageView, UIView, VUILabel, NSArray, VUIFeaturedCellOverlayLayout;

@interface VUIFeaturedCellOverlayView : UIView {

	BOOL _usesDefaultOverlayType;
	IKViewElement* _viewElement;
	_TVImageView* _logoImageView;
	UIView* _appleTVChannelLogoView;
	VUILabel* _titleLabel;
	VUILabel* _subtitleLabel;
	VUILabel* _disclaimerLabel;
	NSArray* _buttons;
	VUIFeaturedCellOverlayLayout* _overlayLayout;

}

@property (nonatomic,retain) VUIFeaturedCellOverlayLayout * overlayLayout;              //@synthesize overlayLayout=_overlayLayout - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                               //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) _TVImageView * logoImageView;                              //@synthesize logoImageView=_logoImageView - In the implementation block
@property (nonatomic,retain) UIView * appleTVChannelLogoView;                           //@synthesize appleTVChannelLogoView=_appleTVChannelLogoView - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * subtitleLabel;                                  //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * disclaimerLabel;                                //@synthesize disclaimerLabel=_disclaimerLabel - In the implementation block
@property (nonatomic,retain) NSArray * buttons;                                         //@synthesize buttons=_buttons - In the implementation block
@property (assign,nonatomic) BOOL usesDefaultOverlayType;                               //@synthesize usesDefaultOverlayType=_usesDefaultOverlayType - In the implementation block
+(id)featuredCellOverViewFromElement:(id)arg1 overlayType:(long long)arg2 existingView:(id)arg3 ;
-(VUILabel *)titleLabel;
-(void)setSubtitleLabel:(VUILabel *)arg1 ;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(NSArray *)buttons;
-(VUILabel *)subtitleLabel;
-(void)layoutSubviews;
-(_TVImageView *)logoImageView;
-(void)setButtons:(NSArray *)arg1 ;
-(void)setLogoImageView:(_TVImageView *)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)setOverlayLayout:(VUIFeaturedCellOverlayLayout *)arg1 ;
-(VUIFeaturedCellOverlayLayout *)overlayLayout;
-(UIView *)appleTVChannelLogoView;
-(void)setAppleTVChannelLogoView:(UIView *)arg1 ;
-(VUILabel *)disclaimerLabel;
-(void)setDisclaimerLabel:(VUILabel *)arg1 ;
-(BOOL)usesDefaultOverlayType;
-(void)setUsesDefaultOverlayType:(BOOL)arg1 ;
@end

