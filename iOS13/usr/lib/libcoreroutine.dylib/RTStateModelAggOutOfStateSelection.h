/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSMutableArray;

@interface RTStateModelAggOutOfStateSelection : NSObject {

	NSMutableArray* _selectOOStStates;
	double _weeklyDensityCorrection;
	double _dailyDensityCorrection;

}

@property (nonatomic,retain) NSMutableArray * selectOOStStates;              //@synthesize selectOOStStates=_selectOOStStates - In the implementation block
@property (assign,nonatomic) double weeklyDensityCorrection;                 //@synthesize weeklyDensityCorrection=_weeklyDensityCorrection - In the implementation block
@property (assign,nonatomic) double dailyDensityCorrection;                  //@synthesize dailyDensityCorrection=_dailyDensityCorrection - In the implementation block
-(id)init;
-(void)setWeeklyDensityCorrection:(double)arg1 ;
-(void)setDailyDensityCorrection:(double)arg1 ;
-(void)setSelectOOStStates:(NSMutableArray *)arg1 ;
-(id)initWithSelectOOStStates:(id)arg1 dailyDensityCorrection:(double)arg2 weeklyDensityCorrection:(double)arg3 ;
-(NSMutableArray *)selectOOStStates;
-(double)weeklyDensityCorrection;
-(double)dailyDensityCorrection;
@end

