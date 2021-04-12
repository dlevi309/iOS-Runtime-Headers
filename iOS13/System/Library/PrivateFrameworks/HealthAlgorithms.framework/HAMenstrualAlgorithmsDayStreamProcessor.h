/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
*/


#import <HealthAlgorithms/HealthAlgorithms-Structs.h>
@interface HAMenstrualAlgorithmsDayStreamProcessor : NSObject {

	unique_ptr<Nightingale::ngt_DayStreamProcessor, std::__1::default_delete<Nightingale::ngt_DayStreamProcessor> >* _dayStreamProcessor;
	optional<unsigned int> _julianDayOfLastInput;

}
-(id)init;
-(id)analyze;
-(id)initWithConfig:(id)arg1 ;
-(id)analyzeWithMostRecentMenstrualFlowJulianDayUpdated:(unsigned)arg1 ;
-(void)appendDay:(id)arg1 ;
@end

