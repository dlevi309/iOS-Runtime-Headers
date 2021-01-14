/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class HKRoundedHeaderView, HKGradient, UIImage, NSString;

@interface WDMedicalRecordCategorySectionHeaderCell : WDMedicalRecordGroupableCell {

	HKRoundedHeaderView* _headerView;

}

@property (nonatomic,retain) HKRoundedHeaderView * headerView;              //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) HKGradient * gradient; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSString * title; 
-(void)setHeaderView:(HKRoundedHeaderView *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setupSubviews;
-(HKRoundedHeaderView *)headerView;
-(void)setGradient:(HKGradient *)arg1 ;
-(NSString *)title;
-(HKGradient *)gradient;
@end

