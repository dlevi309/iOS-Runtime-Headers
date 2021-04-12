/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


#import <HealthKit/HealthKit-Structs.h>
@interface HKDateIntervalTree : NSObject {

	unique_ptr<HKIntervalTree<double>, std::__1::default_delete<HKIntervalTree<double> > >* _tree;

}
-(id)init;
-(void)insertInterval:(id)arg1 ;
-(BOOL)hasOverlapWithInterval:(id)arg1 ;
-(id)mergedIntervals;
@end

