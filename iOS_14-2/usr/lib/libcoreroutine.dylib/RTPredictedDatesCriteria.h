/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, RTLocation;

@interface RTPredictedDatesCriteria : NSObject <NSCopying> {

	NSDate* _referenceDate;
	double _windowDuration;
	RTLocation* _referenceLocation;
	double _minimumConfidence;

}

@property (nonatomic,retain) NSDate * referenceDate;                      //@synthesize referenceDate=_referenceDate - In the implementation block
@property (assign,nonatomic) double windowDuration;                       //@synthesize windowDuration=_windowDuration - In the implementation block
@property (nonatomic,retain) RTLocation * referenceLocation;              //@synthesize referenceLocation=_referenceLocation - In the implementation block
@property (assign,nonatomic) double minimumConfidence;                    //@synthesize minimumConfidence=_minimumConfidence - In the implementation block
-(void)setMinimumConfidence:(double)arg1 ;
-(id)init;
-(double)windowDuration;
-(void)setReferenceDate:(NSDate *)arg1 ;
-(NSDate *)referenceDate;
-(double)minimumConfidence;
-(RTLocation *)referenceLocation;
-(void)setWindowDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setReferenceLocation:(RTLocation *)arg1 ;
-(BOOL)evaluatePredictedDate:(id)arg1 ;
@end

