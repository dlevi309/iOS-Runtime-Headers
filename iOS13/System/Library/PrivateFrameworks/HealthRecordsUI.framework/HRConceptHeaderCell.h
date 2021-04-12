/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setupSubviews;
-(void)_updateForCurrentSizeCategory;
-(void)setUpConstraints;
-(UIImage *)headerImage;
-(void)setHeaderImage:(UIImage *)arg1 ;
-(void)setIntendedPlacement:(long long)arg1 ;
-(void)setCategoryColor:(UIColor *)arg1 ;
-(long long)intendedPlacement;
-(UIColor *)categoryColor;
@end

