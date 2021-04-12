/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class UIImage, NSString, UIColor;

@interface HRConceptHeaderCell : WDMedicalRecordGroupableCell {

	 titleLabel;
	 chevronView;
	 $__lazy_storage_$_bottomConstraint;
	 headerImage;
	 title;
	 categoryColor;

}

@property (retain,nonatomic) UIImage * headerImage; 
@property (copy,nonatomic) NSString * title; 
@property (retain,nonatomic) UIColor * categoryColor; 
@property (assign,nonatomic) long long intendedPlacement; 
+(id)defaultReuseIdentifier;
-(void)setTitle:(NSString *)arg1 ;
-(UIColor *)categoryColor;
-(void)setupSubviews;
-(void)_updateForCurrentSizeCategory;
-(void)setHeaderImage:(UIImage *)arg1 ;
-(UIImage *)headerImage;
-(id)initWithCoder:(id)arg1 ;
-(void)setUpConstraints;
-(void)setIntendedPlacement:(long long)arg1 ;
-(void)setCategoryColor:(UIColor *)arg1 ;
-(long long)intendedPlacement;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)title;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

