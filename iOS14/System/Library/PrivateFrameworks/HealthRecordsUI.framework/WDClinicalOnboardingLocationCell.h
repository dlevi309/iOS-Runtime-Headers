/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/WDClinicalLocationCell.h>

@class HKClinicalProvider;

@interface WDClinicalOnboardingLocationCell : WDClinicalLocationCell {

	HKClinicalProvider* _provider;

}

@property (nonatomic,copy,readonly) HKClinicalProvider * provider;              //@synthesize provider=_provider - In the implementation block
-(HKClinicalProvider *)provider;
-(void)prepareForReuse;
-(void)_updateForContentSizeCategory:(id)arg1 ;
-(void)_setupSubviews;
-(void)_updateContentWithBrandable:(id)arg1 dataProvider:(id)arg2 ;
-(void)setProvider:(id)arg1 dataProvider:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

