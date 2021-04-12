/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOTimeCheckpoints;

@interface _GEOComposedETARouteStep : NSObject <NSSecureCoding> {

	unsigned long long _stepID;
	double _travelDuration;
	double _length;
	GEOTimeCheckpoints* _timeCheckpoints;

}

@property (assign,nonatomic) unsigned long long stepID;                         //@synthesize stepID=_stepID - In the implementation block
@property (assign,nonatomic) double travelDuration;                             //@synthesize travelDuration=_travelDuration - In the implementation block
@property (assign,nonatomic) double length;                                     //@synthesize length=_length - In the implementation block
@property (nonatomic,retain) GEOTimeCheckpoints * timeCheckpoints;              //@synthesize timeCheckpoints=_timeCheckpoints - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLength:(double)arg1 ;
-(unsigned long long)stepID;
-(void)encodeWithCoder:(id)arg1 ;
-(double)length;
-(id)description;
-(GEOTimeCheckpoints *)timeCheckpoints;
-(void)setTimeCheckpoints:(GEOTimeCheckpoints *)arg1 ;
-(void)setTravelDuration:(double)arg1 ;
-(double)travelDuration;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithPrecision:(unsigned long long)arg1 ;
-(void)setStepID:(unsigned long long)arg1 ;
@end

