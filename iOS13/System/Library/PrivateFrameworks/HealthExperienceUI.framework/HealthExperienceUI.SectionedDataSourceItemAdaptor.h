/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/


@class UILabel;

@interface HealthExperienceUI.SectionedDataSourceItemAdaptor : NSObject {

	 valueLabel;
	 longDescriptionLabel;
	 shortDescriptionLabel;
	 relativeStartDateLabel;
	 relativeEndDateLabel;
	 shortDateLabel;
	 unitLabel;
	 valueLabelFormatter;
	 dataSource;
	 item;

}

@property (assign,__weak,nonatomic) UILabel * valueLabel; 
@property (assign,__weak,nonatomic) UILabel * longDescriptionLabel; 
@property (assign,__weak,nonatomic) UILabel * shortDescriptionLabel; 
@property (assign,__weak,nonatomic) UILabel * relativeStartDateLabel; 
@property (assign,__weak,nonatomic) UILabel * relativeEndDateLabel; 
@property (assign,__weak,nonatomic) UILabel * shortDateLabel; 
@property (assign,__weak,nonatomic) UILabel * unitLabel; 
-(id)init;
-(void)setValueLabel:(UILabel *)arg1 ;
-(UILabel *)valueLabel;
-(UILabel *)longDescriptionLabel;
-(void)setLongDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)shortDescriptionLabel;
-(void)setShortDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)relativeStartDateLabel;
-(void)setRelativeStartDateLabel:(UILabel *)arg1 ;
-(UILabel *)relativeEndDateLabel;
-(void)setRelativeEndDateLabel:(UILabel *)arg1 ;
-(UILabel *)shortDateLabel;
-(void)setShortDateLabel:(UILabel *)arg1 ;
-(UILabel *)unitLabel;
-(void)setUnitLabel:(UILabel *)arg1 ;
@end

