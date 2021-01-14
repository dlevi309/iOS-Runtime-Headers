/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AMPCoreUI.framework/AMPCoreUI
*/

#import <AMPCoreUI/AMPCoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel;

@interface AMPOnboardingFeatureView : UIView {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;

}

@property (nonatomic,retain) UIImageView * imageView;                        //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                     //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,readonly) double baselineOffsetFromBottom; 
-(UILabel *)titleLabel;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIImageView *)imageView;
-(double)baselineOffsetFromBottom;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFeature:(id)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)descriptionLabel;
@end

