/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString, GEOComposedWaypoint, NSDate;

@interface MNCommuteDestinationSuggestion : NSObject <NSCopying, NSSecureCoding> {

	BOOL _allDay;
	NSData* _rawSuggestion;
	NSString* _uniqueIdentifier;
	unsigned long long _type;
	NSString* _name;
	GEOComposedWaypoint* _waypoint;
	double _weight;
	NSDate* _expires;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,retain) NSData * rawSuggestion;                      //@synthesize rawSuggestion=_rawSuggestion - In the implementation block
@property (nonatomic,copy) NSString * uniqueIdentifier;                   //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) GEOComposedWaypoint * waypoint;              //@synthesize waypoint=_waypoint - In the implementation block
@property (assign,nonatomic) double weight;                               //@synthesize weight=_weight - In the implementation block
@property (nonatomic,copy) NSDate * expires;                              //@synthesize expires=_expires - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                            //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                              //@synthesize endDate=_endDate - In the implementation block
@property (assign,getter=isAllDay,nonatomic) BOOL allDay;                 //@synthesize allDay=_allDay - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)_setupFakes;
+(id)_fakeBitsAndPiecesForSuggestion:(id)arg1 ;
+(id)fakeDestinationSuggestion:(id)arg1 ;
+(void)fakeDestinationSuggestion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)fakeDestinationSuggestions;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSDate *)endDate;
-(void)setAllDay:(BOOL)arg1 ;
-(BOOL)isAllDay;
-(NSDate *)expires;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setExpires:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setWeight:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)setEndDate:(NSDate *)arg1 ;
-(double)weight;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)name;
-(id)description;
-(GEOComposedWaypoint *)waypoint;
-(unsigned long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setWaypoint:(GEOComposedWaypoint *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)rawSuggestion;
-(void)setRawSuggestion:(NSData *)arg1 ;
@end

