/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setupSubviews;
-(void)_updateForCurrentSizeCategory;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setupConstraints;
-(UILabel *)subtitleTextLabel;
-(void)setSubtitleTextLabel:(UILabel *)arg1 ;
-(void)setBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)baselineConstraint;
-(UILabel *)mainTextLabel;
-(void)setMainTextLabel:(UILabel *)arg1 ;
-(UILabel *)dateTextLabel;
-(void)setDateTextLabel:(UILabel *)arg1 ;
@end

