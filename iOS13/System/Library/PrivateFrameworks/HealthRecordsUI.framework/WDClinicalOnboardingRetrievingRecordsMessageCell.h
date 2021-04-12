/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(double)bottomPadding;
-(void)_setupSubviews;
-(void)_setupConstraints;
-(UILabel *)messageLabel;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(void)setBottomPadding:(double)arg1 ;
-(void)setBottomLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)bottomLayoutConstraint;
@end

