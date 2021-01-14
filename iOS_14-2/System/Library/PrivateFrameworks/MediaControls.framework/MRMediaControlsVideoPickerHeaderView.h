/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>

@class MTVisualStylingProvider, UIImageView, UILabel;

@interface MRMediaControlsVideoPickerHeaderView : UIView {

	MTVisualStylingProvider* _visualStylingProvider;
	UIImageView* _airPlayIconImageView;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIImageView * airPlayIconImageView;                           //@synthesize airPlayIconImageView=_airPlayIconImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * visualStylingProvider;              //@synthesize visualStylingProvider=_visualStylingProvider - In the implementation block
-(UILabel *)titleLabel;
-(MTVisualStylingProvider *)visualStylingProvider;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
-(void)_updateStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIImageView *)airPlayIconImageView;
-(void)setAirPlayIconImageView:(UIImageView *)arg1 ;
@end

