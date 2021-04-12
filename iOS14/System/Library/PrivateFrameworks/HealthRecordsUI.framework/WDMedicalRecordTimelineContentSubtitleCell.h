/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class NSString, UILabel, UIView, NSLayoutConstraint;

@interface WDMedicalRecordTimelineContentSubtitleCell : WDMedicalRecordGroupableCell {

	NSString* _titleString;
	NSString* _subtitleString;
	BOOL _showDisclosureIndicator;
	BOOL _useRegularFontForSubtitle;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIView* _disclosureChevronView;
	NSLayoutConstraint* _titlePillConstraint;
	NSLayoutConstraint* _titleChevronConstraint;

}

@property (nonatomic,retain) UILabel * titleLabel;                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                  //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIView * disclosureChevronView;                           //@synthesize disclosureChevronView=_disclosureChevronView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titlePillConstraint;                 //@synthesize titlePillConstraint=_titlePillConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleChevronConstraint;              //@synthesize titleChevronConstraint=_titleChevronConstraint - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (assign,nonatomic) BOOL showDisclosureIndicator;                             //@synthesize showDisclosureIndicator=_showDisclosureIndicator - In the implementation block
@property (assign,nonatomic) BOOL useRegularFontForSubtitle;                           //@synthesize useRegularFontForSubtitle=_useRegularFontForSubtitle - In the implementation block
-(UILabel *)titleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(BOOL)showDisclosureIndicator;
-(BOOL)useRegularFontForSubtitle;
-(void)setUseRegularFontForSubtitle:(BOOL)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)setTitlePillConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleChevronConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)titlePillConstraint;
-(NSLayoutConstraint *)titleChevronConstraint;
-(UILabel *)subtitleLabel;
-(void)setupSubviews;
-(UIView *)disclosureChevronView;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setDisclosureChevronView:(UIView *)arg1 ;
-(void)setShowDisclosureIndicator:(BOOL)arg1 ;
-(NSString *)title;
@end

