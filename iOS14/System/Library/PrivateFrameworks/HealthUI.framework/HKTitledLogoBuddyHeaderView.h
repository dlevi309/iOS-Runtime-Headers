/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKTitledBuddyHeaderView.h>

@class UIImageView, NSLayoutConstraint, UIImage;

@interface HKTitledLogoBuddyHeaderView : HKTitledBuddyHeaderView {

	UIImageView* _logoImageView;
	NSLayoutConstraint* _titleLabelFirstBaselineAnchor;

}

@property (nonatomic,retain) UIImage * logoImage; 
-(double)bottomPadding;
-(void)setLogoImage:(UIImage *)arg1 ;
-(void)_updateForCurrentSizeCategory;
-(id)logoImageView;
-(UIImage *)logoImage;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithTopInset:(double)arg1 linkButtonTitle:(id)arg2 ;
@end

