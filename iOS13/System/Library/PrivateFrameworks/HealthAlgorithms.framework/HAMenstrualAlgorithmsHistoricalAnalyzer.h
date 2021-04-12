/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

