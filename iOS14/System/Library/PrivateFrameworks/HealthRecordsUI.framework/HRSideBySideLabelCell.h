/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)detail;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDetail:(NSString *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)title;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

