/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class MKMapItem, NSArray, NSDate;

@interface MKETAResponse : NSObject {

	MKMapItem* _source;
	MKMapItem* _destination;
	double _expectedTravelTime;
	double _distance;
	NSArray* _sortedETAs;
	unsigned long long _transportType;
	NSDate* _expectedArrivalDate;
	NSDate* _expectedDepartureDate;

}

@property (nonatomic,retain) NSDate * expectedArrivalDate;                           //@synthesize expectedArrivalDate=_expectedArrivalDate - In the implementation block
@property (nonatomic,retain) NSDate * expectedDepartureDate;                         //@synthesize expectedDepartureDate=_expectedDepartureDate - In the implementation block
@property (getter=_sortedETAs,nonatomic,readonly) NSArray * sortedETAs;              //@synthesize sortedETAs=_sortedETAs - In the implementation block
@property (nonatomic,readonly) MKMapItem * source;                                   //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) MKMapItem * destination;                              //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) double expectedTravelTime;                            //@synthesize expectedTravelTime=_expectedTravelTime - In the implementation block
@property (nonatomic,readonly) double distance;                                      //@synthesize distance=_distance - In the implementation block
@property (nonatomic,readonly) unsigned long long transportType;                     //@synthesize transportType=_transportType - In the implementation block
-(double)distance;
-(unsigned long long)transportType;
-(double)expectedTravelTime;
-(id)_sortedETAs;
-(unsigned long long)_transportType:(int)arg1 ;
-(id)initWithSource:(id)arg1 destination:(id)arg2 expectedTravelTime:(double)arg3 distance:(double)arg4 sortedETAs:(id)arg5 ;
-(NSDate *)expectedArrivalDate;
-(void)setExpectedArrivalDate:(NSDate *)arg1 ;
-(NSDate *)expectedDepartureDate;
-(void)setExpectedDepartureDate:(NSDate *)arg1 ;
-(MKMapItem *)destination;
-(MKMapItem *)source;
@end

