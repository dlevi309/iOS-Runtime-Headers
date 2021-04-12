/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthProfile.framework/HealthProfile
*/

#import <HealthProfile/HealthProfile.ProfileBasicCell.h>

@class UIImageView, UILabel;

@interface HealthProfile.OrganDonationCell : HealthProfile.ProfileBasicCell {

	 organDonationLogoImage;
	 title;
	 subtitle;

}

@property (assign,__weak,nonatomic) UIImageView * organDonationLogoImage; 
@property (assign,__weak,nonatomic) UILabel * title; 
@property (assign,__weak,nonatomic) UILabel * subtitle; 
-(id)initWithCoder:(id)arg1 ;
-(UILabel *)title;
-(void)setTitle:(UILabel *)arg1 ;
-(UILabel *)subtitle;
-(void)setSubtitle:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)awakeFromNib;
-(UIImageView *)organDonationLogoImage;
-(void)setOrganDonationLogoImage:(UIImageView *)arg1 ;
@end

