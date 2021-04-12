/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)direction;
-(NSString *)headsign;
-(double)departureFrequency;
-(id)_chooseMostImportantTransitLegInRoute:(id)arg1 ;
-(id)initWithComposedRoute:(id)arg1 ;
-(BOOL)departuresHaveFrequency;
-(NSDate *)departureFrequencyValidUntil;
@end

