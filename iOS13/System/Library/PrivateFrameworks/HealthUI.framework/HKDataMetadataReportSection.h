/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)sectionTitle;
-(HKSample *)sample;
-(unsigned long long)numberOfRowsInSection;
-(id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 ;
-(id)initWithSample:(id)arg1 healthStore:(id)arg2 ;
-(NSString *)detailedReportName;
-(id)documentImageForXMLFiles;
@end

