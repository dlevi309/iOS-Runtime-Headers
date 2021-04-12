/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSLayoutConstraint;

@interface WDSubtitleDateTableViewCell : UITableViewCell {

	UILabel* _mainTextLabel;
	UILabel* _subtitleTextLabel;
	UILabel* _dateTextLabel;
	NSLayoutConstraint* _baselineConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * baselineConstraint;              //@synthesize baselineConstraint=_baselineConstraint - In the implementation block
@property (nonatomic,retain) UILabel * mainTextLabel;                              //@synthesize mainTextLabel=_mainTextLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleTextLabel;                          //@synthesize subtitleTextLabel=_subtitleTextLabel - In the implementation block
@property (nonatomic,retain) UILabel * dateTextLabel;                              //@synthesize dateTextLabel=_dateTextLabel - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setupConstraints;
-(void)setupSubviews;
-(void)_updateForCurrentSizeCategory;
-(UILabel *)mainTextLabel;
-(void)setMainTextLabel:(UILabel *)arg1 ;
-(void)setSubtitleTextLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleTextLabel;
-(UILabel *)dateTextLabel;
-(void)setBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)baselineConstraint;
-(void)setDateTextLabel:(UILabel *)arg1 ;
@end

