/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel;

@interface HKOrganDonationRegisteredTableViewCell : UITableViewCell {

	UILabel* _introLabel;
	UILabel* _registrarLabel;

}

@property (nonatomic,retain) UILabel * introLabel;                  //@synthesize introLabel=_introLabel - In the implementation block
@property (nonatomic,retain) UILabel * registrarLabel;              //@synthesize registrarLabel=_registrarLabel - In the implementation block
+(id)defaultReuseIdentifier;
-(void)setupSubviews;
-(void)setupConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setIntroLabel:(UILabel *)arg1 ;
-(UILabel *)introLabel;
-(void)setRegistrarLabel:(UILabel *)arg1 ;
-(UILabel *)registrarLabel;
@end

