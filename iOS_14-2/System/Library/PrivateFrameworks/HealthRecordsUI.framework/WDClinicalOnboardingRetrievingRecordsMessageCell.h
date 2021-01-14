/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSLayoutConstraint;

@interface WDClinicalOnboardingRetrievingRecordsMessageCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _messageLabel;
	NSLayoutConstraint* _bottomLayoutConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * bottomLayoutConstraint;              //@synthesize bottomLayoutConstraint=_bottomLayoutConstraint - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                   //@synthesize messageLabel=_messageLabel - In the implementation block
@property (assign,nonatomic) double bottomPadding; 
+(id)defaultReuseIdentifier;
-(void)_setupConstraints;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(double)bottomPadding;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(UILabel *)messageLabel;
-(void)_setupSubviews;
-(NSLayoutConstraint *)bottomLayoutConstraint;
-(void)setBottomLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBottomPadding:(double)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

