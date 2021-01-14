/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSString, NSDate;

@interface GEOQuickETATransitDeparturesInfo : NSObject {

	NSString* _direction;
	NSString* _headsign;
	BOOL _departuresHaveFrequency;
	double _departureFrequency;
	NSDate* _departureFrequencyValidUntil;

}

@property (nonatomic,readonly) NSString * direction;                               //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) NSString * headsign;                                //@synthesize headsign=_headsign - In the implementation block
@property (nonatomic,readonly) BOOL departuresHaveFrequency;                       //@synthesize departuresHaveFrequency=_departuresHaveFrequency - In the implementation block
@property (nonatomic,readonly) double departureFrequency;                          //@synthesize departureFrequency=_departureFrequency - In the implementation block
@property (nonatomic,readonly) NSDate * departureFrequencyValidUntil;              //@synthesize departureFrequencyValidUntil=_departureFrequencyValidUntil - In the implementation block
-(NSString *)direction;
-(id)description;
-(id)_chooseMostImportantTransitLegInRoute:(id)arg1 ;
-(id)initWithComposedRoute:(id)arg1 ;
-(BOOL)departuresHaveFrequency;
-(NSDate *)departureFrequencyValidUntil;
-(NSString *)headsign;
-(double)departureFrequency;
@end

