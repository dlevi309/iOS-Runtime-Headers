/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSString *)bodyText;
-(void)_setUpConstraints;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setBodyText:(NSString *)arg1 ;
-(void)_updateForCurrentSizeCategory;
-(UILabel *)bodyLabel;
-(id)_titleLabelFont;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(void)_setUpUI;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
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

