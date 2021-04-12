/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RTDistanceCalculator, NSDate, RTLocation;

@interface RTPredictedLocationsOfInterestCriteria : NSObject <NSCopying> {

	RTDistanceCalculator* _distanceCalculator;
	NSDate* _referenceDate;
	double _windowDuration;
	RTLocation* _referenceLocation;
	double _minimumDistance;
	double _maximumDistance;
	double _minimumConfidence;

}

@property (nonatomic,retain) NSDate * referenceDate;                      //@synthesize referenceDate=_referenceDate - In the implementation block
@property (assign,nonatomic) double windowDuration;                       //@synthesize windowDuration=_windowDuration - In the implementation block
@property (nonatomic,retain) RTLocation * referenceLocation;              //@synthesize referenceLocation=_referenceLocation - In the implementation block
@property (assign,nonatomic) double minimumDistance;                      //@synthesize minimumDistance=_minimumDistance - In the implementation block
@property (assign,nonatomic) double maximumDistance;                      //@synthesize maximumDistance=_maximumDistance - In the implementation block
@property (assign,nonatomic) double minimumConfidence;                    //@synthesize minimumConfidence=_minimumConfidence - In the implementation block
-(void)setMinimumConfidence:(double)arg1 ;
-(BOOL)evaluatePredictedLocationOfInterest:(id)arg1 ;
-(id)initWithDistanceCalculator:(id)arg1 ;
-(id)init;
-(void)setMaximumDistance:(double)arg1 ;
-(double)windowDuration;
-(void)setReferenceDate:(NSDate *)arg1 ;
-(NSDate *)referenceDate;
-(double)maximumDistance;
-(void)setMinimumDistance:(double)arg1 ;
-(double)minimumConfidence;
-(RTLocation *)referenceLocation;
-(void)setWindowDuration:(double)arg1 ;
-(double)minimumDistance;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setReferenceLocation:(RTLocation *)arg1 ;
@end

