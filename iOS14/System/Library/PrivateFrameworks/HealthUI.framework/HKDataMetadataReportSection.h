/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKDataMetadataSection.h>

@class HKSample, NSString, HKHealthStore;

@interface HKDataMetadataReportSection : HKDataMetadataSection {

	HKSample* _sample;
	NSString* _detailedReportName;
	HKHealthStore* _healthStore;

}

@property (nonatomic,readonly) HKSample * sample;                          //@synthesize sample=_sample - In the implementation block
@property (nonatomic,readonly) NSString * detailedReportName;              //@synthesize detailedReportName=_detailedReportName - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore;                //@synthesize healthStore=_healthStore - In the implementation block
-(HKHealthStore *)healthStore;
-(HKSample *)sample;
-(id)sectionTitle;
-(unsigned long long)numberOfRowsInSection;
-(id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 ;
-(NSString *)detailedReportName;
-(id)documentImageForXMLFiles;
-(id)initWithSample:(id)arg1 healthStore:(id)arg2 ;
@end

