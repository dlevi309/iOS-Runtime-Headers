/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_subtitleLabelFont;
+(id)_titleLabelFont;
+(double)_titleLabelTopToFirstBaseline;
+(double)_subtitleLabelTopToFirstBaseline;
+(double)_subtitleLabelLastBaselineToBottom;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setupSubviews;
-(void)setDateSubtitle:(NSString *)arg1 ;
-(void)setDateSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)dateSubtitleLabel;
-(NSString *)dateSubtitle;
-(NSString *)title;
@end

