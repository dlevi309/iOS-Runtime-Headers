/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class NSDate;

@interface GeodesicDistancePoint : NSObject {

	NSDate* _date;
	double _geodesicDistance;

}

@property (nonatomic,retain) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) double geodesicDistance;                    //@synthesize geodesicDistance=_geodesicDistance - In the implementation block
@property (readonly) double timeIntervalSinceReferenceDate; 
-(void)setDate:(NSDate *)arg1 ;
-(id)description;
-(NSDate *)date;
-(double)timeIntervalSinceReferenceDate;
-(double)geodesicDistance;
-(id)initWithDate:(id)arg1 geodesicDistance:(double)arg2 ;
-(void)setGeodesicDistance:(double)arg1 ;
@end

