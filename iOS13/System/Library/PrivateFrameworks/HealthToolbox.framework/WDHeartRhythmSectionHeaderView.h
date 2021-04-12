/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UILabel, NSLayoutConstraint, NSString;

@interface WDHeartRhythmSectionHeaderView : UITableViewHeaderFooterView {

	UILabel* _titleLabel;
	NSLayoutConstraint* _bottomToTitleLastBaselineConstraint;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomToTitleLastBaselineConstraint;              //@synthesize bottomToTitleLastBaselineConstraint=_bottomToTitleLastBaselineConstraint - In the implementation block
@property (nonatomic,copy) NSString * titleText; 
+(id)defaultReuseIdentifier;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(void)updateConstraintConstants;
-(void)setUpUI;
-(NSLayoutConstraint *)bottomToTitleLastBaselineConstraint;
-(void)setBottomToTitleLastBaselineConstraint:(NSLayoutConstraint *)arg1 ;
@end

