/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setupConstraints;
-(void)setupSubviews;
-(void)setIntroLabel:(UILabel *)arg1 ;
-(UILabel *)introLabel;
-(void)setRegistrarLabel:(UILabel *)arg1 ;
-(UILabel *)registrarLabel;
@end

