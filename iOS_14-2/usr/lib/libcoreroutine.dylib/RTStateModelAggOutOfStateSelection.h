/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setWeeklyDensityCorrection:(double)arg1 ;
-(id)init;
-(void)setSelectOOStStates:(NSMutableArray *)arg1 ;
-(NSMutableArray *)selectOOStStates;
-(double)weeklyDensityCorrection;
-(void)setDailyDensityCorrection:(double)arg1 ;
-(id)initWithSelectOOStStates:(id)arg1 dailyDensityCorrection:(double)arg2 weeklyDensityCorrection:(double)arg3 ;
-(double)dailyDensityCorrection;
@end

