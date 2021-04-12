/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOTransitDepartureSequence.h>

@protocol GEOTransitLine;
@class NSString, NSArray, NSSet, GEOPDDepartureSequence;

@interface _GEOTransitDepartureSequence : NSObject <GEOTransitDepartureSequence> {

	GEOPDDepartureSequence* _sequence;
	id<GEOTransitLine> _line;
	NSSet* _nextStopIDs;
	long long _displayStyle;

}

@property (nonatomic,readonly) NSArray * departures; 
@property (nonatomic,readonly) NSArray * frequencies; 
@property (nonatomic,readonly) id<GEOTransitLine> line; 
@property (nonatomic,readonly) BOOL isLowFrequency; 
@property (nonatomic,readonly) long long displayStyle; 
@property (nonatomic,readonly) NSString * direction; 
@property (nonatomic,readonly) NSString * headsign; 
@property (nonatomic,readonly) NSArray * operatingHours; 
@property (nonatomic,readonly) NSSet * nextStopIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)direction;
-(unsigned long long)stopId;
-(NSArray *)operatingHours;
-(NSString *)headsign;
-(NSSet *)nextStopIDs;
-(id<GEOTransitLine>)line;
-(NSArray *)departures;
-(NSArray *)frequencies;
-(BOOL)isLowFrequency;
-(BOOL)hasFrequencyAtDate:(id)arg1 ;
-(id)operatingHoursForDate:(id)arg1 inTimeZone:(id)arg2 ;
-(BOOL)areOperatingHours:(id)arg1 activeForDate:(id)arg2 ;
-(id)firstDepartureValidForDate:(id)arg1 ;
-(id)firstDepartureOnOrAfterDate:(id)arg1 ;
-(void)_enumerateDeparturesValidForDate:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)firstDepartureAfterDate:(id)arg1 ;
-(unsigned long long)numberOfDeparturesAfterDate:(id)arg1 ;
-(id)firstDepartureFrequencyOnOrAfterDate:(id)arg1 ;
-(id)departuresValidForDate:(id)arg1 ;
-(id)firstOpenOperatingDateOnOrAfterDate:(id)arg1 ;
-(BOOL)isValidForDate:(id)arg1 inTimeZone:(id)arg2 ;
-(double)frequencyForSortingAtDate:(id)arg1 ;
-(id)frequencyToDescribeAtDate:(id)arg1 ;
-(BOOL)isDepartureDateInactive:(id)arg1 withReferenceDate:(id)arg2 ;
-(id)initWithSequence:(id)arg1 line:(id)arg2 pbLine:(id)arg3 ;
-(long long)displayStyle;
@end

