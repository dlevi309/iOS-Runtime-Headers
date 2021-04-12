/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, MPUContentSizeLayoutConstraint, NSLayoutConstraint, MPUArtworkView, UILabel, UIView;

@interface _VideosExtrasGridHeaderView : UIView {

	NSArray* _artworkSizeConstraints;
	NSArray* _textLeadingConstraints;
	MPUContentSizeLayoutConstraint* _topLabelConstraint;
	MPUContentSizeLayoutConstraint* _subtitleBaselineConstraint;
	NSLayoutConstraint* _bottomLabelConstraint;
	MPUContentSizeLayoutConstraint* _bottomLabelSpacerHeight;
	MPUArtworkView* _artworkView;
	UILabel* _subtitleLabel;
	UIView* _bottomLabelSpacer;
	UILabel* _titleLabel;

}

@property (nonatomic,readonly) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
-(UILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)configureForImage:(id)arg1 title:(id)arg2 subtitle:(id)arg3 style:(id)arg4 ;
@end

