/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSMutableArray;

@interface RTStateTransitionMotionActivityHistogram : NSObject {

	NSMutableArray* _histogramBins;
	long long _activityChangeCount;
	double _cumulativeInterval;

}

@property (nonatomic,retain) NSMutableArray * histogramBins;              //@synthesize histogramBins=_histogramBins - In the implementation block
@property (assign,nonatomic) long long activityChangeCount;               //@synthesize activityChangeCount=_activityChangeCount - In the implementation block
@property (assign,nonatomic) double cumulativeInterval;                   //@synthesize cumulativeInterval=_cumulativeInterval - In the implementation block
-(void)show;
-(unsigned long long)getDominantMotionActivityType;
-(void)addActivity:(id)arg1 withInterval:(double)arg2 ;
-(NSMutableArray *)histogramBins;
-(double)cumulativeInterval;
-(void)setCumulativeInterval:(double)arg1 ;
-(long long)activityChangeCount;
-(void)setActivityChangeCount:(long long)arg1 ;
-(id)initWithMotionActivities:(id)arg1 fromStartDate:(id)arg2 toEndDate:(id)arg3 ;
-(void)setHistogramBins:(NSMutableArray *)arg1 ;
-(id)populateTransitionMotionActivityHistogram;
@end

