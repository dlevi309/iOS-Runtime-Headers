/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <UIKitCore/UITableViewCell.h>

@class NSString, UILabel, NSLayoutConstraint;

@interface HRMetadataEducationTableViewCell : UITableViewCell {

	NSString* _titleText;
	NSString* _bodyText;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	NSLayoutConstraint* _topToTitleBaselineConstraint;
	NSLayoutConstraint* _titleBaselineToBodyBaselineConstraint;
	NSLayoutConstraint* _bodyBottomAnchorToBottomConstraint;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                                                     //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topToTitleBaselineConstraint;                       //@synthesize topToTitleBaselineConstraint=_topToTitleBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleBaselineToBodyBaselineConstraint;              //@synthesize titleBaselineToBodyBaselineConstraint=_titleBaselineToBodyBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bodyBottomAnchorToBottomConstraint;                 //@synthesize bodyBottomAnchorToBottomConstraint=_bodyBottomAnchorToBottomConstraint - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                                      //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * bodyText;                                                       //@synthesize bodyText=_bodyText - In the implementation block
+(id)defaultReuseIdentifier;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setBodyText:(NSString *)arg1 ;
-(NSString *)bodyText;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitleText:(NSString *)arg1 ;
-(UILabel *)bodyLabel;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(NSString *)titleText;
-(void)_updateForCurrentSizeCategory;
-(void)_setUpConstraints;
-(id)_titleLabelFont;
-(void)_setUpUI;
-(id)_bodyLabelFont;
-(double)_topToTitleBaseline;
-(void)setTopToTitleBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(double)_titleBaselineToBodyBaseline;
-(void)setTitleBaselineToBodyBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(double)_bodyBottomAnchorToBottom;
-(void)setBodyBottomAnchorToBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topToTitleBaselineConstraint;
-(NSLayoutConstraint *)titleBaselineToBodyBaselineConstraint;
-(NSLayoutConstraint *)bodyBottomAnchorToBottomConstraint;
-(id)_titleLabelFontTextStyle;
-(id)_bodyLabelFontTextStyle;
@end

