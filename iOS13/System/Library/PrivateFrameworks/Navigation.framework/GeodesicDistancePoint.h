/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(double)timeIntervalSinceReferenceDate;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(double)geodesicDistance;
-(id)initWithDate:(id)arg1 geodesicDistance:(double)arg2 ;
-(void)setGeodesicDistance:(double)arg1 ;
@end

