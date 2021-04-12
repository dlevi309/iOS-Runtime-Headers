/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class NSString, UILabel, NSLayoutConstraint;

@interface WDMedicalRecordTimelineValueCell : WDMedicalRecordGroupableCell {

	NSString* _titleString;
	NSString* _subtitleString;
	NSString* _valueString;
	NSString* _unitString;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _valueLabel;
	NSLayoutConstraint* _titleWidthConstraint;
	NSLayoutConstraint* _valueWidthConstraint;
	NSLayoutConstraint* _titleHeightConstraint;
	NSLayoutConstraint* _valueHeightConstraint;
	NSLayoutConstraint* _titleValueGapConstraint;
	NSLayoutConstraint* _valueLeftAlignConstraint;
	NSLayoutConstraint* _valueRightAlignConstraint;
	NSLayoutConstraint* _subtitleBottomConstraint;

}

@property (nonatomic,retain) UILabel * titleLabel;                                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                     //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;                                        //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleWidthConstraint;                   //@synthesize titleWidthConstraint=_titleWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * valueWidthConstraint;                   //@synthesize valueWidthConstraint=_valueWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleHeightConstraint;                  //@synthesize titleHeightConstraint=_titleHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * valueHeightConstraint;                  //@synthesize valueHeightConstraint=_valueHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleValueGapConstraint;                //@synthesize titleValueGapConstraint=_titleValueGapConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * valueLeftAlignConstraint;               //@synthesize valueLeftAlignConstraint=_valueLeftAlignConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * valueRightAlignConstraint;              //@synthesize valueRightAlignConstraint=_valueRightAlignConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * subtitleBottomConstraint;               //@synthesize subtitleBottomConstraint=_subtitleBottomConstraint - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
+(id)_titleLabelFont;
+(double)_titleLabelTopToFirstBaseline;
+(id)_valueLabelFontSingleLine;
+(id)_unitLabelFontSingleLine;
+(id)_valueLabelFontMultipleLines;
+(id)_unitLabelFontMultipleLines;
-(id)value;
-(id)unit;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(UILabel *)titleLabel;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)updateConstraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setValueLabel:(UILabel *)arg1 ;
-(UILabel *)valueLabel;
-(void)setupSubviews;
-(void)setValue:(id)arg1 unit:(id)arg2 ;
-(void)setValueLeftAlignConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setValueRightAlignConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleValueGapConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setValueWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)titleWidthConstraint;
-(NSLayoutConstraint *)valueWidthConstraint;
-(void)setTitleHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setValueHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)titleHeightConstraint;
-(NSLayoutConstraint *)valueHeightConstraint;
-(void)setSubtitleBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)valueLeftAlignConstraint;
-(NSLayoutConstraint *)valueRightAlignConstraint;
-(NSLayoutConstraint *)titleValueGapConstraint;
-(NSLayoutConstraint *)subtitleBottomConstraint;
-(id)_generateValueDisplayAttributedString;
-(id)_generateValueDisplayAttributedStringWithValueFont:(id)arg1 unitFont:(id)arg2 ;
@end

