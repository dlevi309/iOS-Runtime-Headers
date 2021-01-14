/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)probability;
-(RTLocationOfInterest *)locationOfInterest;
-(id)description;
-(void)setProbability:(double)arg1 ;
-(void)setLocationOfInterest:(RTLocationOfInterest *)arg1 ;
-(double)timeOfStay;
-(void)setTimeOfStay:(double)arg1 ;
-(long long)numOfEvents;
-(void)setNumOfEvents:(long long)arg1 ;
-(id)initWithLocationOfInterest:(id)arg1 timeOfStay:(double)arg2 andNumOfEvents:(long long)arg3 ;
@end

