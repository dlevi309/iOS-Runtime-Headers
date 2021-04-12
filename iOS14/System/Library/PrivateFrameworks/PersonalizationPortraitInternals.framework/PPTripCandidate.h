/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class NSArray;

@interface PPTripCandidate : NSObject {

	NSArray* _flights;
	NSArray* _hotels;
	NSArray* _others;

}

@property (nonatomic,retain) NSArray * flights;              //@synthesize flights=_flights - In the implementation block
@property (nonatomic,retain) NSArray * hotels;               //@synthesize hotels=_hotels - In the implementation block
@property (nonatomic,retain) NSArray * others;               //@synthesize others=_others - In the implementation block
-(void)setFlights:(NSArray *)arg1 ;
-(NSArray *)hotels;
-(NSArray *)others;
-(NSArray *)flights;
-(id)allEvents;
-(id)initWithTripCandidateA:(id)arg1 andTripCandidateB:(id)arg2 ;
-(BOOL)canBeMergedWithTripCandidate:(id)arg1 ;
-(BOOL)shouldPromoteToTripEvent;
-(id)tripEventFromCandidate;
-(unsigned char)modeForEventCategory:(unsigned char)arg1 ;
-(double)timeIntervalBetweenEvent:(id)arg1 andEvent:(id)arg2 ;
-(id)partFromEvents:(id)arg1 tripMode:(unsigned char)arg2 takingLocationFromEvent:(id)arg3 ;
-(id)partFromEvents:(id)arg1 tripMode:(unsigned char)arg2 takingLocationFromEvent:(id)arg3 overradingStartDate:(id)arg4 endDate:(id)arg5 ;
-(NSRange)eventsTimeRange;
-(id)reverseGeocodedLocation:(id)arg1 ;
-(void)setHotels:(NSArray *)arg1 ;
-(void)setOthers:(NSArray *)arg1 ;
@end

