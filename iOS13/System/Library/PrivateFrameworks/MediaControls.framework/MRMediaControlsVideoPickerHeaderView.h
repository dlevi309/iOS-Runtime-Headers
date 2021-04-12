/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)_updateStyle;
-(MTVisualStylingProvider *)visualStylingProvider;
-(void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
-(UIImageView *)airPlayIconImageView;
-(void)setAirPlayIconImageView:(UIImageView *)arg1 ;
@end

