/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)titleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)_setUpConstraints;
-(void)setTitle:(NSString *)arg1 ;
-(NSLayoutConstraint *)imageToTitleConstraint;
-(void)_updateForCurrentContentSizeCategory;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)title;
-(void)_setUpSubviews;
@end

