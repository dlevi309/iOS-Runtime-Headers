/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UIView.h>

@class IKViewElement, _TVImageView, VUIAppleTVChannelLogoView, VUILabel, NSArray, VUIFeaturedCellOverlayLayout;

@interface VUIFeaturedCellOverlayView : UIView {

	IKViewElement* _viewElement;
	_TVImageView* _logoImageView;
	VUIAppleTVChannelLogoView* _appleTVChannelLogoView;
	VUILabel* _titleLabel;
	VUILabel* _subtitleLabel;
	VUILabel* _disclaimerLabel;
	NSArray* _buttons;
	VUIFeaturedCellOverlayLayout* _overlayLayout;

}

@property (nonatomic,retain) VUIFeaturedCellOverlayLayout * overlayLayout;                    //@synthesize overlayLayout=_overlayLayout - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                                     //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) _TVImageView * logoImageView;                                    //@synthesize logoImageView=_logoImageView - In the implementation block
@property (nonatomic,retain) VUIAppleTVChannelLogoView * appleTVChannelLogoView;              //@synthesize appleTVChannelLogoView=_appleTVChannelLogoView - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * subtitleLabel;                                        //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * disclaimerLabel;                                      //@synthesize disclaimerLabel=_disclaimerLabel - In the implementation block
@property (nonatomic,retain) NSArray * buttons;                                               //@synthesize buttons=_buttons - In the implementation block
+(id)featuredCellOverViewFromElement:(id)arg1 overlayType:(long long)arg2 existingView:(id)arg3 ;
-(VUILabel *)titleLabel;
-(void)layoutSubviews;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setSubtitleLabel:(VUILabel *)arg1 ;
-(VUILabel *)subtitleLabel;
-(void)setButtons:(NSArray *)arg1 ;
-(NSArray *)buttons;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(_TVImageView *)logoImageView;
-(void)setLogoImageView:(_TVImageView *)arg1 ;
-(VUILabel *)disclaimerLabel;
-(void)setDisclaimerLabel:(VUILabel *)arg1 ;
-(void)setOverlayLayout:(VUIFeaturedCellOverlayLayout *)arg1 ;
-(VUIFeaturedCellOverlayLayout *)overlayLayout;
-(VUIAppleTVChannelLogoView *)appleTVChannelLogoView;
-(void)setAppleTVChannelLogoView:(VUIAppleTVChannelLogoView *)arg1 ;
@end

