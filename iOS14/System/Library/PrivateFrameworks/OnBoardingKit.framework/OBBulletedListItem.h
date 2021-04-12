/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <UIKitCore/UIView.h>

@class UIView, UIImageView, UIStackView, UILabel, NSLayoutConstraint;

@interface OBBulletedListItem : UIView {

	UIView* _imageContainer;
	UIImageView* _imageView;
	UIStackView* _stackView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	NSLayoutConstraint* _stackViewLeadingConstraintVertical;
	NSLayoutConstraint* _stackViewLeadingConstraintHorizontal;

}

@property (nonatomic,retain) UIView * imageContainer;                                                //@synthesize imageContainer=_imageContainer - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                                //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                             //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * stackViewLeadingConstraintVertical;                //@synthesize stackViewLeadingConstraintVertical=_stackViewLeadingConstraintVertical - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * stackViewLeadingConstraintHorizontal;              //@synthesize stackViewLeadingConstraintHorizontal=_stackViewLeadingConstraintHorizontal - In the implementation block
-(UILabel *)titleLabel;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIImageView *)imageView;
-(UIStackView *)stackView;
-(id)_titleFont;
-(id)_descriptionFont;
-(UIView *)imageContainer;
-(void)_updateImageViewLayout;
-(NSLayoutConstraint *)stackViewLeadingConstraintVertical;
-(void)setStackViewLeadingConstraintVertical:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)stackViewLeadingConstraintHorizontal;
-(void)setStackViewLeadingConstraintHorizontal:(NSLayoutConstraint *)arg1 ;
-(void)setImageContainer:(UIView *)arg1 ;
-(double)_horizontalMargins;
-(id)_textStyle;
-(double)imageSizeForImage:(id)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setStackView:(UIStackView *)arg1 ;
-(id)initWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3 ;
-(BOOL)shouldLayoutVertically;
-(double)leadingMargins;
-(double)trailingMargins;
@end

