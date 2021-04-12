/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKTitledBuddyHeaderView.h>

@class UIImageView, NSLayoutConstraint, UIImage;

@interface HKTitledLogoBuddyHeaderView : HKTitledBuddyHeaderView {

	UIImageView* _logoImageView;
	NSLayoutConstraint* _titleLabelFirstBaselineAnchor;

}

@property (nonatomic,retain) UIImage * logoImage; 
-(void)traitCollectionDidChange:(id)arg1 ;
-(double)bottomPadding;
-(void)_updateForCurrentSizeCategory;
-(UIImage *)logoImage;
-(void)setLogoImage:(UIImage *)arg1 ;
-(id)logoImageView;
-(id)initWithTopInset:(double)arg1 linkButtonTitle:(id)arg2 ;
@end

