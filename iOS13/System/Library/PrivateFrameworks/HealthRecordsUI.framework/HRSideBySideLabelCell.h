/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class NSString;

@interface HRSideBySideLabelCell : WDMedicalRecordGroupableCell {

	 titleLabel;
	 detailLabel;
	 chevronView;
	 title;
	 detail;

}

@property (copy,nonatomic) NSString * title; 
@property (copy,nonatomic) NSString * detail; 
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setDetail:(NSString *)arg1 ;
-(NSString *)detail;
@end

