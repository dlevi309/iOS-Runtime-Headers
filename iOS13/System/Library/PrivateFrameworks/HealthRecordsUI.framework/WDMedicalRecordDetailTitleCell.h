/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class UILabel, NSString;

@interface WDMedicalRecordDetailTitleCell : WDMedicalRecordGroupableCell {

	UILabel* _titleLabel;
	UILabel* _dateSubtitleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * dateSubtitleLabel;              //@synthesize dateSubtitleLabel=_dateSubtitleLabel - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * dateSubtitle; 
+(id)_titleLabelFont;
+(double)_titleLabelTopToFirstBaseline;
+(id)_subtitleLabelFont;
+(double)_subtitleLabelTopToFirstBaseline;
+(double)_subtitleLabelLastBaselineToBottom;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setupSubviews;
-(void)setDateSubtitle:(NSString *)arg1 ;
-(void)setDateSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)dateSubtitleLabel;
-(NSString *)dateSubtitle;
@end

