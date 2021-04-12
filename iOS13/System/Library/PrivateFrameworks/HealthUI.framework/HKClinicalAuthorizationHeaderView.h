/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, NSLayoutConstraint, NSString;

@interface HKClinicalAuthorizationHeaderView : UIView {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	NSLayoutConstraint* _imageToTitleConstraint;

}

@property (nonatomic,readonly) UIImageView * imageView;                                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * imageToTitleConstraint;              //@synthesize imageToTitleConstraint=_imageToTitleConstraint - In the implementation block
@property (nonatomic,copy) NSString * title; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIImageView *)imageView;
-(void)_updateForCurrentContentSizeCategory;
-(void)_setUpConstraints;
-(NSLayoutConstraint *)imageToTitleConstraint;
-(void)_setUpSubviews;
@end

