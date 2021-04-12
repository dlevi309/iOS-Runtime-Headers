/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/WDMedicalRecordBrandLogoCell.h>

@class UILabel;

@interface WDMedicalRecordBrandCell : WDMedicalRecordBrandLogoCell

@property (nonatomic,readonly) UILabel * brandTitleLabel; 
@property (nonatomic,readonly) UILabel * brandSubtitleLabel; 
@property (nonatomic,readonly) UILabel * brandDetailLabel; 
-(void)_updateForContentSizeCategory:(id)arg1 ;
-(void)_updateLabelVisibility;
-(void)setBrandable:(id)arg1 dataProvider:(id)arg2 ;
-(UILabel *)brandTitleLabel;
-(UILabel *)brandSubtitleLabel;
-(UILabel *)brandDetailLabel;
@end

