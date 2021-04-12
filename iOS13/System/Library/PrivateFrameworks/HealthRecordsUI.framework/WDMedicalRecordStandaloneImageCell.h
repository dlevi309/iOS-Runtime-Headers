/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setDetail:(NSString *)arg1 ;
-(NSString *)detail;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(UILabel *)detailLabel;
-(void)setTitleImage:(UIImage *)arg1 ;
-(UIImage *)titleImage;
-(UIImageView *)titleImageView;
-(void)setupSubviews;
-(void)_updateForCurrentSizeCategory;
-(UIImageView *)disclosureChevronView;
-(void)setDisclosureChevronView:(UIImageView *)arg1 ;
-(void)setTitleImageView:(UIImageView *)arg1 ;
@end

