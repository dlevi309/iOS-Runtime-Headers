/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setupSubviews;
-(UIView *)chevronView;
-(void)setChevronView:(UIView *)arg1 ;
@end

