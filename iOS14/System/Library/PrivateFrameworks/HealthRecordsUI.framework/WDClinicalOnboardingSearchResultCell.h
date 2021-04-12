/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/WDMedicalRecordBrandCell.h>

@class HKClinicalProviderSearchResult, NSArray;

@interface WDClinicalOnboardingSearchResultCell : WDMedicalRecordBrandCell {

	HKClinicalProviderSearchResult* _searchResult;
	NSArray* _searchTerms;

}

@property (nonatomic,copy) HKClinicalProviderSearchResult * searchResult;              //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,copy) NSArray * searchTerms;                                      //@synthesize searchTerms=_searchTerms - In the implementation block
-(HKClinicalProviderSearchResult *)searchResult;
-(void)setSearchResult:(HKClinicalProviderSearchResult *)arg1 ;
-(void)_updateForContentSizeCategory:(id)arg1 ;
-(NSArray *)searchTerms;
-(void)setSearchTerms:(NSArray *)arg1 ;
-(void)setSearchResult:(id)arg1 dataProvider:(id)arg2 searchTerms:(id)arg3 ;
-(void)_updateContentWithSearchResult:(id)arg1 dataProvider:(id)arg2 searchTerms:(id)arg3 ;
-(void)_updateLabelVisibility;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

