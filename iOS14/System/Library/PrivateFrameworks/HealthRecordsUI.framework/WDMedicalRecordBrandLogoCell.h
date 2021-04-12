/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class UIImageView, WDBrandLogoView, WDMedicalRecordBrandView, WDClinicalSourcesDataProvider;

@interface WDMedicalRecordBrandLogoCell : WDMedicalRecordGroupableCell {

	BOOL _showDisclosureChevron;
	UIImageView* _disclosureChevronView;
	WDBrandLogoView* _logoView;
	WDMedicalRecordBrandView* _brandView;

}

@property (nonatomic,readonly) UIImageView * disclosureChevronView;                                 //@synthesize disclosureChevronView=_disclosureChevronView - In the implementation block
@property (nonatomic,readonly) WDBrandLogoView * logoView;                                          //@synthesize logoView=_logoView - In the implementation block
@property (nonatomic,readonly) WDMedicalRecordBrandView * brandView;                                //@synthesize brandView=_brandView - In the implementation block
@property (nonatomic,readonly) id<HKClinicalBrandable> brandable; 
@property (nonatomic,readonly) WDClinicalSourcesDataProvider * dataProvider; 
@property (assign,nonatomic) double logoSize; 
@property (assign,getter=showsDisclosureChevron,nonatomic) BOOL showDisclosureChevron;              //@synthesize showDisclosureChevron=_showDisclosureChevron - In the implementation block
-(void)setLogoSize:(double)arg1 ;
-(void)setBrandable:(id)arg1 dataProvider:(id)arg2 ;
-(id<HKClinicalBrandable>)brandable;
-(void)prepareForReuse;
-(void)_updateBasedOnAccessibilityCategory:(BOOL)arg1 ;
-(void)_updateContentWithBrandable:(id)arg1 dataProvider:(id)arg2 ;
-(void)setupSubviews;
-(void)updateConstraints;
-(WDClinicalSourcesDataProvider *)dataProvider;
-(void)setShowDisclosureChevron:(BOOL)arg1 ;
-(id)_contentViewMarginsGuide;
-(WDMedicalRecordBrandView *)brandView;
-(BOOL)showsDisclosureChevron;
-(UIImageView *)disclosureChevronView;
-(void)setUpConstraints;
-(WDBrandLogoView *)logoView;
-(double)logoSize;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

