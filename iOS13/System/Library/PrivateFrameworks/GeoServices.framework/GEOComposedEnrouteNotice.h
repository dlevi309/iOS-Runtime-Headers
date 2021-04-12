/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOEnrouteNotice, GEOComposedRoute, NSArray, NSString, GEOComposedTrafficCamera, GEOComposedTrafficSignal, GEOLatLng;

@interface GEOComposedEnrouteNotice : NSObject <NSSecureCoding> {

	GEOEnrouteNotice* _enrouteNotice;
	GEOComposedRoute* _route;
	NSArray* _guidanceEvents;
	SCD_Struct_GE84 _routeCoordinate;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) GEOComposedTrafficCamera * trafficCamera; 
@property (nonatomic,readonly) GEOComposedTrafficSignal * trafficSignal; 
@property (nonatomic,readonly) BOOL hasHighlightDistance; 
@property (nonatomic,readonly) unsigned highlightDistance; 
@property (nonatomic,readonly) BOOL hasGroupIdentifier; 
@property (nonatomic,readonly) unsigned groupIdentifier; 
@property (nonatomic,readonly) BOOL hasPriority; 
@property (nonatomic,readonly) unsigned priority; 
@property (nonatomic,readonly) NSArray * guidanceEvents;                              //@synthesize guidanceEvents=_guidanceEvents - In the implementation block
@property (nonatomic,readonly) GEOLatLng * position; 
@property (nonatomic,readonly) SCD_Struct_GE84 routeCoordinate; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(unsigned)groupIdentifier;
-(unsigned)priority;
-(NSArray *)guidanceEvents;
-(BOOL)hasHighlightDistance;
-(unsigned)highlightDistance;
-(BOOL)hasPriority;
-(void)setRoute:(id)arg1 ;
-(id)initWithEnrouteNotice:(id)arg1 onRoute:(id)arg2 ;
-(GEOComposedTrafficCamera *)trafficCamera;
-(GEOComposedTrafficSignal *)trafficSignal;
-(SCD_Struct_GE84)routeCoordinate;
-(id)titleFormatForLocation:(id)arg1 ;
-(id)detailFormatForLocation:(id)arg1 ;
-(BOOL)hasGroupIdentifier;
@end

