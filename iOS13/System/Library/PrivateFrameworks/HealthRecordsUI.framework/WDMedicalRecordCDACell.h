/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <UIKitCore/UITableViewCell.h>

@class HKCDADocumentSample, UIView, UILabel, HKSeparatorLineView, UIImageView;

@interface WDMedicalRecordCDACell : UITableViewCell {

	HKCDADocumentSample* _cdaSample;
	UIView* _background;
	UILabel* _titleLabel;
	UILabel* _dateLabel;
	UILabel* _patientTitle;
	UILabel* _patientLabel;
	UILabel* _institutionTitle;
	UILabel* _institutionLabel;
	HKSeparatorLineView* _separator;
	UIImageView* _discloseView;

}

@property (nonatomic,retain) HKCDADocumentSample * cdaSample;              //@synthesize cdaSample=_cdaSample - In the implementation block
@property (nonatomic,retain) UIView * background;                          //@synthesize background=_background - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * dateLabel;                          //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,retain) UILabel * patientTitle;                       //@synthesize patientTitle=_patientTitle - In the implementation block
@property (nonatomic,retain) UILabel * patientLabel;                       //@synthesize patientLabel=_patientLabel - In the implementation block
@property (nonatomic,retain) UILabel * institutionTitle;                   //@synthesize institutionTitle=_institutionTitle - In the implementation block
@property (nonatomic,retain) UILabel * institutionLabel;                   //@synthesize institutionLabel=_institutionLabel - In the implementation block
@property (nonatomic,retain) HKSeparatorLineView * separator;              //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) UIImageView * discloseView;                   //@synthesize discloseView=_discloseView - In the implementation block
-(UIView *)background;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(HKSeparatorLineView *)separator;
-(void)setSeparator:(HKSeparatorLineView *)arg1 ;
-(void)setBackground:(UIView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)dateLabel;
-(void)setDateLabel:(UILabel *)arg1 ;
-(void)_setupSubviews;
-(void)setPatientTitle:(UILabel *)arg1 ;
-(UILabel *)patientTitle;
-(void)setPatientLabel:(UILabel *)arg1 ;
-(void)setInstitutionTitle:(UILabel *)arg1 ;
-(UILabel *)institutionTitle;
-(void)setInstitutionLabel:(UILabel *)arg1 ;
-(void)setDiscloseView:(UIImageView *)arg1 ;
-(UIImageView *)discloseView;
-(UILabel *)patientLabel;
-(UILabel *)institutionLabel;
-(void)_adjustFont;
-(void)setCdaSample:(HKCDADocumentSample *)arg1 ;
-(HKCDADocumentSample *)cdaSample;
@end

