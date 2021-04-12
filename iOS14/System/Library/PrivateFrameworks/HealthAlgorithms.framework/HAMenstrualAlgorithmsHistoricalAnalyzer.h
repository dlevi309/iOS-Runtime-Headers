/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
*/


#import <HealthAlgorithms/HealthAlgorithms-Structs.h>
@interface HAMenstrualAlgorithmsHistoricalAnalyzer : NSObject {

	unique_ptr<Nightingale::ngt_HistoricalAnalyzer, std::__1::default_delete<Nightingale::ngt_HistoricalAnalyzer> >* _historicalAnalyzer;
	optional<unsigned int> _julianDayOfLastInput;

}
-(id)init;
-(id)analyze;
-(void)appendDay:(id)arg1 ;
@end

