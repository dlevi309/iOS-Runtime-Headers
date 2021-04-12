/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSString, NSArray, NSSet;


@protocol GEOTransitDepartureSequence <NSObject>
@property (nonatomic,readonly) id<GEOTransitLine> line; 
@property (nonatomic,readonly) BOOL isLowFrequency; 
@property (nonatomic,readonly) long long displayStyle; 
@property (nonatomic,readonly) NSString * direction; 
@property (nonatomic,readonly) NSString * headsign; 
@property (nonatomic,readonly) NSArray * operatingHours; 
@property (nonatomic,readonly) NSSet * nextStopIDs; 
@required
-(NSString *)direction;
-(id<GEOTransitLine>)line;
-(NSString *)headsign;
-(id)departures;
-(unsigned long long)stopId;
-(NSArray *)operatingHours;
-(long long)displayStyle;
-(NSSet *)nextStopIDs;
-(BOOL)isLowFrequency;
-(id)operatingHoursForDate:(id)arg1 inTimeZone:(id)arg2;
-(id)firstDepartureValidForDate:(id)arg1;
-(BOOL)hasFrequencyAtDate:(id)arg1;
-(id)firstDepartureOnOrAfterDate:(id)arg1;
-(id)firstDepartureAfterDate:(id)arg1;
-(unsigned long long)numberOfDeparturesAfterDate:(id)arg1;
-(id)firstDepartureFrequencyOnOrAfterDate:(id)arg1;
-(id)firstOpenOperatingDateOnOrAfterDate:(id)arg1;
-(BOOL)isValidForDate:(id)arg1 inTimeZone:(id)arg2;
-(id)departuresValidForDate:(id)arg1;
-(double)frequencyForSortingAtDate:(id)arg1;
-(id)frequencyToDescribeAtDate:(id)arg1;
-(BOOL)isDepartureDateInactive:(id)arg1 withReferenceDate:(id)arg2;

@end

