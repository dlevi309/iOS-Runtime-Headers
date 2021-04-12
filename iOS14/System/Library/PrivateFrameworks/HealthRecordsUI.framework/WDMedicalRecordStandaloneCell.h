/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class UILabel, UIView, NSString;

@interface WDMedicalRecordStandaloneCell : WDMedicalRecordGroupableCell {

	UILabel* _titleLabel;
	UIView* _chevronView;

}

@property (nonatomic,retain) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * chevronView;              //@synthesize chevronView=_chevronView - In the implementation block
@property (nonatomic,copy) NSString * title; 
+(id)_titleLabelFont;
+(double)_titleLabelTopToFirstBaseline;
+(double)_titleLabelLastBaselineToBottom;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(UIView *)chevronView;
-(void)setChevronView:(UIView *)arg1 ;
-(void)setupSubviews;
-(NSString *)title;
@end

