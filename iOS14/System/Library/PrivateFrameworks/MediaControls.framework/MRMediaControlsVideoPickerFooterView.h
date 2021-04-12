/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <MediaPlayer/MPButton.h>

@class MTVisualStylingProvider, UILabel;

@interface MRMediaControlsVideoPickerFooterView : MPButton {

	MTVisualStylingProvider* _visualStylingProvider;
	UILabel* _customTitleLabel;

}

@property (nonatomic,retain) UILabel * customTitleLabel;                                   //@synthesize customTitleLabel=_customTitleLabel - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * visualStylingProvider;              //@synthesize visualStylingProvider=_visualStylingProvider - In the implementation block
-(MTVisualStylingProvider *)visualStylingProvider;
-(void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
-(void)_updateStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)titleLabelText;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setCustomTitleLabel:(UILabel *)arg1 ;
-(UILabel *)customTitleLabel;
-(void)setHighlighted:(BOOL)arg1 ;
@end

