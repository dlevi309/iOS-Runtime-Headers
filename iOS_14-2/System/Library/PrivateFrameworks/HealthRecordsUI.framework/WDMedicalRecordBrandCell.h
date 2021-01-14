/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/WDMedicalRecordBrandLogoCell.h>

@class UILabel;

@interface WDMedicalRecordBrandCell : WDMedicalRecordBrandLogoCell

@property (nonatomic,readonly) UILabel * brandTitleLabel; 
@property (nonatomic,readonly) UILabel * brandSubtitleLabel; 
@property (nonatomic,readonly) UILabel * brandDetailLabel; 
-(void)setBrandable:(id)arg1 dataProvider:(id)arg2 ;
-(void)_updateForContentSizeCategory:(id)arg1 ;
-(UILabel *)brandTitleLabel;
-(UILabel *)brandSubtitleLabel;
-(UILabel *)brandDetailLabel;
-(void)_updateLabelVisibility;
@end

