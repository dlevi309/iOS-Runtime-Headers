/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setUpUI;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateConstraintConstants;
-(NSLayoutConstraint *)bottomToTitleLastBaselineConstraint;
-(void)setBottomToTitleLastBaselineConstraint:(NSLayoutConstraint *)arg1 ;
@end

