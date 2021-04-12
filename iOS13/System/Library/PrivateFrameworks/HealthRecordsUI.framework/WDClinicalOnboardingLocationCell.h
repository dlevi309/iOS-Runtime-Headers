/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/WDClinicalLocationCell.h>

@class HKClinicalProvider;

@interface WDClinicalOnboardingLocationCell : WDClinicalLocationCell {

	HKClinicalProvider* _provider;

}

@property (nonatomic,copy,readonly) HKClinicalProvider * provider;              //@synthesize provider=_provider - In the implementation block
-(void)prepareForReuse;
-(HKClinicalProvider *)provider;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_setupSubviews;
-(void)_updateForContentSizeCategory:(id)arg1 ;
-(void)_updateContentWithBrandable:(id)arg1 dataProvider:(id)arg2 ;
-(void)setProvider:(id)arg1 dataProvider:(id)arg2 ;
@end

