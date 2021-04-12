/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class HKGradientView, NSLayoutConstraint, HKGradient;

@interface WDMedicalRecordCategoryMinimizedSectionHeaderCell : WDMedicalRecordGroupableCell {

	HKGradientView* _backgroundGradientView;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,retain) HKGradientView * backgroundGradientView;              //@synthesize backgroundGradientView=_backgroundGradientView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (nonatomic,retain) HKGradient * gradient; 
+(id)_titleLabelFont;
+(double)_pillBackgroundViewHeightConstraint;
-(double)_cornerRadius;
-(void)setupSubviews;
-(NSLayoutConstraint *)heightConstraint;
-(void)_updateForCurrentSizeCategory;
-(void)setBackgroundGradientView:(HKGradientView *)arg1 ;
-(HKGradientView *)backgroundGradientView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setGradient:(HKGradient *)arg1 ;
-(HKGradient *)gradient;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

