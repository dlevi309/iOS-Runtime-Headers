/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateStyle;
-(id)titleLabelText;
-(MTVisualStylingProvider *)visualStylingProvider;
-(void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
-(UILabel *)customTitleLabel;
-(void)setCustomTitleLabel:(UILabel *)arg1 ;
@end

