/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class IKViewElement, VUIChannelBannerLayout, VUIAppleTVChannelLogoView, VUIButton, VUILabel, VUIFocusableTextView, NSArray, UIView, VUISeparatorView;

@interface VUIChannelBannerView : UIView {

	IKViewElement* _viewElement;
	VUIChannelBannerLayout* _layout;
	VUIAppleTVChannelLogoView* _appleTVChannelLogoView;
	VUIButton* _subscribeButton;
	VUILabel* _disclaimerTextLabel;
	VUIFocusableTextView* _descriptionTextView;
	NSArray* _textLabels;
	UIView* _bgColorView;
	VUISeparatorView* _separatorView;

}

@property (nonatomic,retain) VUISeparatorView * separatorView;                                //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) UIView * bgColorView;                                            //@synthesize bgColorView=_bgColorView - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                                     //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUIChannelBannerLayout * layout;                                 //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUIAppleTVChannelLogoView * appleTVChannelLogoView;              //@synthesize appleTVChannelLogoView=_appleTVChannelLogoView - In the implementation block
@property (nonatomic,retain) VUIButton * subscribeButton;                                     //@synthesize subscribeButton=_subscribeButton - In the implementation block
@property (nonatomic,retain) VUILabel * disclaimerTextLabel;                                  //@synthesize disclaimerTextLabel=_disclaimerTextLabel - In the implementation block
@property (nonatomic,retain) VUIFocusableTextView * descriptionTextView;                      //@synthesize descriptionTextView=_descriptionTextView - In the implementation block
@property (nonatomic,retain) NSArray * textLabels;                                            //@synthesize textLabels=_textLabels - In the implementation block
@property (nonatomic,readonly) double topThreshold; 
-(VUIChannelBannerLayout *)layout;
-(void)setLayout:(VUIChannelBannerLayout *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(VUISeparatorView *)separatorView;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(VUIFocusableTextView *)descriptionTextView;
-(void)setDescriptionTextView:(VUIFocusableTextView *)arg1 ;
-(CGSize)_layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
-(double)topThreshold;
-(NSArray *)textLabels;
-(VUIAppleTVChannelLogoView *)appleTVChannelLogoView;
-(VUILabel *)disclaimerTextLabel;
-(VUIButton *)subscribeButton;
-(void)setAppleTVChannelLogoView:(VUIAppleTVChannelLogoView *)arg1 ;
-(void)setTextLabels:(NSArray *)arg1 ;
-(void)setSubscribeButton:(VUIButton *)arg1 ;
-(void)setDisclaimerTextLabel:(VUILabel *)arg1 ;
-(void)_layoutLabels:(id)arg1 withOrigin:(CGPoint)arg2 maxWidth:(double)arg3 ;
-(void)setBgColorView:(UIView *)arg1 ;
-(UIView *)bgColorView;
@end

