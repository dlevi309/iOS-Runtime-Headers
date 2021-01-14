/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthProfile.framework/HealthProfile
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UILabel;

@interface HealthProfile.OrganDonationCell : UITableViewCell {

	 organDonationLogoImage;
	 title;
	 subtitle;
	 item;

}

@property (assign,__weak,nonatomic) UIImageView * organDonationLogoImage; 
@property (assign,__weak,nonatomic) UILabel * title; 
@property (assign,__weak,nonatomic) UILabel * subtitle; 
-(UILabel *)subtitle;
-(void)setTitle:(UILabel *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)awakeFromNib;
-(void)setSubtitle:(UILabel *)arg1 ;
-(UILabel *)title;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIImageView *)organDonationLogoImage;
-(void)setOrganDonationLogoImage:(UIImageView *)arg1 ;
@end

