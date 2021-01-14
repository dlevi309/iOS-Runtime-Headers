/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class GEOLocation, NSString, NSDate, GEOComposedWaypoint, MNCommuteDestinationSuggestion;

@interface FakeBitsAndPieces : NSObject {

	GEOLocation* _location;
	NSString* _name;
	double _weight;
	unsigned long long _type;
	NSDate* _expires;
	NSDate* _startDate;
	NSDate* _endDate;
	GEOComposedWaypoint* _waypoint;

}

@property (nonatomic,retain) GEOLocation * location;                               //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double weight;                                        //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) unsigned long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSDate * expires;                                     //@synthesize expires=_expires - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                   //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                     //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) GEOComposedWaypoint * waypoint;                       //@synthesize waypoint=_waypoint - In the implementation block
@property (readonly) MNCommuteDestinationSuggestion * fakeSuggestion; 
-(NSDate *)endDate;
-(NSDate *)expires;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setExpires:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setWeight:(double)arg1 ;
-(GEOLocation *)location;
-(void)setEndDate:(NSDate *)arg1 ;
-(double)weight;
-(void)setType:(unsigned long long)arg1 ;
-(void)setLocation:(GEOLocation *)arg1 ;
-(NSString *)name;
-(GEOComposedWaypoint *)waypoint;
-(unsigned long long)type;
-(void)setWaypoint:(GEOComposedWaypoint *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(MNCommuteDestinationSuggestion *)fakeSuggestion;
@end

