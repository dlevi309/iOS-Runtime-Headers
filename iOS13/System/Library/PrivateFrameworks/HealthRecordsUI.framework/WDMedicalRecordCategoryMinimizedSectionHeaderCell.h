/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)traitCollectionDidChange:(id)arg1 ;
-(double)_cornerRadius;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setGradient:(HKGradient *)arg1 ;
-(HKGradient *)gradient;
-(void)setupSubviews;
-(void)_updateForCurrentSizeCategory;
-(void)setBackgroundGradientView:(HKGradientView *)arg1 ;
-(HKGradientView *)backgroundGradientView;
@end

