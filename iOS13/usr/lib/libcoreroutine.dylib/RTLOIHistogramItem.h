/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class RTLocationOfInterest;

@interface RTLOIHistogramItem : NSObject {

	RTLocationOfInterest* _locationOfInterest;
	double _timeOfStay;
	double _probability;
	long long _numOfEvents;

}

@property (nonatomic,retain) RTLocationOfInterest * locationOfInterest;              //@synthesize locationOfInterest=_locationOfInterest - In the implementation block
@property (assign,nonatomic) double timeOfStay;                                      //@synthesize timeOfStay=_timeOfStay - In the implementation block
@property (assign,nonatomic) double probability;                                     //@synthesize probability=_probability - In the implementation block
@property (assign,nonatomic) long long numOfEvents;                                  //@synthesize numOfEvents=_numOfEvents - In the implementation block
-(id)description;
-(double)probability;
-(void)setProbability:(double)arg1 ;
-(RTLocationOfInterest *)locationOfInterest;
-(void)setLocationOfInterest:(RTLocationOfInterest *)arg1 ;
-(double)timeOfStay;
-(void)setTimeOfStay:(double)arg1 ;
-(long long)numOfEvents;
-(void)setNumOfEvents:(long long)arg1 ;
-(id)initWithLocationOfInterest:(id)arg1 timeOfStay:(double)arg2 andNumOfEvents:(long long)arg3 ;
@end

