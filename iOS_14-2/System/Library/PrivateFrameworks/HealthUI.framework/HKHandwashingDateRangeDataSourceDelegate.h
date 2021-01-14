/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKDateRangeDataSourceDelegate.h>

@interface HKHandwashingDateRangeDataSourceDelegate : NSObject <HKDateRangeDataSourceDelegate> {

	double _goal;

}

@property (assign,nonatomic) double goal;              //@synthesize goal=_goal - In the implementation block
-(double)goal;
-(void)setGoal:(double)arg1 ;
-(void)setUpdateDelegate:(id)arg1 ;
-(id)initWithGoal:(double)arg1 ;
-(id)dataForDateRange:(id)arg1 timeScope:(long long)arg2 ;
@end

