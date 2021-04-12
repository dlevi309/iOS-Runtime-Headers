/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(HKClinicalProviderSearchResult *)searchResult;
-(void)setSearchResult:(HKClinicalProviderSearchResult *)arg1 ;
-(NSArray *)searchTerms;
-(void)setSearchTerms:(NSArray *)arg1 ;
-(void)_updateForContentSizeCategory:(id)arg1 ;
-(void)_updateLabelVisibility;
-(void)setSearchResult:(id)arg1 dataProvider:(id)arg2 searchTerms:(id)arg3 ;
-(void)_updateContentWithSearchResult:(id)arg1 dataProvider:(id)arg2 searchTerms:(id)arg3 ;
@end

