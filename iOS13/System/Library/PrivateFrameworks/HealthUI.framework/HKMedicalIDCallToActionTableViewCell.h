/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setupConstraints;
-(void)setupSubviews;
-(UIButton *)actionButton;
-(void)setActionButton:(UIButton *)arg1 ;
-(UILabel *)callToActionLabel;
-(void)setCallToActionLabel:(UILabel *)arg1 ;
@end

