/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)referenceDate;
-(void)setReferenceDate:(NSDate *)arg1 ;
-(RTLocation *)referenceLocation;
-(void)setMinimumDistance:(double)arg1 ;
-(double)minimumDistance;
-(double)minimumConfidence;
-(void)setMinimumConfidence:(double)arg1 ;
-(void)setMaximumDistance:(double)arg1 ;
-(double)maximumDistance;
-(void)setReferenceLocation:(RTLocation *)arg1 ;
-(id)initWithDistanceCalculator:(id)arg1 ;
-(double)windowDuration;
-(void)setWindowDuration:(double)arg1 ;
-(BOOL)evaluatePredictedLocationOfInterest:(id)arg1 ;
@end

