/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class UILabel, NSString;

@interface WDMedicalRecordDetailSubtitleCell : WDMedicalRecordGroupableCell {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
+(id)_subtitleLabelFont;
+(id)_titleLabelFont;
+(double)_titleLabelTopToFirstBaseline;
+(double)_subtitleLabelTopToFirstBaseline;
+(double)_subtitleLabelLastBaselineToBottom;
-(UILabel *)titleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setupSubviews;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)title;
@end

