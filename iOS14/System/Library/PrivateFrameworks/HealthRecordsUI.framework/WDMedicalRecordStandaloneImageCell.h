/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class UILabel, UIImageView, NSString, UIImage;

@interface WDMedicalRecordStandaloneImageCell : WDMedicalRecordGroupableCell {

	UILabel* _titleLabel;
	UILabel* _detailLabel;
	UIImageView* _disclosureChevronView;
	UIImageView* _titleImageView;

}

@property (nonatomic,retain) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                            //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) UIImageView * disclosureChevronView;              //@synthesize disclosureChevronView=_disclosureChevronView - In the implementation block
@property (nonatomic,retain) UIImageView * titleImageView;                     //@synthesize titleImageView=_titleImageView - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * detail; 
@property (nonatomic,copy) UIImage * titleImage; 
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSString *)detail;
-(void)setTitleImage:(UIImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)titleImage;
-(void)setupSubviews;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(UIImageView *)disclosureChevronView;
-(void)_updateForCurrentSizeCategory;
-(void)setDetail:(NSString *)arg1 ;
-(void)setDisclosureChevronView:(UIImageView *)arg1 ;
-(void)setTitleImageView:(UIImageView *)arg1 ;
-(UILabel *)detailLabel;
-(NSString *)title;
-(UIImageView *)titleImageView;
@end

