/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(HKRoundedHeaderView *)headerView;
-(void)setHeaderView:(HKRoundedHeaderView *)arg1 ;
-(void)setGradient:(HKGradient *)arg1 ;
-(HKGradient *)gradient;
-(void)setupSubviews;
@end

