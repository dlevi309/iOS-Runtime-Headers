/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOCacheInvalidationData, GEOMapItemIdentifier, NSString, NSArray, NSDateInterval, NSTimeZone;

@interface GEOPOIEvent : NSObject <NSSecureCoding> {

	GEOCacheInvalidationData* _invalidationData;
	BOOL _updateRequired;
	GEOMapItemIdentifier* _identifier;
	NSString* _localizedName;
	GEOCoarseLocationLatLng _centerCoordinate;
	long long _expectedAttendance;
	NSArray* _categories;
	NSArray* _relatedPOIIdentifiers;
	NSDateInterval* _dateInterval;
	NSTimeZone* _timeZone;
	NSArray* _hours;
	NSArray* _performers;

}

@property (nonatomic,retain) GEOCacheInvalidationData * invalidationData;                //@synthesize invalidationData=_invalidationData - In the implementation block
@property (nonatomic,retain) GEOMapItemIdentifier * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * localizedName;                                   //@synthesize localizedName=_localizedName - In the implementation block
@property (assign,nonatomic) GEOCoarseLocationLatLng centerCoordinate;                   //@synthesize centerCoordinate=_centerCoordinate - In the implementation block
@property (assign,nonatomic) long long expectedAttendance;                               //@synthesize expectedAttendance=_expectedAttendance - In the implementation block
@property (nonatomic,retain) NSArray * categories;                                       //@synthesize categories=_categories - In the implementation block
@property (nonatomic,retain) NSArray * relatedPOIIdentifiers;                            //@synthesize relatedPOIIdentifiers=_relatedPOIIdentifiers - In the implementation block
@property (nonatomic,retain) NSDateInterval * dateInterval;                              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                                      //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,retain) NSArray * hours;                                            //@synthesize hours=_hours - In the implementation block
@property (nonatomic,retain) NSArray * performers;                                       //@synthesize performers=_performers - In the implementation block
@property (getter=isUpdateRequired,nonatomic,readonly) BOOL updateRequired;              //@synthesize updateRequired=_updateRequired - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isUpdateRequiredForInvalidationData:(id)arg1 ;
+(BOOL)isUpdateRequiredForInvalidationToken:(id)arg1 error:(id*)arg2 ;
-(NSDateInterval *)dateInterval;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)localizedName;
-(NSTimeZone *)timeZone;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(void)setCategories:(NSArray *)arg1 ;
-(GEOCoarseLocationLatLng)centerCoordinate;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(id)init;
-(id)initWithPlace:(id)arg1 ;
-(NSArray *)categories;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setExpectedAttendance:(long long)arg1 ;
-(void)setPerformers:(NSArray *)arg1 ;
-(long long)expectedAttendance;
-(id)invalidationToken;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(GEOMapItemIdentifier *)arg1 ;
-(GEOMapItemIdentifier *)identifier;
-(void)setHours:(NSArray *)arg1 ;
-(NSArray *)hours;
-(BOOL)isUpdateRequired;
-(void)geoPOIEventCommonInit;
-(BOOL)configureWithComponents:(id)arg1 ;
-(BOOL)configureWithPOIComponent:(id)arg1 ;
-(BOOL)configureWithPlaceInfoComponent:(id)arg1 ;
-(id)dateIntervalFromDateTimeRanges:(id)arg1 ;
-(GEOCacheInvalidationData *)invalidationData;
-(id)initWithMapItemIdentifier:(id)arg1 ;
-(void)setInvalidationData:(GEOCacheInvalidationData *)arg1 ;
-(void)setCenterCoordinate:(GEOCoarseLocationLatLng)arg1 ;
-(NSArray *)relatedPOIIdentifiers;
-(void)setRelatedPOIIdentifiers:(NSArray *)arg1 ;
-(NSArray *)performers;
@end

