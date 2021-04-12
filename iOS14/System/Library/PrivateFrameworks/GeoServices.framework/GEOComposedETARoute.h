/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/_GEORouteHypothesisMonitorETAProvider.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSArray, GEOETARoute, GEOETATrafficUpdateWaypointRoute;

@interface GEOComposedETARoute : NSObject <_GEORouteHypothesisMonitorETAProvider, NSSecureCoding> {

	NSUUID* _uniqueRouteID;
	NSUUID* _etauResponseID;
	NSArray* _legs;
	BOOL _hasValidTravelDurations;
	double _travelDuration;
	double _historicTravelDuration;
	double _travelDurationAggressiveEstimate;
	double _travelDurationConservativeEstimate;
	double _length;
	GEOETARoute* _geoETARoute;
	GEOETATrafficUpdateWaypointRoute* _geoETAWaypointRoute;

}

@property (nonatomic,readonly) double _hypothesis_travelDuration; 
@property (nonatomic,readonly) double _hypothesis_travelDurationAggressiveEstimate; 
@property (nonatomic,readonly) double _hypothesis_travelDurationConservativeEstimate; 
@property (nonatomic,readonly) NSUUID * uniqueRouteID;                                             //@synthesize uniqueRouteID=_uniqueRouteID - In the implementation block
@property (nonatomic,readonly) NSUUID * etauResponseID;                                            //@synthesize etauResponseID=_etauResponseID - In the implementation block
@property (nonatomic,readonly) BOOL hasValidTravelDurations;                                       //@synthesize hasValidTravelDurations=_hasValidTravelDurations - In the implementation block
@property (nonatomic,readonly) double travelDuration;                                              //@synthesize travelDuration=_travelDuration - In the implementation block
@property (nonatomic,readonly) double historicTravelDuration;                                      //@synthesize historicTravelDuration=_historicTravelDuration - In the implementation block
@property (nonatomic,readonly) double travelDurationAggressiveEstimate;                            //@synthesize travelDurationAggressiveEstimate=_travelDurationAggressiveEstimate - In the implementation block
@property (nonatomic,readonly) double travelDurationConservativeEstimate;                          //@synthesize travelDurationConservativeEstimate=_travelDurationConservativeEstimate - In the implementation block
@property (nonatomic,readonly) double length;                                                      //@synthesize length=_length - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(double)length;
-(NSUUID *)uniqueRouteID;
-(NSUUID *)etauResponseID;
-(id)geoTrafficBannerText;
-(id)description;
-(id)evStepInfos;
-(double)_hypothesis_travelDuration;
-(double)_hypothesis_travelDurationAggressiveEstimate;
-(double)_hypothesis_travelDurationConservativeEstimate;
-(double)travelDurationConservativeEstimate;
-(double)_hypothesis_travelDurationFromStep:(id)arg1 stepRemainingDistance:(double)arg2 ;
-(double)travelDurationAggressiveEstimate;
-(double)travelDurationToEndOfRouteFromStepID:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2 ;
-(BOOL)hasValidTravelDurations;
-(double)travelDuration;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_updateForOldResponse:(id)arg1 route:(id)arg2 ;
-(BOOL)_prepareForOldRequest:(id)arg1 route:(id)arg2 startRouteCoordinate:(SCD_Struct_GE87)arg3 ;
-(id)navigabilityInfo;
-(double)_travelDurationFromStepID:(unsigned long long)arg1 toStepID:(unsigned long long)arg2 currentStepRemainingDistance:(double)arg3 ;
-(double)travelDurationToEndOfLegFromStepID:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2 ;
-(double)historicTravelDuration;
-(id)initWithRouteForTesting:(id)arg1 ;
-(BOOL)prepareForRequest:(id)arg1 route:(id)arg2 startRouteCoordinate:(SCD_Struct_GE87)arg3 ;
-(BOOL)updateForResponse:(id)arg1 route:(id)arg2 ;
-(id)geoETAWaypointRoute;
-(id)geoETARoute;
@end

