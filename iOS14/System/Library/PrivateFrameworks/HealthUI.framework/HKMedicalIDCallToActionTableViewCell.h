/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIButton;

@interface HKMedicalIDCallToActionTableViewCell : UITableViewCell {

	UILabel* _callToActionLabel;
	UIButton* _actionButton;

}

@property (nonatomic,retain) UILabel * callToActionLabel;              //@synthesize callToActionLabel=_callToActionLabel - In the implementation block
@property (nonatomic,retain) UIButton * actionButton;                  //@synthesize actionButton=_actionButton - In the implementation block
+(id)defaultReuseIdentifier;
-(void)setupSubviews;
-(UIButton *)actionButton;
-(void)setActionButton:(UIButton *)arg1 ;
-(UILabel *)callToActionLabel;
-(void)setupConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setCallToActionLabel:(UILabel *)arg1 ;
@end

